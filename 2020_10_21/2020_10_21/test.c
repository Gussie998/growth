#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>


////strcpy模拟实现
//char * my_strcpy(char * dst, const char* src){
//	char*ret = dst;
//	while (*dst++ = *src++);
//	return ret;
//}
//int main(){
//	char *str1 = "hellohello";
//	printf("%s\n", str1);
//	char str2[20] = { 0 };
//	my_strcpy(str2, str1);
//	printf("%s\n", str2);
//	return 0;
//}


////strcat模拟实现
//char*my_strcat(char* str1, char* str2){
//	assert(str1);
//	assert(str2);
//
//	while (*str1)
//	{
//		str1++;
//	}
//	while (*str1++ = *str2++);
//	return str1;
//}
//int main(){
//	//char *str1 = "hello";
//	char str1[20] = "hello";
//	char str2[] = "world";
//	char str3[20] = { 0 };
//	my_strcat(str1, str2);
//	printf("%s\n\n", str1);
//
//	my_strcat(str3, str1);
//	my_strcat(str3, str2);
//	printf("%s\n", str3);
//	return 0;
//}


//strcmp模拟实现
//int my_strcmp(const char *str1, const char*str2){
//	assert(str1);
//	assert(str2);
//	while (*str1&&*str2){
//		if (*str1 > *str2){
//			return 1;
//		}
//		else if (*str1 < *str2){
//			return -1;
//		}
//		else{
//			str1++;
//			str2++;
//		}
//	}
//		if (*str1){
//			return 1;
//		}
//		if (*str2){
//			return -1;
//		}
//		else {
//			return 0;
//		}
//	
//}
//int main(){
//	char *str1 = "abcd";
//	char *str2 = "abc";
//	char *str3 = "cba";
//	char *str4 = "cba";
//	printf("%d\n", my_strcmp(str1, str2));
//	printf("%d\n", my_strcmp(str2, str3));
//	printf("%d\n", my_strcmp(str4, str3));
//
//
//	return 0;
//}
//


////strlen模拟实现
//int my_strlen(const char*str){
//	int n = 0;
//	while (*str){
//		str++;
//		n++; 
//	}
//	return n;
//}
//int main(){
//	char *str = "qwerty";
//	printf("%d\n", my_strlen(str));
//	return 0;
//}