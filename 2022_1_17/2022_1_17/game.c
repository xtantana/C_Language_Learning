#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//��ʼ������
void Initboard(char board[ROW][COL], int row, int col)//
{              
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//��ʼ��Ϊ�ո�
		}
	}
}
//void displayboard(char board[ROW][COL], int row, int ccol)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//��ӡһ������
//		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//		//��ӡ�ָ���
//		if(i<row-1)//���Ʒָ��еĴ�ӡ����
//			printf("---|---|---\n");
//	}
//}
void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡһ������    %c | %c | %c 
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//ÿ��ѭ����ӡ %c (�ո�%c�ո�)

			if (j < col - 1)//���� | �Ĵ�ӡ���� col-1  
				printf("|");
		}
		printf("\n");

		//��ӡ�ָ���
		if (i < row - 1)
		{
			//���Ʒָ��еĴ�ӡ����
			for (j = 0; j < col; j++)//��ӡ---|---|---
			{
				printf("---");//����---�Ĵ�ӡ����
				if (j < col - 1)//����|�Ĵ�ӡ����
					printf("|");
			}
		printf("\n");
		}
	}
}