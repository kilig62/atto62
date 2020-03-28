#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

int get_max(int x, int y)
{
	return(x > y) ? (x) : (y);
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int max = 0;
	scanf("%d %d", &num1, &num2);
	max = get_max(num1, num2);
	printf("max=%d\n", max);

	system("pause");
	return 0;
}


void Swap1(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

void Swap2(int *px, int *py)
{
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int num1 = 1;
	int num2 = 2;
	Swap1(num1, num2);
	printf("Swap1::num1=%d num2=%d\n", num1, num2);
	Swap2(&num1, &num2);
	printf("Swap2::num1=%d num2=%d\n", num1, num2);

	system("pause");
	return 0;
}


//�ж�һ�����Ƿ�Ϊ����
int prime(int i)
{
	int j = 0;
	for (j = 2; j < i; j++)
	{
		if (i%j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	scanf("%d", &i);
	if (prime(i))
	{
		printf("����Ϊ����\n");
	}
	else
	{
		printf("������Ϊ����\n");
	}

	system("pause");
	return 0;
}



//�ж�һ���Ƿ�Ϊ����

int is_leap(int year)
{
	if ((year % 4 == 0 || year % 100 == 0) && year % 400 != 0)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int year = 0;
	scanf("%d", &year);
	if (is_leap(year))
	{
		printf("����Ϊ����\n");
	}
	else
	{
		printf("���겻Ϊ����\n");
	}

	system("pause");
	return 0;
}

//дһ��������ʵ��һ��������������Ķ��ֲ���

int binary_search(int arr[], int num, int left, int right)
{
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) >> 1;
		if (arr[mid] > num)
		{
			right = mid - 1;
		}
		else if (arr[mid] < num)
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int a = binary_search(arr, 7, 5, 8);
	if (a != -1)
	{
		printf("�ҵ��ˣ��±�Ϊ%d\n", a);
	}
	else
	{
		printf("û�ҵ�\n");
	}

	system("pause");
	return 0;
}

//дһ��������ÿ����һ������������ͻὫnum��ֵ����1
int Add(int *p)
{
	return((*p) += 1);
}

int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);

	system("pause");
	return 0;
}

//Ƕ��ʹ��
void new_line()
{
	printf("hehe\n");
}

void three_line()
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		new_line();
	}
}

int main()
{
	three_line();

	system("pause");
	return 0;
}


//��ʽ����
int main()
{
	char arr[20] = "hello";
	int ret = strlen(strcat(arr, "world"));

	printf("%d\n", ret);

	system("pause");
	return 0;
}