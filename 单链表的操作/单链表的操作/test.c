#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include"SList.h"
#include<stdlib.h>

void menu()
{  
	printf("**** 1.β������                          2.β��ɾ��           ****\n");
	printf("**** 3.ͷ������                          4.ͷ��ɾ��           ****\n");
	printf("**** 5.����λ�ò���                      6.����λ��ɾ��       ****\n");
	printf("**** 7.ͳ�ƽ�����                      8.���ص�һ��ֵ       ****\n");
	printf("**** 9.�������һ��ֵ                    10.��ʾ              ****\n");
	printf("**** 11.�ͷ�                             12.�ÿ�              ****\n");
	printf("**** 13.����                             14.ɾ��ָ��������ֵ  ****\n");
	printf("**** 15.ɾ��ָ��������ֵ�ĵڶ��ַ���                          ****\n");
}

void test()
{
	SList p1;
	SListInit(&p1);
	int input = 0;
	SDataType data;
	SDataType val;
	int count = 0;

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������Ҫ�������:");
			scanf("%d", &data);
			SListPushBack(&p1, data);
			break;
		case 2:
			SListPopBack(&p1);
			break;
		case 3:
			printf("������Ҫ�������:");
			scanf("%d", &data);
			SListPopFront(&p1, data);
			break;
		case 4:
			SListPopFront(&p1);
			break;
		case 5:
			printf("������Ҫ�嵽�ĸ�������:");
			scanf("%d", &val);
			printf("������Ҫ�������:");
			scanf("%d", &data);
			SListInsertAfter(SListFind(&p1, val), data);
			break;
		case 6:
			printf("������Ҫɾ������:");
			scanf("%d", val);
			SListErase(&p1, SListFind(&p1, val));
			break;
		case 7:
			count = SListSize(&p1);
			printf("������Ϊ:%d\n", count);
			break;
		case 8:
			data = SListFront(&p1);
			printf("��һ��ֵΪ:%d\n", data);
			break;
		case 9:
			data = SListBack(&p1);
			printf("���һ��ֵΪ:%d\n", data);
			break;
		case 10:
			PrintSList(&p1);
			break;
		case 11:
			SListDestroy(&p1);
			break;
		case 12:
			SListEmpty(&p1);
			printf("�ÿճɹ�!\n");
			break;
		case 13:
			ReverseSList(&p1);
			break;
		case 14:
			printf("������Ҫɾ����ֵ:");
			scanf("%d", &data);
			removeElements1(&p1, data);//ɾ������Ϊdata��ֵ
			break;
		case 15:
			printf("������Ҫɾ����ֵ:");
			scanf("%d", &data);
			removeElements2(&p1, data);//ɾ������Ϊdata��ֵ
			break;
		}
	} while (input);
}

int main()
{
	test();
	system("pause");
	return 0;
}