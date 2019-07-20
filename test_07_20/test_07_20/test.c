#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>

void PrintArray(int* array,int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

void MergeData(int* array, int left, int mid, int right, int* temp)
{
	int begin1 = left;
	int end1 = mid;
	int begin2 = mid;
	int end2 = right;
	int index = left;

	while (begin1 < end1&&begin2 < end2)
	{
		if (array[begin1] <= array[begin2])
		{
			temp[index++] = array[begin1++];
		}
		else
		{
			temp[index++] = array[begin2++];
		}
	}
	while (begin1 < end1)
	{
		temp[index++] = array[begin1++];
	}
	while (begin2 < end2)
	{
		temp[index++] = array[begin2++];
	}
}

void _MergeSort(int* array, int left, int right, int* temp)
{
	if (right - left <= 1)
	{
		return;
	}
	int mid = (left + ((right - left) >> 1));
	//[left,mid)  [mid,right)
	_MergeSort(array, left, mid, temp);
	_MergeSort(array, mid, right, temp);

	temp = (int*)malloc((right - left)*sizeof(array));
	if (NULL == temp)
		return;
	MergeData(array, left, mid, right, temp);
	memcpy(array + left, temp + left, (right - left)*sizeof(array[0]));
}

void MergeSort(int* array, int size)
{
	int* temp = (int*)malloc(sizeof(array[0]));
	if (NULL == temp)
		return;
	_MergeSort(array, 0, size, temp);
	free(temp);
}

int main()
{
	int array[] = { 3, 1, 5, 0, 8, 6, 4, 9, 7, 2 };
	PrintArray(array, sizeof(array) / sizeof(array[0]));
	MergeSort(array, sizeof(array) / sizeof(array[0]));
	PrintArray(array, sizeof(array) / sizeof(array[0]));

	system("pause");
	return 0;
}