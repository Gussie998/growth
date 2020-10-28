#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//strstr Ä£Äâ

char * my_strstr( char* str1,  char* str2){
	assert(str1);
	assert(str2);
	while (*str1!='\0'){
		if (*str1 != *str2){
			++str1;
		}
		else {
			char* str1_start = str1++;
			char* str2_start = str2++;
			while (*str1 == *str2 && *str2 != '\0'){
				++str1;
				++str2;
			}
			if (*str2 == '\0'){
				return str1_start;
			}
			else{
				str2 = str2_start;
				str1 = str1_start+1;

			}
				
		}
	}
	return NULL;
}
int main(){
	char* url = "https://hahah.com/index";
	char protocol[128];
	char *pos1=my_strstr(url, ":");
	strncpy(protocol, url, pos1 - url);
	protocol[pos1 - url] = '\0';
	printf("%s\n", protocol);

	char domain_name[128];
	char * pos2 = url+(pos1-url) + 3;
	char* end=my_strstr(pos2, "/");
	strncpy(domain_name, pos2, end - pos2);
	domain_name[end - pos2] = '\0';
	printf("%s\n", domain_name);
	return 0;
}

////memcpyÄ£Äâ
//void  my_memcpy(void * dst,void * src,int size){
//	assert(dst);
//	assert(src);
//	char *str_dst = (char *)dst;
//	char *str_src = (char *)src;
//
//	for (int i = 0; i < size; ++i){
//		str_dst[i] = str_src[i];
//	}
//}
//
//int main(){
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int b[5];
//	my_memcpy(b, a, sizeof(int)* 5);
//	for (int i = 0; i < 5; ++i){
//		printf("%d ", b[i]);
//	}
//	printf("\n");
//	double c[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
//	double d[5];
//	my_memcpy(d, c, sizeof(double)* 5);
//	for (int i = 0; i < 5; ++i){
//		printf("%f ", d[i]);
//
//	}
//	printf("\n");
//	return 0;
//}