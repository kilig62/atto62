#define _CRT_SECURE_NO_WARNINGS 1

//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832

#include<stdio.h>
#include<stdlib.h>

unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		unsigned int ret = 0;
		int i = 0;
		for (i = 0; i < 32; i++)
		{
			ret += ((value >> i) & 1) << (31 - i);
		}
		return ret;
	}
}

int main()
{
	unsigned int num = 0;
	printf("������һ����:");
	scanf_s("%d", &num);
	printf("��ת�����Ϊ:%u\n", reverse_bit(num));
	system("pause");
	return 0;
}

//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
//��һ�ַ���
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("������������:");
	scanf("%d %d", &num1, &num2);
	int avg = num1 - (num1 - num2) / 2;
	printf("��������ƽ��ֵΪ:%d\n", avg);
	system("pause");
	return 0;
}
//�ڶ��ַ���

#include<stdio.h>
#include<stdlib.h>

int add(int x, int y)
{
	int tmp = 0;
	do{
		tmp = x^y;
		y = x&y;
		x = tmp;
		y <<= 1;
	} while (y != 0);
	return x;
}

int avg(int x, int y)
{
	return add(((x^y) >> 1), x&y);
}

int main()
{
	int a = 0;
	int b = 0;
	printf("������������:");
	scanf("%d %d", &a, &b);
	printf("��������ƽ��ֵΪ:%d\n", avg(a, b));
	system("pause");
	return 0;
}


//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
//

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int single = 0;
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 4, 3, 2, 1, 9 };
	single = arr[0];
	for (i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		single = single^arr[i];
	}
	printf("%d\n", single);
	system("pause");
	return 0;
}


//4.
//��һ���ַ����������Ϊ:"student a am i",
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

void swap(char*left, char*right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		--right;
	}
}

void reverse(char*arr)
{
	int len = strlen(arr);
	swap(arr, arr + len - 1);
	while (*arr != '\0')
	{
		char*start = arr;
		char*end = start;
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}
		swap(start, end - 1);
		if (*end != '\0')
			arr = end + 1;
		else
			arr = end;
	}
}

int main()
{
	char arr[] = "student a am i";
	reverse(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}

