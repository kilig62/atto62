#define _CRT_SECURE_NO_WARNINGS 1


//�����������α�����ֵ��������ֵ�����ݽ��н���
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 10;
	int b = 20;
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}


//����������ʱ���������������������ݣ������⣩
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 10;
	int b = 20;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}


//��ʮ�������е����ֵ
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int max = arr[0];
	int i = 0;
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max = %d\n", max);
	system("pause");
	return 0;
}



//������������С�������
#include<stdio.h>
#include<stdlib.h>


void Swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int a = 2;
	int b = 3;
	int c = 1;
	{
		if (a<b)
		{
			Swap(&a, &b);
		}
		if (a < c)
		{
			Swap(&a, &c);
		}
		if (b < c)
		{
			Swap(&b, &c);
		}
	}
	printf("%d %d %d\n", a, b, c);
	system("pause");
	return 0;
}





//�������������Լ��
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 36;
	int b = 45;
	int c = 0;
	while (c = a%b)
	{
		a = b;
		b = c;
	}
	printf("b = %d\n", b);
	system("pause");
	return 0;
}