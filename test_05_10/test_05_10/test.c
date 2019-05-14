#define _CRT_SECURE_NO_WARNINGS 1

//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832

#include<stdio.h>
#include<stdlib.h>

unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		unsigned int ret = 0;
		int i = 0;
		for (i = 0; i < 32; i++)
		{
			ret += ((value >> i) & 1) << (31 - i);
		}
		return ret;
	}
}

int main()
{
	unsigned int num = 0;
	printf("请输入一个数:");
	scanf_s("%d", &num);
	printf("翻转后的数为:%u\n", reverse_bit(num));
	system("pause");
	return 0;
}

//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//第一种方法
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("请输入两个数:");
	scanf("%d %d", &num1, &num2);
	int avg = num1 - (num1 - num2) / 2;
	printf("两个数的平均值为:%d\n", avg);
	system("pause");
	return 0;
}
//第二种方法

#include<stdio.h>
#include<stdlib.h>

int add(int x, int y)
{
	int tmp = 0;
	do{
		tmp = x^y;
		y = x&y;
		x = tmp;
		y <<= 1;
	} while (y != 0);
	return x;
}

int avg(int x, int y)
{
	return add(((x^y) >> 1), x&y);
}

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数:");
	scanf("%d %d", &a, &b);
	printf("两个数的平均值为:%d\n", avg(a, b));
	system("pause");
	return 0;
}


//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int single = 0;
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 4, 3, 2, 1, 9 };
	single = arr[0];
	for (i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		single = single^arr[i];
	}
	printf("%d\n", single);
	system("pause");
	return 0;
}


//4.
//有一个字符数组的内容为:"student a am i",
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）。

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

void swap(char*left, char*right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		--right;
	}
}

void reverse(char*arr)
{
	int len = strlen(arr);
	swap(arr, arr + len - 1);
	while (*arr != '\0')
	{
		char*start = arr;
		char*end = start;
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}
		swap(start, end - 1);
		if (*end != '\0')
			arr = end + 1;
		else
			arr = end;
	}
}

int main()
{
	char arr[] = "student a am i";
	reverse(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}

