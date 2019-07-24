#pragma once

#include<assert.h>
#include<stdio.h>

typedef int STDataType;

typedef struct Stack
{
	STDataType* arr;
	int top;
	int capacity;
}Stack;

void StackInit(Stack* s);
void CheckCapacity(Stack *s);
void StackPush(Stack *s, STDataType data);
void StackPop(Stack *s);
STDataType StackTop(Stack *s);//��ȡջ��Ԫ��
int StackSize(Stack *s);//��ȡջ����ЧԪ�ظ���
int StackEmpty(Stack *s);
void StackDestroy(Stack *s);