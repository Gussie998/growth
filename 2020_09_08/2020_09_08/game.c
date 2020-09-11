#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROWS][COLS],int rows,int cols,char set){
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++){
		for (j = 0; j < cols; j++){
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col){
	int i = 0;
	int j = 0;
	printf("-------------------------\n");
	//列号打印
	for (i = 0; i <= col; i++){
		printf("%d ", i);
	}

	printf("\n");

	for (i = 1; i <= row; i++){
		printf("%d ",i);//行号打印

		for (j = 1; j <= col; j++){
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------------------------\n");
}

void SetMine(char board[ROWS][COLS], int row, int col){
	int count = EASY_COUNT;
	while (count){
		//生成随机坐标
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		//布雷
		if (board[x][y] == '0'){
			board[x][y] = '1';
			count--;
		}

	}
}
int GetMineCount(char mine[ROWS][COLS], int x, int y){
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x - 1][y + 1] +
		mine[x][y - 1] + mine[x][y + 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col){
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<ROW*COL-EASY_COUNT)
	{
		printf("请输入坐标>>");
		scanf("%d%d", &x,&y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col){
			if (mine[x][y] == '1'){
				printf("炸死\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else{
			printf("非法坐标\n");
			DisplayBoard(mine, row, col);

		}
	}
	if (win == ROW*COL - EASY_COUNT){
		printf("排雷成功\n");
		DisplayBoard(show, row, col);
	}
}
