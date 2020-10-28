#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//memmoveģ��ʵ��
//����ڴ��ص�


void * my_memmove(void * dst,const void *src,int size){
	const char *str_src = (const char *)src;
	char* str_dst = (char*)dst;
	if (str_dst > str_src){
		for (int end = size - 1; end >= 0; --end){
			*(str_dst + end) = *(str_src + end);
			//str_dst[end]=str_src[end];
		}
	}
	if (str_dst < str_src){
		for (int start = 0; start < size - 1;++start){
			*(str_dst + start) = *(str_src + start);
			//str_dst[start]=str_src[start];
		}
	}

	return dst;
}
int main(){
	//�ڴ���ص������ſ�������
	char str[100] = "hello world";
	my_memmove(str + 6, str, 12);
	printf("%s\n", str);
	//�ڴ�ǰ�ص� ���⿽������
	char str2[100] = "      hello world";
	my_memmove(str2, str2 + 6, 11);
	printf("%s\n", str2);

	return 0;
}