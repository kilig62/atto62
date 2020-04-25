#define _CRT_SECURE_NO_WARNINGS 1

//�ݹ�ʵ�����n��쳲�������

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
	printf("������һ����:");
	scanf("%d", &n);
	printf("������쳲�������Ϊ:%d\n", fib(n));
	system("pause");
	return 0;
}


//�ǵݹ�ʵ�����n������쳲�������

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
	printf("������һ����:");
	scanf("%d", &n);
	printf("������쳲�������Ϊ:%d\n", fib(n));
	system("pause");
	return 0;
}


//��дһ������ʵ��n^k��ʹ�õݹ�ʵ��

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



//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ����1+7+2+9�����ĺ���19

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


//��дһ������reverse_string(char*string)(�ݹ�ʵ��)
//ʵ�֣��������ַ����е��ַ����������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

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


//�ݹ�ͷǵݹ�ֱ�ʵ��strlen 


//�ݹ�

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



//�ǵݹ�

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


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳� 

//�ݹ�

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


//�ǵݹ�
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



//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 

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

