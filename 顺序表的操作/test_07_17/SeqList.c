#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"
#include<stdio.h>
#include<assert.h>
#include<malloc.h>
#include<memory.h>
#include<stdlib.h>

void SeqListInit(PSeqList ps)
{
	assert(ps);
	ps->arr = (DataType*)malloc((sizeof(DataType)) * 10);
	if (NULL == ps->arr)
	{
		assert(0);
		return;
	}
	ps->Capacity = 10;
	ps->size = 0;
}

void SeqListDestroy(PSeqList ps)
{
	assert(ps);
	if (ps->arr)
	{
		free(ps->arr);
		ps->arr = NULL;
		ps->Capacity = 0;
		ps->size = 0;
	}
}

void CheckCapacity(PSeqList ps)
{
	assert(ps);
	if (ps->size == ps->Capacity)
	{
		int newCapacity = ps->Capacity * 2;
		DataType *pTmp = (DataType*)malloc(sizeof(DataType)*newCapacity);
		if (NULL == pTmp)
		{
			assert(0);
			return;
		}
		memcpy(pTmp, ps->arr, ps->size*sizeof(DataType));
		free(ps->arr);
		ps->arr = pTmp;
		ps->Capacity = newCapacity;
	}
}

void SeqListPushBack(PSeqList ps, DataType data)
{
	assert(ps);
	//判断是否增容
	CheckCapacity(ps);
	ps->arr[ps->size] = data;
	ps->size++;
}

void SeqListPopBack(PSeqList ps)
{
	assert(ps);
	ps->size--;
}

void PrintSeqList(PSeqList ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}

void SeqListPushFront(PSeqList ps, DataType data)
{
	assert(ps);
	int i = 0;
	//判断是否需要增容
	CheckCapacity(ps);
	for (i = ps->size - 1; i >= 0; --i)
	{
		ps->arr[i + 1] = ps->arr[i];
	}
	ps->arr[0] = data;
	ps->size++;
}

void SeqListPopFront(PSeqList ps)
{
	assert(ps);
	int i = 0;
	for (i == 0; i < ps->size - 1; ++i)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

int SeqListFind(PSeqList ps, DataType data)
{
	assert(ps);
	for (int i = 0; i < ps->size; ++i)
	{
		if (ps->arr[i] == data)
			return i;
	}
	return -1;
}

void SeqListInsert(PSeqList ps, int pos, DataType data)
{
	assert(ps);
	int i = 0;
	if (pos<0 || pos>ps->size)
	{
		printf("插入位置不合法!\n");
		return;
	}
	CheckCapacity(ps);
	for (i = ps->size - 1; i >= pos; --i)
	{
		ps->arr[i + 1] = ps->arr[i];
	}
	ps->arr[pos] = data;
	ps->size++;
}

void SeqListErase(PSeqList ps, int pos)
{
	assert(ps);
	int i = 0;
	if (ps < 0 || pos >= ps->size)
	{
		printf("删除位置不合法!\n");
		return;
	}
	for (i = pos; i < ps->size; ++i)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

int SeqListCapacity(PSeqList ps)
{
	assert(ps);
	return ps->Capacity;
}


int SeqListSize(PSeqList ps)
{
	assert(ps);
	return ps->size;
}

int SeqListEmpty(PSeqList ps)
{
	assert(ps);
	return 0 == ps->size;
}

DataType SeqListFront(PSeqList ps)
{
	assert(ps);
	return ps->arr[0];
}

DataType SeqListBack(PSeqList ps)
{
	assert(ps);
	return ps->arr[ps->size - 1];
}


void SeqListRemove(PSeqList ps, DataType data)
{
	assert(ps);
	SeqListErase(ps, SeqListFind(ps, data));
}

void SeqListRemoveAll(PSeqList ps, DataType data)
{
	assert(ps);
	int count = 0;
	for (int i = 0; i < ps->size; ++i)
	{
		if (ps->arr[i] == data)
		{
			count++;
		}
		else
		{
			ps->arr[i - count] = ps->arr[i];
		}
	}
	ps->size -= count;
}