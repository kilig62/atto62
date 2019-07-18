#pragma once

typedef int SDataType;
typedef struct SListNode
{
	SDataType _data;
	struct SListNode* _pNext;
}Node;

typedef struct SList
{
	Node* pHead;
}SList;

void SListInit(SList *p1);
Node* BuySListNode(SDataType data);//构造结点
void SListPushBack(SList *p1, SDataType data);//尾插
void SListPopBack(SList *p1);//尾删
void SListPushFront(SList *p1, SDataType data);//头插
void SListPopFront(SList *p1);//头删
Node* SListFind(SList *p1, SDataType data);
void SListInsertAfter(Node *pos, SDataType data);//任意位置插入
void SListErase(SList *p1, Node *pos);//任意位置删除
int SListSize(SList *p1);//找寻结点个数
SDataType SListFront(SList *p1);//获取第一个结点
SDataType SListBack(SList *p1);//必须保证有尾结点，获取最后一个结点
void PrintSList(SList *p1);//显示
void SListDestroy(SList *p1);
int SListEmpty(SList *p1);//置空
Node* ReverseSList(SList *p1);//反转单链表
Node* removeElements1(SList *p1, SDataType val);//删除所有为val的值
Node *removeElements2(SList *p1, SDataType val);//删除所有为val的值的第二种方法