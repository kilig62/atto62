#define _CRT_SECURE_NO_WARNINGS 1


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���� 
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���

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
	printf("������������");
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}


//ʹ�ú���ʵ���������Ľ���

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



//ʵ��һ�������ж�year�ǲ�������

#include<stdio.h>
#include<stdlib.h>

int year(int i)
{
	return(((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0));
}
int main()
{
	int i = 0;
	printf("������Ҫ�жϵ���ݣ�");
	scanf("%d", &i);
	if (year(i))
		printf("%d������\n", i);
	else
		printf("%d��������\n", i);
	getchar();
	system("pause");
	return 0;
}



//����һ�����飬 
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ

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


//ʵ��һ���������ж�һ�����ǲ�������

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
	printf("������Ҫ�жϵ����֣�");
	scanf("%d", &num);
	result = judge_num(num);
	if (result == 0)
		printf("%d������\n", num);
	else
		printf("%d��������\n", num);
	system("pause");
	return 0;
}