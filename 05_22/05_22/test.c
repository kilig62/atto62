#define _CRT_SECURE_NO_WARNINGS 1


//��ӡ100-200֮�������
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d ", i);
		}
	}
	printf("\n%d\n", count);
	system("pause");
	return 0;
}




//���һ��9*9��С�ĳ˷��ھ���
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, k;
	int n = 9;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			k = i*j;
			printf("%d*%d=%3d ", i, j, k);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}


//ʵ��һ��n*n��С�ĳ˷��ھ���

#include<stdio.h>
#include<stdlib.h>

void mulit(int n)
{
	int i, j, k;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			k = i*j;
			printf("%d*%d=%4d ", i, j, k);
		}
		printf("\n");
	}
}

int main()
{
	int n;
	printf("������:");
	scanf("%d", &n);
	mulit(n);
	system("pause");
	return 0;
}


//�ж�1000�ꡪ��2000��֮�������


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	system("pause");
	return 0;
}