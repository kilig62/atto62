#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>

//int main()
//{
//	int a = 10;
//	//int b = a++;//����++
//	////��ʹ�ã���++
//	////��a��ֵ�ȸ���b
//	////b=10;
//	////��++
//	////a=11;
//	//printf("%d\n", a);//11
//	//printf("%d\n", b);//10
//
//	//int b = ++a;//ǰ��++
//	////��++����ʹ��
//	////�ȸ�a++
//	////a=11;
//	////�ٽ�a��ֵ����b
//	////b=11;
//	//printf("%d\n", a);//11
//	//printf("%d\n", b);//11
//
//	//int b = a--;//����--
//	////��ʹ�ã���--
//	////�Ƚ�a��ֵ����b
//	////b=10;
//	////��--
//	////a=9;
//	//printf("%d\n", a);//9
//	//printf("%d\n", b);//10
//
//	int b = --a;//ǰ��--
//	//��--����ʹ��
//	//��--
//	//a=9;
//	//�ٽ�a��ֵ����b
//	//b=9;
//	printf("%d\n", a);//9
//	printf("%d\n", b);//9
//
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//
//	printf("%d\n", b);
//
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c = a&&b;
//	//�߼���--ֻ��ע���--����ͬʱΪ���Ϊ��
//
//	int c = a || b;
//	//�߼���--ֻҪ��һ��Ϊ����Ϊ�棬����ͬʱΪ�ٲ�Ϊ��
//	printf("%d\n", c);
//
//	system("pause");
//	return 0;
//}



//���a,b�еĽϴ�ֵ
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//
//	max = (a > b) ? (a) : (b);
//
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}


//���ű��ʽ--�ӵ�һ�����ʽ��ʼ���㣬������һ�����ʽ
//int main()
//{
//	//int a = (1, 2, 3, 4, 5);
//	//printf("%d\n", a);//���5
//
//	int a = 10;
//	int b = 2;
//	int c = 4;
//	int d = (a = b + c, b = c - a, c = c + b);
//
//	printf("%d\n", d);//���2
//
//	system("pause");
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4] = 5;//[]--�±����ò�����
//	////*(arr + 4) = 5;
//
//	Add(2, 3); //()--�������ò�����
//
//	system("pause");
//	return 0;
//}


////�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	
//	//register int a = 10;//���������
//
//	//printf("%d\n", g_val);
//
//	signed int a = 10;
//	unsigned int b = -10;
//
//	printf("%u\n", b);
//
//	system("pause");
//	return 0;
//}


//typedef unsigned int uint;//��unsigned int ������Ϊ uint
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
////��struct Node
////{
////	int data;
////	struct Node* next;
////}
////������ΪNode
//
//
//int main()
//{
//	struct Node n;
//	Node n1;
//
//	unsigned int a = 10;
//	uint b = 10;
//
//	system("pause");
//	return 0;
//}


//��ӡ100~200֮�������

#include<stdio.h>
#include<stdlib.h>
//#include<math.h>
int main()
{
	int i = 101;
	int count = 0;
	while (i <= 200)
	{
		//printf("%d ", i);
		//�ж�i�Ƿ�Ϊ����
		int j = 2;
		while (j < i)
			//while (j<sqrt(i))
		{
			if (i%j == 0)
			{
				break;
			}
			j++;
		}
		if (i == j)
			//if (j>sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
		i += 2;
	}
	printf("\ncount=%d\n", count);

	system("pause");
	return 0;
}