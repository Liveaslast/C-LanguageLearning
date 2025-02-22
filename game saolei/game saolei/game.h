#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <string.h>

#define ROW 4
#define COL 4
#define ROWS ROW+2
#define COLS COL+2
#define Count 2

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

void DisplayBoard(char board[ROWS][COLS], int row, int col);

void game();

void menu();

void Setmine(char board[ROWS][COLS], int row, int col);

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

int IsWin(char show[ROWS][COLS],char mine[ROWS][COLS],  int row, int col);

void Flag(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);

void DeFlag(char mine[ROWS][COLS],char show[ROWS][COLS],int x, int y);

void FlagAgain(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y);

void Unfold(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);

int get_mine_count(char board[ROWS][COLS], int x, int y);



