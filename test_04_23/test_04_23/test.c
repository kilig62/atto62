#define _CRT_SECURE_NO_WARNINGS 1

//写一个函数返回参数二进制中 1 的个数 
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}

#include<stdio.h>
#include<stdlib.h>

int count_one_bit(int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}

int main()
{
	int n = 0;
	printf("请输入数字:");
	scanf("%d", &n);
	int count = count_one_bit(n);
	printf("%d的二进制中1的个数为:%d\n", n, count);
	system("pause");
	return 0;
}


//获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。

#include<stdio.h>
#include<stdlib.h>

void showOE(int x)
{
	int arr1[16] = { 0 };
	int arr2[16] = { 0 };
	int j = 0;
	int k = 0;
	int i = 0;
	for (i = 0; i < 32; i += 2)
	{
		if (x&(1 << (31 - i)))
		{
			arr1[j] = 1;
		}
		j++;
		printf("%d ", x&(1 << (31 - i)));
		if (x&(1 << (30 - i)))
		{
			arr2[k] = 1;
		}
		k++;
		printf("%d ", x&(1 << (30 - i)));
	}
}

int main()
{
	int x = 12;
	showOE(x);
	system("pause");
	return 0;
}


//输出一个整数的每一位

#include<stdio.h>
#include<stdlib.h>

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int num = 0;
	printf("输入一个数:");
	scanf("%d", &num);
	print(num);
	printf("\n");
	system("pause");
	return 0;
}



//编程实现： 
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m = 0;
	int n = 0;
	int i = 0;
	int count = 0;
	printf("请输入两个整数:");
	scanf("%d %d", &m, &n);
	for (i = 0; i < 32; i++)
	{
		if ((m & 1) != (n & 1))
		{
			count++;
		}
		m = m >> 1;
		n = n >> 1;
	}
	printf("count=%d\n", count);
	system("pause");
	return 0;
}
