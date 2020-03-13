#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int MAX = 0;
//
//	//scanf("%d %d", &a, &b);
//	//if (a > b)
//	//	printf("MAX=%d\n", a);
//	//else
//	//	printf("MAX=%d\n", b);
//
//	scanf("%d %d", &a, &b);
//	printf("MAX=%d\n", a > b ? a : b);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int x, y, z;
//	x = y = 1;
//	z = x++, y++, ++y;//逗号表达式的优先级低于赋值运算符的优先级
//	//表达式应等价于：(z=x++),y++,++y
//	printf("%d %d %d \n", x, y, z);
//	//输出2 3 1
//	system("pause");
//	return 0;
//}


//typedef unsigned int unit_32;
//
//int main()
//{
//	//num1和num2这两个变量的类型是一样的
//	unsigned int num1 = 0;
//	unit_32 num2 = 0;
//	return 0;
//}



//static修饰局部变量

//void test()
//{
//	//int i = 0;
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}



//define定义标识符常量
#define MAX 1000

//define定义宏
#define ADD(X,Y)((X)+(Y))

#include<stdio.h>

int main()
{
	int sum = ADD(2, 3);
	printf("sum=%d\n", sum);
	sum = 10 * ADD(2, 3);
	printf("sum=%d\n", sum);

	return 0;
}