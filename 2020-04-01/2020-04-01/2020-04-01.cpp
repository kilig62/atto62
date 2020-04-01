#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺����1234�����1 2 3 4

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



//��д��������������ʱ���������ַ����ĳ��ȡ�

int strlen(const char*str)//�ַ�ָ��
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


//��n�Ľ׳ˣ������������

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


//���n��쳲�������
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


//��n�Ľ׳�

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

//���n��쳲�������

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


