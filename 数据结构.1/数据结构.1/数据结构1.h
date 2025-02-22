#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

typedef struct List_node
{
	int items;
	int opers;
	struct List_node* next;
}List_node, * List;

List Create_List(List* L);//头插法创建链表
void free_list(List L);//释放内存
void show_list(List L);//显示链表
//List combine_list(List* L1, List* L2);//合并链表
List combine_list(List L1, List L2);//合并链表


