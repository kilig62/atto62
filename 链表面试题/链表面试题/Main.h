#pragma once

#include<stdio.h>
#include<stdlib.h>

struct ListNode
{
	int val;
	struct ListNode *next;
};

typedef struct ListNode Node;

struct ListNode* reverseList(struct ListNode *head);//反转链表
struct ListNode* removeElements_1(struct ListNode* head, int val);//删除链表中所有的val，遇到等于val的就删除
struct ListNode* removeElements_2(struct ListNode* head, int val);//删除链表中所有的val，遇到不等于val的，就尾插到另一个链表中
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2);//合并有序链表
Node * createTestList1();
void testReverList();
Node * createTestList2();
void testRemoveAll();