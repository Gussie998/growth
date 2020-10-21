#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Ö¸Õëº¯ÊýÊµÏÖÃ°ÅÝÅÅÐòµÄÉý½µÐò
int greater(int x, int y){
	return x > y ? 1 : 0;
}

int less(int x, int y){
	return x < y ? 1 : 0;
}

void bubble_sort(int* a, int n, int(*p_compare)(int, int)){
	for (int j = 0; j < n - 1; j++){
		for (int  i = 0; i < n-j-1; i++)
		{
			if ((*p_compare)(a[i + 1], a[i])){
				int tmp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tmp;
			}
		}
	}
}

int main(){
	int a[10] = { 3, 2, 5, 8, 6, 4, 7, 9,1, 0 };
	bubble_sort(a, 10, less);
	for (int i = 0; i < 10; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	bubble_sort(a, 10, greater);
	for (int i = 0; i < 10; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}


//²éÕÒÐý×ª×Ö·û´®
int find(char * s1, char *s2){
	char tmp[256] = { 0 };
	strcpy(tmp, s1);
	strcat(tmp, s1);
	return strstr(tmp, s1)!=NULL;
}