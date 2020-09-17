#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

////打印数组
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int * p = arr;
//	for (int i = 0; i < 5; i++){
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

////逆序字符串
//void Reverse(char* str){
//	char * left = str;
//	char * right = str + strlen(str) - 1;
//	while (left < right){
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		++left;
//		--right;
//
//	}
//}
//int main(){
//	char str[] = "hello";
//	Reverse(str);
//	printf("%s\n", str);
//	return 0;
//}


//
////计算a+aa+aaa+aaaa+aaaaa
//int main(){
//	int a = 0;
//	int sum = 0;
//	scanf("%d", &a);
//	sum=
//	return 0;
//}


////菱形
//int main(){
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <= 6; i++){
//		for (j = 0; j < 6-i; j++){
//			printf(" ");
//		}
//		for (j = 0; j < 2*i + 1; j++){
//			printf("*");
//
//		}
//	printf("\n");
//	}
//	for (i = 0; i < 6; i++){
//		for (j = 0; j <= i; j++){
//			printf(" ");
//		}
//		for (j = 0; j <= 2*(5-i); j++){
//			printf("*");
//
//		}
//		printf("\n");
//	}
//	return 0;
//}


////水仙花
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}