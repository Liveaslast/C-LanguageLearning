#pragma once

#define ROW 3
#define COL 3
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include <string.h>//strcmp->判断字符串是否相等
#include<windows.h>//Sleep
#include<stdlib.h>//system，srand->定义起点数字，rand生成随机数
#include<time.h>


//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void  DisplayBoard(char board[ROW][COL], int row, int col);

void PlayerMove(char board[ROW][COL], int row, int col);

void ComputerMove(char board[ROW][COL], int row, int col);

char Iswin(char board[ROW][COL], int row, int col);

//Intelligence(int x, int y);