#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


typedef struct ListNode//制作线性表永远是先把结构体确定了再去设计函数！
{
	int data;
    struct ListNode* next;
}ListNode, *ListHead;//ListHead*和*ListHead区别？？

ListHead Init_head();
void Insert_head(ListHead head, int elem);
int  Insert_index(ListHead head, int idex, int elem);
int List_length(ListHead head);
int Delete_node(ListHead head, int index);
ListNode* Search_node(ListHead head, int elem);
void Printf_list(ListHead head);
void Destory_list(ListHead head);

void Myinsert_head(ListHead head);
void Myinsert_tail(ListHead head);