#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//打印100~200之间的素数

//int main()
//{
//	int i = 101;
//	int count = 0;
//	while (i <= 200)
//	{
//		int j = 2;
//		while (j < i)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//			j++;
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		i += 2;
//	}
//	printf("\ncount=%d\n", count);
//	system("pause");
//	return 0;
//}

//输出乘法口诀表

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			//打印一列
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//判断1000年~2000年之间的闰年

//int main()
//{
//	int count = 0;
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	system("pause");
//	return 0;
//}


//给定两个整形变量的值，将两个值的内容进行交换

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d b=%d\n", a, b);
//	system("pause");
//	return 0;
//}

//不允许创建临时变量，交换两个变量的值

//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	//容易溢出
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//
//
//	//异或(按(二进制位)异或)---相同为0，相反为1
//	//a=10------00001010
//	//b=20------00010100
//	a = a^b;//a=00011110
//	b = a^b;//b=00001010
//	a = a^b;//a=00010100
//
//	printf("a=%d b=%d\n", a, b);
//	system("pause");
//	return 0;
//}

//求十个整数中最大值

//int main()
//{
//	int arr[10] = { -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//
//	system("pause");
//	return 0;
//}

//将三个数从大到小输出

//当实参传给形参时
//形参时实参的一份临时拷贝
//所以对形参的修改不会影响实参
//形参
//该代码错误

//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 5;
//	int c = 2;
//	if (a < b)
//	{
//		//实参
//		Swap(a, b);
//	}
//	if (a < c)
//	{
//		Swap(a, c);
//	}
//	if (b < c)
//	{
//		Swap(b, c);
//	}
//	printf("%d %d %d\n", a, b, c);
//
//	system("pause");
//	return 0;
//}



//void Swap(int *px, int *py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 5;
//	int c = 2;
//	if (a < b)
//	{
//		//实参
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	printf("%d %d %d\n", a, b, c);
//
//	system("pause");
//	return 0;
//}


//求两个数的最大公约数

//int main()
//{
//	int a = 18;
//	int b = 24;
//	int c = 0;
//	while (c = a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("b=%d\n", b);
//	system("pause");
//	return 0;
//}


//求两个数的最小公倍数

int main()
{
	int a = 5;
	int b = 8;
	int n, m, c, t;
	n = a;
	m = b;
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	while (b != 0)
	{
		c = a%b;
		a = b;
		b = c;
	}
	printf("%d\n", m*n / a);
	system("pause");
	return 0;
}