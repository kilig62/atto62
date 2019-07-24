#define _CRT_SECURE_NO_WARNINGS 1

#include"DList.h"
#include<stdio.h>
#include<stdlib.h>

void menu()
{
	printf("**** 1.β��                        2.βɾ          ****\n");
	printf("**** 3.ͷ��                        4.ͷɾ          ****\n");
	printf("**** 5.����λ�ò���                6.����λ��ɾ��  ****\n");
	printf("**** 7.��ʾ                        8.����          ****\n");
}

void test()
{
	int input = 0;
	DLDataType data = 0;
	DLNode *PH = NULL;
	DLDataType val = 0;
	DListInit(&PH);
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
			DListPushBack(PH, data);
			break;
		case 2:
			DListPopBack(PH);
			break;
		case 3:
			printf("������Ҫ�������:");
			scanf("%d", &data);
			DListPushFront(PH, data);
			break;
		case 4:
			DListPopFront(PH);
			break;
		case 5:
			printf("������Ҫ���뵽�ĸ���ǰ��:");
			scanf("%d", &val);
			printf("������Ҫ�����ֵ:");
			scanf("%d", &data);
			DListInsertFront(DListFind(PH, val), data);
			break;
		case 6:
			printf("������Ҫɾ������:");
			scanf("%d", &data);
			DListErase(DListFind(PH, data));
			break;
		case 7:
			DListPrint(PH);
			break;
		case 8:
			DListDestroy(&PH);
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