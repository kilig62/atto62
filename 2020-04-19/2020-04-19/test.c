#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>

//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++
//	////先使用，后++
//	////将a的值先赋给b
//	////b=10;
//	////再++
//	////a=11;
//	//printf("%d\n", a);//11
//	//printf("%d\n", b);//10
//
//	//int b = ++a;//前置++
//	////先++，后使用
//	////先给a++
//	////a=11;
//	////再将a的值赋给b
//	////b=11;
//	//printf("%d\n", a);//11
//	//printf("%d\n", b);//11
//
//	//int b = a--;//后置--
//	////先使用，后--
//	////先将a的值赋给b
//	////b=10;
//	////再--
//	////a=9;
//	//printf("%d\n", a);//9
//	//printf("%d\n", b);//10
//
//	int b = --a;//前置--
//	//先--，后使用
//	//先--
//	//a=9;
//	//再将a的值赋给b
//	//b=9;
//	printf("%d\n", a);//9
//	printf("%d\n", b);//9
//
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//
//	printf("%d\n", b);
//
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c = a&&b;
//	//逻辑与--只关注真假--两个同时为真才为真
//
//	int c = a || b;
//	//逻辑或--只要有一个为真则为真，两个同时为假才为假
//	printf("%d\n", c);
//
//	system("pause");
//	return 0;
//}



//输出a,b中的较大值
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//
//	max = (a > b) ? (a) : (b);
//
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}


//逗号表达式--从第一个表达式开始计算，输出最后一个表达式
//int main()
//{
//	//int a = (1, 2, 3, 4, 5);
//	//printf("%d\n", a);//输出5
//
//	int a = 10;
//	int b = 2;
//	int c = 4;
//	int d = (a = b + c, b = c - a, c = c + b);
//
//	printf("%d\n", d);//输出2
//
//	system("pause");
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4] = 5;//[]--下标引用操作符
//	////*(arr + 4) = 5;
//
//	Add(2, 3); //()--函数调用操作符
//
//	system("pause");
//	return 0;
//}


////声明外部符号
//extern int g_val;
//
//int main()
//{
//	
//	//register int a = 10;//建议的作用
//
//	//printf("%d\n", g_val);
//
//	signed int a = 10;
//	unsigned int b = -10;
//
//	printf("%u\n", b);
//
//	system("pause");
//	return 0;
//}


//typedef unsigned int uint;//将unsigned int 重命名为 uint
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
////将struct Node
////{
////	int data;
////	struct Node* next;
////}
////重命名为Node
//
//
//int main()
//{
//	struct Node n;
//	Node n1;
//
//	unsigned int a = 10;
//	uint b = 10;
//
//	system("pause");
//	return 0;
//}


//打印100~200之间的素数

#include<stdio.h>
#include<stdlib.h>
//#include<math.h>
int main()
{
	int i = 101;
	int count = 0;
	while (i <= 200)
	{
		//printf("%d ", i);
		//判断i是否为素数
		int j = 2;
		while (j < i)
			//while (j<sqrt(i))
		{
			if (i%j == 0)
			{
				break;
			}
			j++;
		}
		if (i == j)
			//if (j>sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
		i += 2;
	}
	printf("\ncount=%d\n", count);

	system("pause");
	return 0;
}