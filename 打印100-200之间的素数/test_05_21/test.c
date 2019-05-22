#define _CRT_SECURE_NO_WARNINGS 1

//打印100-200之间的素数

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int count = 0;
//		for (j = 2; j <i; j++)
//		{
//			if (i%j == 0)
//				count++;
//		}
//		if (count==0)
//			printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}



#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d ", i);
		}
	}
	printf("\n%d\n", count);
	system("pause");
	return 0;
}