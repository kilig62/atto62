#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[10] = { 0 };//数组的不完全初始化
	//计算数组的元素个数
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对数组内容赋值，数组是使用下标来访问的，下标从0开始
	int i = 0;//做下标
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	//输出数组的内容
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	system("pause");
	return 0;
}


int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}

	system("pause");
	return;
}


int main()
{
	int arr[3][4] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			arr[i][j] = i * 4 + j;
		}
	}
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
	}
	system("pause");
	return 0;
}


int main()
{
	int arr[3][4];
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
	}
	system("pause");
	return 0;
}


void bubble_sort(int arr[])
{
	int sz = sizeof(arr) / sizeof(arr[0]);
	...
}

int main()
{
	int arr[] = { 3, 1, 7, 5, 8, 9, 0, 2, 4, 6 };
	bubble_sort(arr);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


