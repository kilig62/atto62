#define _CRT_SECURE_NO_WARNINGS 1

//标准输入输出头文件
#include<stdio.h>
#include<stdlib.h>



////主函数--程序的入口
//int main()
//{
//	//printf--输出函数-库函数
//	printf("hehe\n");
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	printf("%d\n", sizeof(long double));//8
//
//	system("pause");
//	return 0;
//}



//int main()
//{
//	short age = 10;
//	float weight = 0;
//
//	age = 20;
//	weight = 20.0;
//
//	printf("age=%d\n", age);
//	printf("weight=%f\n", weight);
//
//	system("pause");
//	return 0;
//}


//int val = 10;//全局变量
//
//int main()
//{
//	int val = 20;//局部变量
//	//当全局变量和局部变量冲突时局部变量优先
//	printf("%d\n", val);
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入两个操作数:>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("%d\n", sum);
//
//	system("pause");
//	return 0;
//}

//while 循环
//int main()
//{
//	int i = 1;
//	while (i<6)
//	{
//		printf("%d\n", i);
//		i = i + 1;
//	}
//	system("pause");
//	return 0;
//}



//函数
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("请输入两个操作数:");
//	scanf("%d %d", &a, &b);
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//
//	system("pause");
//	return 0;
//}


//数组

int main()
{
	int i = 0;
	int array[4] = { 1, 2, 3, 4 };
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", array[i]);
	}
	system("pause");
	return 0;
}