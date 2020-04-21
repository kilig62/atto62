#define _CRT_SECURE_NO_WARNINGS 1


将数组A中的内容和数组B中的内容进行交换(数组一样大)

#include<stdio.h>
#include<stdlib.h>

void swap(int arr1[], int arr2[], int leng)
{
	int i = 0;
	for (i = 0; i < leng; i++)
	{
		int t = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = t;
	}
}

int main()
{
	int i = 0;
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 5, 4, 3, 2, 1 };
	swap(arr1, arr2, sizeof(arr1) / sizeof(arr1[0]));
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}


计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5..... + 1 / 99 - 1 / 100的值

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 1;
	int flag = 1;
	double sum = 0.0;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + flag*(1.0 / i);
		flag = -flag;
	}
	printf("sum is %f\n", sum);
	system("pause");
	return 0;
}



编写程序数一下1到100的所有整数中出现多少次数字9

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num = 0;
	int count = 0;
	for (int n = 1; n <= 100; n++)
	{
		num = n;
		while (num > 0)
		{
			int d = num % 10;
			if (d == 9)
			{
				count++;
			}
			num /= 10;
		}
	}
	printf("9的个数为:%d\n", count);
	system("pause");
	return 0;
}