#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu(){
	printf("*************************\n");
	printf("*******  1.play  ********\n");
	printf("*******  0.exit  ********\n");
	printf("*************************\n");
}

void level(){
	printf("***************************\n");
	printf("*******  1.simple  ********\n");
	printf("*******  2.medium  ********\n");
	printf("*******  3.difficult ******\n");
	printf("***************************\n");

}

void game(){
	char mine[ROWS][COLS] = { 0 };//布置的雷
	char show[ROWS][COLS] = { 0 };//扫出的雷
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(show, ROW, COL);
	
	SetMine(mine, ROW, COL);
	/*DisplayBoard(mine, ROW, COL);*/
	FindMine(mine, show, ROW, COL);
}

int main(){
	int input = 0;
	//设置随机数生成起点
	srand((unsigned int)time(NULL));

	do{
		menu();
		printf("choice>>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("exit");
			break;
		default:
			printf("choice error");
			break;
		}
	} while (input);

	return 0;
}