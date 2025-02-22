#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

typedef struct Complex
{
	float real;
	float image;
}Complex;

//把不同结构体成员名称可以一样吗？,貌似可以

typedef struct Complex_Ret
{
	float real;
	float image;
}Complex_Ret;

typedef struct Form
{
	Complex data1[100];
	Complex_Ret data2[100];
	int count1;
	int count2;
}Form;

void Initform(Form* hehe);//初始化顺序表
void Init_pfarr( Form* hehe);//初始化计算

void assign(Form* hehe);//指派操作数
void input(Form* hehe);//输入操作数

void Add(Form* hehe);
void Sub(Form* hehe);
void Mul(Form* hehe);
void Dev(Form* hehe);

