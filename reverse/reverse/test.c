#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void reverse(char* left,char* right){
	while (left < right){
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void reverseStr(char * str){
	char*left = str;
	char *right = str + strlen(str) - 1;
	while (*str){
		char*start = str;
		char *end = str;
		while (*end != ' '&&*end != '\0'){
			end++;
		}
		reverse(start, end - 1);
		//重置开始结束的指针
		if (*end != '\0')
			str = end + 1;
		else
			str = end;
	}
	reverse(left, right);

}

int main(){
	char arr[100] = { 0 };
	gets(arr);
	reverseStr(arr);
	printf("%s", arr);
	return 0;
}