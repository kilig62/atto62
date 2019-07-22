#define _CRT_SECURE_NO_WARNINGS 1

#include"Sort.h"
#include<stack>
#include<malloc.h>

void printArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\n");
}

// 插入排序
void insertSort(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int k = a[i];
		int j;
		for (j = i - 1; j >= 0 && a[j] < k; j--)
		{
			a[j + 1] = a[j];
		}

		a[j + 1] = k;
	}
}

// 希尔排序
void shellSort(int a[], int size)
{
	int gap = size;

	while (1)
	{
		gap = gap / 3 + 1;

		for (int i = 0; i < size; i++)
		{
			int k = a[i];
			int j;
			for (j = i - gap; j >= 0 && a[j] < k; j -= gap)
			{
				a[j + gap] = a[j];
			}
			a[j + gap] = k;
		}

		if (gap == 1)
		{
			break;
		}
	}
}

//选择排序

//直接选择排序

void selectSort1(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		//无序区间[0，size-i)
		//有序区间[size-i,size)
		int max = 0;
		for (int j = 0; j < size - i; j++)
		{
			if (a[j]>a[max])
			{
				max = j;
			}
		}
		int t = a[max];
		a[max] = a[size - i - 1];
		a[size - i - 1] = t;
	}
}

//直接选择排序(选最大的最后，最小的最前)

void selectSort2(int a[], int size)
{
	int left = 0;
	int right = size - 1;
	while (left < right)
	{
		int min = left;
		int max = left;
		for (int i = left + 1; i <= right; i++)
		{
			if (a[i] < a[min])
			{
				min = i;
			}
			if (a[i]>a[max])
			{
				max = i;
			}
		}
		swap(&a[min], &a[left]);
		if (max == left)
		{
			max = min;
		}
		swap(a + max, a + right);
		left++;
		right--;
	}
}

//堆排序

void heapify(int a[], int size, int index)
{
	int left = 2 * index + 1;
	int right = 2 * index + 2;

	if (left >= size)
	{
		return;
	}
	int max = left;
	if (right<size&&a[right]>a[left])
	{
		max = right;
	}
	if (a[index] >= a[max])
	{
		return;
	}
	swap(a + index, a + max);
	heapify(a, size, max);
}

void createHeap(int a[], int size)
{
	for (int i = (size - 2) / 2; i > 0; i--)
	{
		heapify(a, size, i);
	}
}

void heapSort(int a[], int size)
{
	createHeap(a, size);
	for (int i = 0; i < size; i++)
	{
		int t = a[0];
		a[0] = a[size - i - 1];
		a[size - i - 1] = t;

		heapify(a, size - 1, 0);
	}
}


//冒泡排序

void bubbleSort(int a[], int size)
{
	//把最大的数冒泡到最后

	for (int i = 0; i < size; i++)
	{
		int sorted = 1;

		//无序[0,size-i)
		//有序[size-i,size)
		//冒泡  无序区间
		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j]>a[j + 1])
			{
				swap(a + j, a + j + 1);
				sorted = 0;
			}
		}
		if (sorted == 1)
		{
			break;
		}
	}
}


//快速排序(分治算法)

//Hover法

int partition1(int a[], int left, int right)
{
	int begin = left;
	int end = right;
	int pivot = a[right];
	while (begin < end)
	{
		while (begin < end && a[begin] <= pivot)
		{
			begin++;
		}
		while (begin < end && a[end] >= pivot)
		{
			end--;
		}
		swap(a + begin, a + end);
	}
	swap(a + begin, a + right);

	return begin;
}

//挖坑法

int partition2(int a[], int left, int right)
{
	int begin = left;
	int end = right;
	int pivot = a[right];

	while (begin < end)
	{
		while (begin < end && a[begin] <= pivot)
		{
			begin++;
		}
		a[end] = a[begin];
		
		while (begin < end && a[end] >= pivot)
		{
			end--;
		}
		a[begin] = a[end];
	}
	a[begin] = pivot;

	return begin;
}

//前后下标法

int partition3(int a[], int left, int right)
{
	int div = left;
	int i = left;
	for (; i < right; i++)
	{
		if (a[i] < a[right])
		{
			swap(a + i, a + div);
			div++;
		}
	}
	swap(a + div, a + right);

	return div;
}
void quickSortNoR(int a[], int left, int right)
{
	std::stack<int>	s;
	s.push(left);
	s.push(right);

	while (!s.empty())
	{
		int high = s.top();	s.pop();
		int low = s.top(); s.pop();

		if (low >= high)
		{
			continue;
		}

		int pivotIndex = partition1(a, low, high);
		// [low, pivotIndex - 1]
		// [pivotIndex + 1, high]
		s.push(pivotIndex + 1);
		s.push(high);

		s.push(low);
		s.push(pivotIndex - 1);
	}
}

void quickSort(int a[], int size)
{
	quickSortNoR(a, 0, size - 1);
}

//归并排序
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

//非比较排序

void CountSort(int* array, int size)
{
	//1.计算数据范围
	int minValue = array[0];
	int maxValue = array[0];

	for (int i = 0; i < size; ++size)
	{
		if (array[i] < minValue)
			minValue = array[i];
		if (array[i]>maxValue)
			maxValue = array[i];
	}
	//2.获取计数空间
	int range = maxValue - minValue + 1;
	int* temp = (int*)malloc(range)*sizeof(int);

	if (NULL == temp)
		return;
	//3.统计每个元素出现的次数
	memset(temp, 0, sizeof(int)*range);
	for (int i = 0; i < size; ++i)
		temp[array[i] - minValue]++;
	//回收
	int index = 0;
	for (int i = 0; i < range; ++i)
	{
		while (temp[i])
		{
			array[index++] = i + minValue;

			temp[i]--;
		}
	}
	free(temp);
}