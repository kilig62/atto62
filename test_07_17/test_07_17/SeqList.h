#pragma once

typedef int DataType;
typedef struct SeqList
{
	DataType *arr;
	int size;//有效元素个数
	int Capacity;//容量
}SeqList,*PSeqList;

void SeqListInit(PSeqList ps);
void SeqListDestroy(PSeqList ps);
void SeqListPushBack(PSeqList ps, DataType data);//尾插
void SeqListPopBack(PSeqList ps);//尾删
void PrintSeqList(PSeqList ps);//显示
void SeqListPushFront(PSeqList ps, DataType data);//头插
void SeqListPopFront(PSeqList ps);//头删
int SeqListFind(PSeqList ps, DataType data);//查找
void SeqListInsert(PSeqList ps, int pos, DataType data);//任意位置插入
void SeqListErase(PSeqList ps, int pos);//任意位置删除
int SeqListCapacity(PSeqList ps);
int SeqListSize(PSeqList ps);
int SeqListEmpty(PSeqList ps);
DataType SeqListFront(PSeqList ps);
DataType SeqListBack(PSeqList ps);
void SeqListRemove(PSeqList ps, DataType data);//移除第一个为data的值
void SeqListRemoveAll(PSeqList ps, DataType data);//移除为data的所有值