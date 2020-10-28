#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//memmove模拟实现
//解决内存重叠


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
	//内存后重叠，到着拷贝即可
	char str[100] = "hello world";
	my_memmove(str + 6, str, 12);
	printf("%s\n", str);
	//内存前重叠 正这拷贝即可
	char str2[100] = "      hello world";
	my_memmove(str2, str2 + 6, 11);
	printf("%s\n", str2);

	return 0;
}