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
Node* BuySListNode(SDataType data);//������
void SListPushBack(SList *p1, SDataType data);//β��
void SListPopBack(SList *p1);//βɾ
void SListPushFront(SList *p1, SDataType data);//ͷ��
void SListPopFront(SList *p1);//ͷɾ
Node* SListFind(SList *p1, SDataType data);
void SListInsertAfter(Node *pos, SDataType data);//����λ�ò���
void SListErase(SList *p1, Node *pos);//����λ��ɾ��
int SListSize(SList *p1);//��Ѱ������
SDataType SListFront(SList *p1);//��ȡ��һ�����
SDataType SListBack(SList *p1);//���뱣֤��β��㣬��ȡ���һ�����
void PrintSList(SList *p1);//��ʾ
void SListDestroy(SList *p1);
int SListEmpty(SList *p1);//�ÿ�
Node* ReverseSList(SList *p1);//��ת������
Node* removeElements1(SList *p1, SDataType val);//ɾ������Ϊval��ֵ
Node *removeElements2(SList *p1, SDataType val);//ɾ������Ϊval��ֵ�ĵڶ��ַ���