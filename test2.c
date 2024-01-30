#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("****************************\n");
	printf("*******   1.play   *********\n");
	printf("*******   0.exit   *********\n");
	printf("****************************\n");
}
void game()
{
	char board[ROWS][COLS] = {0};
	char show[ROWS][COLS] = { 0 };
	Initboard(board, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	Displayboard(board, ROW, COL);
	SetBoard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	FindBoard(board, show, ROW, COL);
}
void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}