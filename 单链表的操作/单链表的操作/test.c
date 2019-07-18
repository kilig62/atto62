#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include"SList.h"
#include<stdlib.h>

void menu()
{  
	printf("**** 1.尾部插入                          2.尾部删除           ****\n");
	printf("**** 3.头部插入                          4.头部删除           ****\n");
	printf("**** 5.任意位置插入                      6.任意位置删除       ****\n");
	printf("**** 7.统计结点个数                      8.返回第一个值       ****\n");
	printf("**** 9.返回最后一个值                    10.显示              ****\n");
	printf("**** 11.释放                             12.置空              ****\n");
	printf("**** 13.逆置                             14.删除指定的所有值  ****\n");
	printf("**** 15.删除指定的所有值的第二种方法                          ****\n");
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
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入要插入的数:");
			scanf("%d", &data);
			SListPushBack(&p1, data);
			break;
		case 2:
			SListPopBack(&p1);
			break;
		case 3:
			printf("请输入要插入的数:");
			scanf("%d", &data);
			SListPopFront(&p1, data);
			break;
		case 4:
			SListPopFront(&p1);
			break;
		case 5:
			printf("请输入要插到哪个数后面:");
			scanf("%d", &val);
			printf("请输入要插入的数:");
			scanf("%d", &data);
			SListInsertAfter(SListFind(&p1, val), data);
			break;
		case 6:
			printf("请输入要删除的数:");
			scanf("%d", val);
			SListErase(&p1, SListFind(&p1, val));
			break;
		case 7:
			count = SListSize(&p1);
			printf("结点个数为:%d\n", count);
			break;
		case 8:
			data = SListFront(&p1);
			printf("第一个值为:%d\n", data);
			break;
		case 9:
			data = SListBack(&p1);
			printf("最后一个值为:%d\n", data);
			break;
		case 10:
			PrintSList(&p1);
			break;
		case 11:
			SListDestroy(&p1);
			break;
		case 12:
			SListEmpty(&p1);
			printf("置空成功!\n");
			break;
		case 13:
			ReverseSList(&p1);
			break;
		case 14:
			printf("请输入要删除的值:");
			scanf("%d", &data);
			removeElements1(&p1, data);//删除所有为data的值
			break;
		case 15:
			printf("请输入要删除的值:");
			scanf("%d", &data);
			removeElements2(&p1, data);//删除所有为data的值
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