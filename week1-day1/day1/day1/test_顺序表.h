#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#define Init_size 10//无需分号，初始大小
#define growth_factor 2//扩容倍数

typedef struct  Sqlist
{
	int* data;
	int length;
	int capacity;
}Sqlist;

void Init_list(Sqlist* list);
Sqlist* Init_list_r1();
int  List_insert(Sqlist* list, int index, int elem);
Sqlist* check_capacity(Sqlist* list);
int List_delete(Sqlist* list, int index);
int Find_list_name(Sqlist* list, int elem);
void Printf_list(Sqlist* list);
void destory_list(Sqlist* list);
void stuff_list(Sqlist* list);
