#pragma once

typedef int DLDataType;
typedef struct DListNode//��ͷ����˫��ѭ������
{
	DLDataType _data;
	struct DListNode* _pPre;
	struct DListNode* _pNext;
}DLNode;

DLNode* BuyDlistNode(DLDataType data);
void DListInit(DLNode** pHead);//��ʼ��
void DListPushBack(DLNode *pHead, DLDataType data);//β��
void DListPopBack(DLNode *pHead);//βɾ
void DListPushFront(DLNode *pHead, DLDataType data);//ͷ��
void DListPopFront(DLNode *pHead);//ͷɾ
DLNode* DListFind(DLNode *pHead, DLDataType data);//����
void DListInsertFront(DLNode *pos, DLDataType data);//����λ����ǰ����
void DListErase(DLNode *pos);//����λ��ɾ��
void DListPrint(DLNode *pHead);//��ʾ
void DListClear(DLNode *pHead);//����Ч������
void DListDestroy(DLNode **pHead);//���٣�Ҫ�ͷŶ���ָ�룬Ҳ��ı�ָ��ķ���