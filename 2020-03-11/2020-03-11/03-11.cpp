#define _CRT_SECURE_NO_WARNINGS 1

//��׼�������ͷ�ļ�
#include<stdio.h>
#include<stdlib.h>



////������--��������
//int main()
//{
//	//printf--�������-�⺯��
//	printf("hehe\n");
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	printf("%d\n", sizeof(long double));//8
//
//	system("pause");
//	return 0;
//}



//int main()
//{
//	short age = 10;
//	float weight = 0;
//
//	age = 20;
//	weight = 20.0;
//
//	printf("age=%d\n", age);
//	printf("weight=%f\n", weight);
//
//	system("pause");
//	return 0;
//}


//int val = 10;//ȫ�ֱ���
//
//int main()
//{
//	int val = 20;//�ֲ�����
//	//��ȫ�ֱ����;ֲ�������ͻʱ�ֲ���������
//	printf("%d\n", val);
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("��������������:>");
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("%d\n", sum);
//
//	system("pause");
//	return 0;
//}

//while ѭ��
//int main()
//{
//	int i = 1;
//	while (i<6)
//	{
//		printf("%d\n", i);
//		i = i + 1;
//	}
//	system("pause");
//	return 0;
//}



//����
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("����������������:");
//	scanf("%d %d", &a, &b);
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//
//	system("pause");
//	return 0;
//}


//����

int main()
{
	int i = 0;
	int array[4] = { 1, 2, 3, 4 };
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", array[i]);
	}
	system("pause");
	return 0;
}