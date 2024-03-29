#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			board[i][j] = set;
		}
	}
}
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetBoard(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
 int get_board_count(char board[ROWS][COLS], int x, int y)
{
	    return board[x - 1][y] +
		 board[x - 1][y - 1] +
		 board[x - 1][y + 1] +
		 board[x][y - 1] +
		 board[x][y + 1] +
		 board[x + 1][y - 1] +
		 board[x + 1][y] +
		 board[x + 1][y + 1] - 8 * '0';
}
void FindBoard(char board[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("�������Ų��׵�����:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				Displayboard(board, row, col);
				break;
			}
			else
			{
				int count = get_board_count(board, x, y);
				show[x][y] = count + '0';
				Displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("��������������:>\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		Displayboard(board, row, col);
	}
}