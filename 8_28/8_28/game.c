#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			board[i][j] = ' ';
		}
	}
}


void DisplayBoard(char board[ROW][COL], int row, int col){
	int i = 0;
	for (i = 0; i < row; i++){
		//数据
		int j = 0;
		for (j = 0; j < col; j++){
			printf(" %c ", board[i][j]);
			if (j < col - 1){
				printf("|");
			}
		}
		printf("\n");
		//分隔行
		if (i < row - 1){
			for (j = 0; j < col; j++){
				printf("---");
				if (j < col - 1){
					printf("|");
				}
			}
		}
		printf("\n");
	}
}
void PlayerMove(char board[ROW][COL], int row, int col){
	int x = 0;
	int y = 0;
	printf("玩家走>>");
	while (1){
	printf("请输入坐标："); 
	scanf("%d%d", &x, &y);
	if (x >= 1 && x <= row&&y >=1 && y <= col){
		if (board[x - 1][y - 1] == ' '){
			board[x - 1][y - 1] = '*';
			break;
		}
		else{
			printf("该坐标已被占用，请重新输入\n");
		}
	}
	else{
		printf("坐标非法，请重新输入\n");
	}

	}
}

void ComputerMove(char board[ROW][COL], int row, int col){
	printf("电脑走>>\n");
	
	while (1){
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' '){
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			if (board[i][j] == ' '){
				return 0;
			}
		}
	}
	return 1;
}

char CheckWin(char board[ROW][COL], int row, int col){
	int i = 0;
	//行
	for (i = 0; i < row; i++){ 
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' '){
			return board[i][0];
		}
	}
	//列
	for (i = 0; i < col; i++){
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' '){
			return board[0][i];
		}
	}
	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != 0){
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != 0){
		return board[1][1];
	}
	//平局
	if (IsFull(board,row,col) == 1){
		return 'Q';
	}
	return 'C';
}

//void Judge(char board[ROW][COL], int row, int col){
//	if (board[0][0] == '*' && board[1][1] == '*'&&board[2][2] == '*' ||   // "\"
//		board[0][2] == '*' && board[1][1] == '*'&&board[2][0] == '*' ||	  // "/"
//		board[0][0] == '*' && board[1][0] == '*'&&board[2][0] == '*' ||   //第一列
//		board[0][1] == '*' && board[1][1] == '*'&&board[2][1] == '*' ||	  //第二列
//		board[0][2] == '*' && board[1][2] == '*'&&board[2][2] == '*' ||   //第三列
//		board[0][0] == '*' && board[0][1] == '*'&&board[0][2] == '*' ||   //第一行
//		board[1][0] == '*' && board[1][1] == '*'&&board[1][2] == '*' ||	  //第二行
//		board[2][0] == '*' && board[2][1] == '*'&&board[2][2] == '*'      //第三行
//		){
//		printf("YOU Win！\n\n\n");
//	}
//	else if (
//		board[0][0] == '#' && board[1][1] == '#'&&board[2][2] == '#' ||   // "\"
//		board[0][2] == '#' && board[1][1] == '#'&&board[2][0] == '#' ||	  // "/"
//		board[0][0] == '#' && board[1][0] == '#'&&board[2][0] == '#' ||   //第一列
//		board[0][1] == '#' && board[1][1] == '#'&&board[2][1] == '#' ||	  //第二列
//		board[0][2] == '#' && board[1][2] == '#'&&board[2][2] == '#' ||   //第三列
//		board[0][0] == '#' && board[0][1] == '#'&&board[0][2] == '#' ||   //第一行
//		board[1][0] == '#' && board[1][1] == '#'&&board[1][2] == '#' ||	  //第二行
//		board[2][0] == '#' && board[2][1] == '#'&&board[2][2] == '#'      //第三行
//		){
//		printf("YOU Lose！\n\n\n");
//	}
//	else
//		printf("It is a draw！\n\n\n");
//}
