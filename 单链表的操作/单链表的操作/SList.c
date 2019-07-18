#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void SListInit(SList *p1)
{
	assert(p1);
	p1->pHead = NULL;
}

Node* BuySListNode(SDataType data)
{
	Node* pNewNode = (Node*)malloc(sizeof(Node));
	if (pNewNode == NULL)
	{
		assert(0);
		return NULL;
	}
	pNewNode->_data = data;
	pNewNode->_pNext = NULL;
	return pNewNode;
}

void SListPushBack(SList *p1, SDataType data)
{
	Node *pNewNode = NULL;
	assert(p1);
	Node *Pcur = NULL;
	pNewNode = BuySListNode(data);
	Pcur = p1->pHead;//��ͷ��ʼ
	if (p1->pHead == NULL)//���ͷ���Ϊ�գ�ֱ�ӷ����½��
	{
		p1->pHead = pNewNode;
	}
	else
	{
		while (Pcur->_pNext)//ֻҪһֱ������һ����㣬���������
		{
			Pcur = Pcur->_pNext;
		}
		Pcur->_pNext = pNewNode;
	}
}

void SListPopBack(SList *p1)
{
	assert(p1);
	if (p1->pHead == NULL)
	{
		assert(0);
		return;
	}
	else if (p1->pHead->_pNext == NULL)
	{
		free(p1->pHead);
		p1->pHead = NULL;
	}
	else
	{
		Node *pPreNode = NULL;//ǰһ�����
		Node *pTailNode = p1->pHead;//β���
		while (pTailNode->_pNext)
		{
			pPreNode = pTailNode;
			pTailNode = pTailNode->_pNext;
		}
		free(pTailNode);
		pPreNode->_pNext = NULL;
	}
}

void SListPushFront(SList *p1, SDataType data)
{
	Node *pNewNode = NULL;
	assert(p1);
	pNewNode = BuySListNode(data);
	pNewNode->_pNext = p1->pHead;
	p1->pHead = pNewNode;
}

void SListPopFront(SList *p1)
{
	assert(p1);
	if (p1->pHead == NULL)
		return;
	else
	{
		Node *pDelNode = p1->pHead;
		p1->pHead = pDelNode->_pNext;
		free(pDelNode);
	}
}

Node* SListFind(SList *p1, SDataType data)
{
	assert(p1);
	Node *pCur = p1->pHead;
	while (pCur)
	{
		if (pCur->_data == data)
		{
			return pCur;
		}
		else
			pCur = pCur->_pNext;
	}
	return pCur;
}

void SListInsertAfter(Node *pos, SDataType data)
{
	Node *pNewNode = NULL;
	if (pos == NULL)
		return;
	pNewNode = BuySListNode(data);
	pNewNode->_pNext = pos->_pNext;
	pos->_pNext = pNewNode;
}

void SListErase(SList *p1, Node *pos)
{
	Node* pPreNode = NULL;
	assert(p1);
	if (p1->pHead == NULL || pos == NULL)
		return;
	if (pos == p1->pHead)//ֻ��һ�����
	{
		p1->pHead = pos->_pNext;
		free(pos);
		return;
	}
	pPreNode = p1->pHead;
	while (pPreNode->_pNext != pos)
	{
		pPreNode = pPreNode->_pNext;
	}
	pPreNode->_pNext = pos->_pNext;
	free(pos);
}

int SListSize(SList *p1)
{
	Node *pCur = NULL;
	int count = 0;
	assert(p1);
	pCur = p1->pHead;
	while (pCur)
	{
		pCur = pCur->_pNext;
		count++;
	}
	return count;
}

SDataType SListFront(SList *p1)
{
	assert(p1);
	return p1->pHead->_data;
}

SDataType SListBack(SList *p1)
{
	Node *pCur = NULL;
	assert(p1);
	pCur = p1->pHead;
	while (pCur->_pNext)
	{
		pCur = pCur->_pNext;
	}
	return pCur->_data;
}

void PrintSList(SList *p1)
{
	Node *pCur = NULL;
	assert(p1);
	pCur = p1->pHead;
	while (pCur)
	{
		printf("%d----->", pCur->_data);
		pCur = pCur->_pNext;
	}
	printf("NULL\n");
}

void SListDestroy(SList *p1)
{
	Node* pCur = NULL;
	assert(p1);
	pCur = p1->pHead;
	while (pCur)
	{
		p1->pHead = pCur->_pNext;
		free(pCur);
		pCur = p1->pHead;
	}
	p1->pHead = NULL;
}

int SListEmpty(SList *p1)
{
	assert(p1);
	return NULL == p1->pHead;
}

Node* ReverseSList(SList *p1)
{
	Node* ResultHead = NULL;//�������
	Node *pCur = NULL;
	assert(p1);
	pCur = p1->pHead;
	while (pCur != NULL)
	{
		Node *next = pCur->_pNext;
		pCur->_pNext = ResultHead;//ͷ�嵽��������У�������ȥ
		ResultHead = pCur;
		pCur = next;//cur->pNext�����˸ı䣬����next����
	}
	return ResultHead;
}

Node* removeElements1(SList *p1, SDataType val)
{
	Node *pPreNode = NULL;
	Node *pCur = NULL;
	assert(p1);
	pPreNode = p1->pHead;
	pCur = p1->pHead->_pNext;
	if (p1->pHead == NULL)
		return NULL;
	while (pCur)
	{
		if (pCur->_data == val)
		{
			pPreNode->_pNext = pCur->_pNext;
		}
		else
		{
			pPreNode = pCur;
		}
		pCur = pCur->_pNext;
	}
	if (p1->pHead->_data == val)
	{
		return p1->pHead->_pNext;
	}
	else
		return p1->pHead;
}

Node *removeElements2(SList *p1, SDataType val)
//����������val�ľ�β�嵽��һ��������
{
	Node *ResultHead = NULL;//��һ������
	Node *cur = p1->pHead;
	Node *last = NULL;
	while (cur != NULL)
	{
		Node* next = cur->_pNext;
		if (cur->_data != val)
		{
			if (ResultHead == NULL)//����������Ϊ�գ�ֱ�Ӳ���
			{
				ResultHead = cur;
			}
			else//β��
			{
				cur->_pNext = NULL;
				last->_pNext = cur;
			}
			last = cur;
		}
		cur = next;
	}
	return ResultHead;
}
