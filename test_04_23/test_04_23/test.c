#define _CRT_SECURE_NO_WARNINGS 1

//дһ���������ز����������� 1 �ĸ��� 
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ�� 
//}

#include<stdio.h>
#include<stdlib.h>

int count_one_bit(int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}

int main()
{
	int n = 0;
	printf("����������:");
	scanf("%d", &n);
	int count = count_one_bit(n);
	printf("%d�Ķ�������1�ĸ���Ϊ:%d\n", n, count);
	system("pause");
	return 0;
}


//��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�

#include<stdio.h>
#include<stdlib.h>

void showOE(int x)
{
	int arr1[16] = { 0 };
	int arr2[16] = { 0 };
	int j = 0;
	int k = 0;
	int i = 0;
	for (i = 0; i < 32; i += 2)
	{
		if (x&(1 << (31 - i)))
		{
			arr1[j] = 1;
		}
		j++;
		printf("%d ", x&(1 << (31 - i)));
		if (x&(1 << (30 - i)))
		{
			arr2[k] = 1;
		}
		k++;
		printf("%d ", x&(1 << (30 - i)));
	}
}

int main()
{
	int x = 12;
	showOE(x);
	system("pause");
	return 0;
}


//���һ��������ÿһλ

#include<stdio.h>
#include<stdlib.h>

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int num = 0;
	printf("����һ����:");
	scanf("%d", &num);
	print(num);
	printf("\n");
	system("pause");
	return 0;
}



//���ʵ�֣� 
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m = 0;
	int n = 0;
	int i = 0;
	int count = 0;
	printf("��������������:");
	scanf("%d %d", &m, &n);
	for (i = 0; i < 32; i++)
	{
		if ((m & 1) != (n & 1))
		{
			count++;
		}
		m = m >> 1;
		n = n >> 1;
	}
	printf("count=%d\n", count);
	system("pause");
	return 0;
}
