#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include "sanziqi.h"
void menu()
{
	printf("***************************\n");
	printf("*******1.play  0.exit******\n");
	printf("***************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DispalyBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		DispalyBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DispalyBoard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("玩家胜利\n");
	}
	else if (ret == '#')
	{
		printf("人机胜利\n");
	}
	else
	{
		printf("平局\n");
	}
	DispalyBoard(board, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
		default:
			printf("选错啦！\n");
			break;
		}
	} while (input);
	return 0;
}