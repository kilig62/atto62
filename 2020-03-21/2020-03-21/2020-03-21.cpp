#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int i = 10;
//	do
//	{
//		printf("%d\n", i);
//	} while (i < 10);
//
//		system("pause");
//	return 0;
//}

//练习
//1.计算n的阶乘

//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		ret *= i;
//		i++;
//	}
//	printf("ret=%d\n", ret);
//
//	system("pause");
//	return 0;
//}


//2.计算1!+2!+3!+...+10!

//int main()
//{
//	int i = 1;
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//
//	system("pause");
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机！\n请输入：");
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	system("pause");
//	return 0;
//}


//折半查找算法

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;//求出元素个数
	int key = 7;
	int mid = 0;
	while (left <= right)
	{
		//mid = (left + right) / 2;//可能会溢出
		mid = left + (right - left) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
			break;
	}
	if (left <= right)
		printf("找到了，下标是%d\n", mid);
	else
		printf("找不到\n");

	system("pause");
	return 0;
}