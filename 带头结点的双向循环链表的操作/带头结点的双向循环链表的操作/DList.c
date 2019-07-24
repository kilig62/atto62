#define _CRT_SECURE_NO_WARNINGS 1

#include"DList.h"
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

DLNode* BuyDlistNode(DLDataType data)
{
	DLNode *pNewNode = NULL;
	pNewNode = (DLNode*)malloc(sizeof(DLNode));
	if (pNewNode == NULL)
	{
		assert(0);
		return NULL;
	}
	pNewNode->_data = data;
	pNewNode->_pPre = NULL;
	pNewNode->_pNext = NULL;
	return pNewNode;
}

void DListInit(DLNode** pHead)
{
	assert(pHead);
	*pHead = BuyDlistNode(0);
	//前驱和后继都指向自己
	(*pHead)->_pPre = *pHead;
	(*pHead)->_pNext = *pHead;
}

void DListPushBack(DLNode *pHead, DLDataType data)
{
	DLNode *pNewNode = NULL;
	assert(pHead);
	pNewNode = BuyDlistNode(data);
	//先不要破坏链表结构
	pNewNode->_pPre = pHead->_pPre;
	pNewNode->_pNext = pHead;
	//破坏链表结构
	pHead->_pPre->_pNext = pNewNode;
	pHead->_pPre = pNewNode;
}

void DListPopBack(DLNode *pHead)
{
	assert(pHead);
	if (pHead == pHead->_pNext)//链表为空
	{
		return;
	}
	else
	{
		DLNode *pDelNode = pHead->_pPre;
		pHead->_pPre = pDelNode->_pPre;
		pDelNode->_pPre->_pNext = pHead;
		free(pDelNode);
	}
}

void DListPushFront(DLNode *pHead, DLDataType data)
{
	DLNode *pNewNode = NULL;
	assert(pHead);
	pNewNode = BuyDlistNode(data);
	pNewNode->_pNext = pHead->_pNext;
	pNewNode->_pPre = pHead;
	pHead->_pNext = pNewNode;
	pNewNode->_pNext->_pPre = pNewNode;
}

void DListPopFront(DLNode *pHead)
{
	DLNode *pDelNode = NULL;
	assert(pHead);
	if (pHead == pHead->_pNext)
	{
		return;
	}
	pDelNode = pHead->_pNext;
	pHead->_pNext = pDelNode->_pNext;
	pDelNode->_pNext->_pPre = pHead;
	free(pDelNode);
}

DLNode* DListFind(DLNode *pHead, DLDataType data)
{
	DLNode *pCur = pHead->_pNext;
	while (pCur != pHead)
	{
		if (pCur->_data == data)
		{
			return pCur;
		}
		pCur = pCur->_pNext;
	}
	return NULL;
}

void DListInsertFront(DLNode *pos, DLDataType data)
{
	DLNode *pNewNode = BuyDlistNode(data);
	if (pos == NULL)
		return;
	pNewNode->_pNext = pos;
	pNewNode->_pPre = pos->_pPre;
	pos->_pPre->_pNext = pNewNode;
	pos->_pPre = pNewNode;
}

void DListErase(DLNode *pos)
{
	if (pos == NULL)
		return;
	pos->_pPre->_pNext = pos->_pNext;
	pos->_pNext->_pPre = pos->_pPre;
	free(pos);
}

void DListPrint(DLNode *pHead)
{
	DLNode *pCur = NULL;
	assert(pHead);
	pCur = pHead->_pNext;
	while (pCur != pHead)
	{
		printf("%d ", pCur->_data);
		pCur = pCur->_pNext;
	}
	printf("\n");
}

void DListClear(DLNode *pHead)
{
	DLNode *pCur = NULL;
	assert(pHead);
	pCur = pHead->_pNext;
	while (pCur != pHead)
	{
		pHead->_pNext = pCur->_pNext;
		free(pCur);
		pCur = pHead->_pNext;
	}
	pHead->_pNext = pHead;
	pHead->_pPre = pHead;
}

void DListDestroy(DLNode **pHead)
{
	assert(pHead);
	DListClear(*pHead);
	free(*pHead);
	*pHead = NULL;
}