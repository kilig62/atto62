#define _CRT_SECURE_NO_WARNINGS 1

#include"Sort.h"

void test()
{
	int a[] = { 9, 3, 5, 4, 9, 2, 7, 9, 3, 6, 8, 8 };
	int size = sizeof(a) / sizeof(int);

	quickSort(a, size);

	printArray(a, size);
}

int main()
{
	test();
	system("pause");
	return 0;
}