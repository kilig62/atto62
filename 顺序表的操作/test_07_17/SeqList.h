#pragma once

typedef int DataType;
typedef struct SeqList
{
	DataType *arr;
	int size;//��ЧԪ�ظ���
	int Capacity;//����
}SeqList,*PSeqList;

void SeqListInit(PSeqList ps);
void SeqListDestroy(PSeqList ps);
void SeqListPushBack(PSeqList ps, DataType data);//β��
void SeqListPopBack(PSeqList ps);//βɾ
void PrintSeqList(PSeqList ps);//��ʾ
void SeqListPushFront(PSeqList ps, DataType data);//ͷ��
void SeqListPopFront(PSeqList ps);//ͷɾ
int SeqListFind(PSeqList ps, DataType data);//����
void SeqListInsert(PSeqList ps, int pos, DataType data);//����λ�ò���
void SeqListErase(PSeqList ps, int pos);//����λ��ɾ��
int SeqListCapacity(PSeqList ps);
int SeqListSize(PSeqList ps);
int SeqListEmpty(PSeqList ps);
DataType SeqListFront(PSeqList ps);
DataType SeqListBack(PSeqList ps);
void SeqListRemove(PSeqList ps, DataType data);//�Ƴ���һ��Ϊdata��ֵ
void SeqListRemoveAll(PSeqList ps, DataType data);//�Ƴ�Ϊdata������ֵ