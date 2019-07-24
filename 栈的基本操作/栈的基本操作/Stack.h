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
STDataType StackTop(Stack *s);//获取栈顶元素
int StackSize(Stack *s);//获取栈内有效元素个数
int StackEmpty(Stack *s);
void StackDestroy(Stack *s);