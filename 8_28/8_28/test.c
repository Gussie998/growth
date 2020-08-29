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
	InitBoard(board,ROW,COL);//初始化棋盘
	DisplayBoard(board, ROW, COL);// 打印棋盘
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
		printf("请选择>>>");
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
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}