#define _CRT_SECURE_NO_WARNINGS 1

//输出一个9*9大小的乘法口诀表
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


//实现一个n*n大小的乘法口诀表

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
	printf("请输入:");
	scanf("%d", &n);
	mulit(n);
	system("pause");
	return 0;
}