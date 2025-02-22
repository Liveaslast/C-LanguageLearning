#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define  MAX_name 20
#define  MAX_data 100
#define  MAX_sex 10
#define  MAX_tele 20
#define  MAX_addr 30
#define DEFAULT_SZ 3
#define INC_SZ 2



//核心为两个结构体
//人的信息
typedef struct PeoInfo
{
	char name[MAX_name];
	int age;
	char sex[MAX_sex];
	char tele[MAX_tele];
	char addr[MAX_addr];
}PeoInfo;

typedef struct Contact
{
	PeoInfo* data;//创建一个能容纳100个人的通讯录
	int count;//记录通讯录中有几人
	int capacity;//当前通讯录的容量
}Contact;

//通讯录的信息（封装成一个结构体）
//typedef struct Contact
//{
//	PeoInfo data[MAX_data];//创建一个能容纳100个人的通讯录
//	int count;//记录通讯录中有几人
//}Contact;


//动态版本




void LoadContact( Contact* pc);


void CheckCapacity(Contact* pc);

void SaveContact(const Contact* pc);
void Destory(Contact* pc);


int InitContact(Contact* pc);

int  Addcontact(Contact* pc);

void Showcontact(const Contact* pc);

void Delcontact( Contact* pc);

void Search(Contact* pc);

void Sort_Contact(Contact* pc);

int cmp_peo_by_name(const void* e1, const void* e2);
int cmp_peo_by_age(const void* e1, const void* e2);
int cmp_peo_by_sex(const void* e1, const void* e2);
int cmp_peo_by_tele(const void* e1, const void* e2);
int cmp_peo_by_addr(const void* e1, const void* e2);

void sort_name(Contact* pc);
void sort_age(Contact* pc);
void sort_sex(Contact* pc);
void sort_tele(Contact* pc);
void sort_addr(Contact* pc);











