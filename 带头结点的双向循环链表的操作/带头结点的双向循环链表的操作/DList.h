#pragma once

typedef int DLDataType;
typedef struct DListNode//带头结点的双向循环链表
{
	DLDataType _data;
	struct DListNode* _pPre;
	struct DListNode* _pNext;
}DLNode;

DLNode* BuyDlistNode(DLDataType data);
void DListInit(DLNode** pHead);//初始化
void DListPushBack(DLNode *pHead, DLDataType data);//尾插
void DListPopBack(DLNode *pHead);//尾删
void DListPushFront(DLNode *pHead, DLDataType data);//头插
void DListPopFront(DLNode *pHead);//头删
DLNode* DListFind(DLNode *pHead, DLDataType data);//查找
void DListInsertFront(DLNode *pos, DLDataType data);//任意位置向前插入
void DListErase(DLNode *pos);//任意位置删除
void DListPrint(DLNode *pHead);//显示
void DListClear(DLNode *pHead);//将有效结点清除
void DListDestroy(DLNode **pHead);//销毁，要释放二级指针，也会改变指针的方向