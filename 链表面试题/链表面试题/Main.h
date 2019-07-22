#pragma once

#include<stdio.h>
#include<stdlib.h>

struct ListNode
{
	int val;
	struct ListNode *next;
};

typedef struct ListNode Node;

struct ListNode* reverseList(struct ListNode *head);//��ת����
struct ListNode* removeElements_1(struct ListNode* head, int val);//ɾ�����������е�val����������val�ľ�ɾ��
struct ListNode* removeElements_2(struct ListNode* head, int val);//ɾ�����������е�val������������val�ģ���β�嵽��һ��������
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2);//�ϲ���������
Node * createTestList1();
void testReverList();
Node * createTestList2();
void testRemoveAll();