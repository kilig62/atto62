#define _CRT_SECURE_NO_WARNINGS 1


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定， 
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表

#include<stdio.h>
#include<stdlib.h>

void print(int n)
{
	int x = 0;
	for (x = 1; x <= n; x++)
	{
		int y = 0;
		for (y = 1; y <= x; y++)
		{
			int z = 0;
			z = x*y;
			printf("%d*%d=%-4d", y, x, z);
		}
		printf("\n");
	}
	return;
}
int main()
{
	int n = 0;
	printf("请输入行数：");
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}


//使用函数实现两个数的交换

#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	swap(&a, &b);
	printf("a = %d b = %d\n", a, b);
	system("pause");
	return 0;
}



//实现一个函数判断year是不是闰年

#include<stdio.h>
#include<stdlib.h>

int year(int i)
{
	return(((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0));
}
int main()
{
	int i = 0;
	printf("请输入要判断的年份：");
	scanf("%d", &i);
	if (year(i))
		printf("%d是闰年\n", i);
	else
		printf("%d不是闰年\n", i);
	getchar();
	system("pause");
	return 0;
}



//创建一个数组， 
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值

#include<stdio.h>
#include<stdlib.h>

void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i;
	}
}

void empty(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void reverse(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = sz - i - 1;
	}
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr, sz);
	print(arr, sz);
	empty(arr, sz);
	reverse(arr, sz);
	print(arr, sz);
	system("pause");
	return 0;
}


//实现一个函数，判断一个数是不是素数

#include<stdio.h>
#include<stdlib.h>

int judge_num(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return -1;
	}
	return 0;
}
int main()
{
	int num = 0;
	int result = 0;
	printf("请输入要判断的数字：");
	scanf("%d", &num);
	result = judge_num(num);
	if (result == 0)
		printf("%d是素数\n", num);
	else
		printf("%d不是素数\n", num);
	system("pause");
	return 0;
}