#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//接受一个整型值（无符号），按照顺序打印它的每一位。例如：输入1234，输出1 2 3 4

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
	int num = 1234;
	print(num);
	printf("\n");

	system("pause");
	return 0;
}



//编写函数不允许创建临时变量，求字符串的长度。

int strlen(const char*str)//字符指针
{
	if (*str == '\0')
		return 0;
	else
		return 1 + strlen(str + 1);
}

int main()
{
	char *p = "abcdef";
	int len = strlen(p);
	printf("%d\n", len);

	system("pause");
	return 0;
}


//求n的阶乘（不考虑溢出）

int factorial(int n)
{
	if (n <= 1)
		return 1;
	else
		return n*factorial(n - 1);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = factorial(n);
	printf("%d\n", ret);

	system("pause");
	return 0;
}


//求第n个斐波那契数
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);

	system("pause");
	return 0;
}


//求n的阶乘

int factorial(int n)
{
	int result = 1;
	while (n > 1)
	{
		result *= n;
		n -= 1;
	}
	return result;
}

//求第n个斐波那契数

int fib(int n)
{
	int result;
	int pre_result;
	int next_older_result;
	result = pre_result = 1;
	while (n > 2)
	{
		n -= 1;
		next_older_result = pre_result;
		pre_result = result;
		result = pre_result + next_older_result;
	}
	return result;
}

int main()
{

	int n = 0;
	scanf("%d", &n);
	int ret = factorial(n);
	int tmp = fib(n);
	printf("%d %d\n", ret ,tmp);

	system("pause");
	return 0;
}


