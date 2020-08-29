#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"

void menu(){
	printf("******************\n");
	printf("****1. play*******\n");
	printf("****0. exit*******\n");
	printf("******************\n");
}

void game(){
	char board[ROW][COL] = { 0 };
	InitBoard(board,ROW,COL);//��ʼ������
	DisplayBoard(board, ROW, COL);// ��ӡ����
	while (1){
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
	}
}

int main(){
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("��ѡ��>>>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(); 
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}