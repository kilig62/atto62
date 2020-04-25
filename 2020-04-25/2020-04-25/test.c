#define _CRT_SECURE_NO_WARNINGS 1

//递归实现求第n个斐波那契数

#include<stdio.h>
#include<stdlib.h>


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
	printf("请输入一个数:");
	scanf("%d", &n);
	printf("该数的斐波那契数为:%d\n", fib(n));
	system("pause");
	return 0;
}


//非递归实现求第n个数的斐波那契数

#include<stdio.h>
#include<stdlib.h>

int fib(int n)
{
	int a1 = 1;
	int a2 = 2;
	int a3 = 0;
	if (n <= 2)
		return 1;
	else
	{
		while (n > 2)
		{
			a3 = a1 + a2;
			a1 = a2;
			a2 = a3;
			n--;
		}
	}
	return a3;
}
int main()
{
	int n = 0;
	printf("请输入一个数:");
	scanf("%d", &n);
	printf("该数的斐波那契数为:%d\n", fib(n));
	system("pause");
	return 0;
}


//编写一个函数实现n^k，使用递归实现

#include<stdio.h>
#include<stdlib.h>

int pow(int n, int k)
{
	if (k == 0)
	{
		return 0;
	}
	else if (k == 1)
	{
		return n;
	}
	else
	{
		return n*pow(n, k - 1);
	}
}
int main()
{
	int n = 3;
	int k = 3;
	printf("%d\n", pow(n, k));
	system("pause");
	return 0;
}



//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应返回1+7+2+9，它的和是19

#include<stdio.h>
#include<stdlib.h>

int DigitSum(n)
{
	if (n > 0)
	{
		return n % 10 + DigitSum(n / 10);
	}
	else
	{
		return 0;
	}
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d\n", DigitSum(num));
	system("pause");
	return 0;
}


//编写一个函数reverse_string(char*string)(递归实现)
//实现：将参数字符串中的字符反方向排列。
//要求：不能使用C函数库中的字符串操作函数。

#include<stdio.h>
#include<stdlib.h>

void reverse_string(char * string)
{
	if (*string == '\0')
		printf("%c", *string);
	else
	{
		reverse_string(++string);
		printf("%c", *(--string));
	}
}
int main()
{
	char s[] = "abcdefgh";
	reverse_string(s);
	printf("\n");
	system("pause");
	return 0;
}


//递归和非递归分别实现strlen 


//递归

#include<stdio.h>
#include<stdlib.h>
int my_strlen(char *string)
{
	int count = 0;
	if (*string != '\0')
	{
		string++;
		count = 1 + my_strlen(string);
	}
	return count;
}

int main()
{
	char *str = "abcdef";
	printf("%d\n", my_strlen(str));
	system("pause");
	return 0;
}



//非递归

#include<stdio.h>
#include<stdlib.h>
int my_strlen(char *string)
{
	int count = 0;
	while (*string++ != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char *str = "abcdef";
	printf("%d\n", my_strlen(str));
	system("pause");
	return 0;
}


//递归和非递归分别实现求n的阶乘 

//递归

#include<stdio.h>
#include<stdlib.h>

int Factor(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	return n*Factor(n - 1);
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = Factor(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}


//非递归
#include<stdio.h>
#include<stdlib.h>

int Factor(int n)
{
	int ret = 1;
	for (int i = 1; i <= n; i++)
	{
		ret = ret*i;
	}
	return ret;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = Factor(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}



//递归方式实现打印一个整数的每一位 

#include<stdio.h>
#include<stdlib.h>

void print(int n)
{
	if (n < 10)
	{
		printf("%d\n", n);
	}
	else
	{
		print(n / 10);
		printf("%d\n", n % 10);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}

