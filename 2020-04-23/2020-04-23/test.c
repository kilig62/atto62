#define _CRT_SECURE_NO_WARNINGS 1

//在屏幕上输出以下图案：
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*



#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j;
	for (i = 1; i <= 26; i += 2)
	{
		if (i <= 13)
		{
			for (j = 1; j <= i; j++)
				printf("*");
		}
		printf("\n");
		if (i == 13)
			printf("\n");
		if (i >= 13)
		{
			for (j = i; j < 24; j++)
				printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}




//求出0～999之间的所有“水仙花数”并输出。 
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int a, b, c;
	int sum;
	for (i = 100; i <= 999; i++)
	{
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		sum = a*a*a + b*b*b + c*c*c;
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}


//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字， 
//例如：2 + 22 + 222 + 2222 + 22222
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, i;
	int sum = 0;
	int add = 0;
	printf("请输入一个1-9的数字!\n");
	scanf("%d", &a);
	if (a >= 10 || a <= 0)
	{
		return 0;
	}
	for (i = 0; i < 5; i++)
	{
		add = add * 10 + a;
		sum = sum + add;
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}