#define _CRT_SECURE_NO_WARNINGS 1
//������������Ϸ

#include<stdio.h>
#include "game.h"
//��ӡ�˵�����
void menu()
{
	printf("********************************\n");
	printf("******* 1.paly    0.exit *******\n");
	printf("********************************\n");
}

void game()
{
	//���������Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ǿո�
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ����
	displayboard(board, ROW, COL);
}
void test()
{
	int input = 0;
	do
	{
		menu();//���ò˵�
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			/*printf("������\n");*/
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();

	return 0;
}