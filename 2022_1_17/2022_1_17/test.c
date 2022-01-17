#define _CRT_SECURE_NO_WARNINGS 1
//测试三子棋游戏

#include<stdio.h>
#include "game.h"
//打印菜单界面
void menu()
{
	printf("********************************\n");
	printf("******* 1.paly    0.exit *******\n");
	printf("********************************\n");
}

void game()
{
	//存放棋盘信息
	char board[ROW][COL] = { 0 };//全部是空格
	//初始化棋盘
	Initboard(board, ROW, COL);
	//打印棋盘
	displayboard(board, ROW, COL);
}
void test()
{
	int input = 0;
	do
	{
		menu();//调用菜单
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			/*printf("三子棋\n");*/
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();

	return 0;
}