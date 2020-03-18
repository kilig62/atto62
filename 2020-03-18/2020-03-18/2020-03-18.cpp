#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//int main()
//{
//	int coding = 0;
//	printf("你会去敲代码吗？:>");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("offer我来了\n");
//	}
//	else
//	{
//		printf("滚回家种地\n");
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int coding = 0;
//	printf("你会去敲代码吗？（选择 1 or 0 ），如果家里有矿，（选择 -1 ）:>");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("offer我来了\n");
//	}
//	else if (coding == 0)
//	{
//		printf("滚回家种地\n");
//	}
//	else if (coding == -1)
//	{
//		printf("请问还缺腿部挂件吗\n");
//	}
//
//	system("pause");
//	return 0;
//}



//判断一个数是否为奇数

//int main()
//{
//	int a = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("该数不是奇数!\n");
//	}
//	else
//	{
//		printf("该数为奇数!\n");
//	}
//
//	system("pause");
//	return 0;
//}


//输出1-100之间的奇数

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i += 2)
//	{
//		if (i % 2 == 0)
//			i += 2;
//		else
//			printf("%d ", i);
//	}
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	printf("输入一个数字:>\n");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//			//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//
//	system("pause");
//	return 0;
//}


//在屏幕上打印1-10的数字

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;//i=5时程序停止不会进行i++这一步
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}



//int main()
//{
//	//变种1
//	for (;;)//死循环（无判断表示条件为真）
//		//无初始化，无判断，无调整
//	{
//		printf("hehe\n");
//	}
//	//变种2
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//请问循环要循环多少次  //不循环

int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)//0赋值给k,该表达式为假
		k++;
	system("pause");
	return 0;
}