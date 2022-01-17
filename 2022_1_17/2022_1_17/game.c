#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//初始化棋盘
void Initboard(char board[ROW][COL], int row, int col)//
{              
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//初始化为空格
		}
	}
}
//void displayboard(char board[ROW][COL], int row, int ccol)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//打印一行数据
//		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//		//打印分割行
//		if(i<row-1)//控制分割行的打印次数
//			printf("---|---|---\n");
//	}
//}
void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印一行数据    %c | %c | %c 
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//每次循环打印 %c (空格%c空格)

			if (j < col - 1)//控制 | 的打印次数 col-1  
				printf("|");
		}
		printf("\n");

		//打印分割行
		if (i < row - 1)
		{
			//控制分割行的打印次数
			for (j = 0; j < col; j++)//打印---|---|---
			{
				printf("---");//控制---的打印次数
				if (j < col - 1)//控制|的打印次数
					printf("|");
			}
		printf("\n");
		}
	}
}