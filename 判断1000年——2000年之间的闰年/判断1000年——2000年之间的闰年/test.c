#define _CRT_SECURE_NO_WARNINGS 1

//判断1000年——2000年之间的闰年


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	system("pause");
	return 0;
}