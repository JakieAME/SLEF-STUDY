#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 80
#include <stdlib.h>
#include <time.h>
void Initboard(char board[ROWS][COLS], int rows, int cols, char set);
void Displayboard(char board[ROWS][COLS],int row,int col);
void SetBoard(char board[ROWS][COLS],int row,int col);
void FindBoard(char board[ROWS][COLS], char show[ROWS][COLS], int row,int col);