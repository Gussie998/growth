#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>


//ѧ����Ϣ���������
int main(){
	char *info="17140216;80.845,90.55,100.00";
	char id[128];
	char sore[128];
	//scanf("%s", info);
	char * end = strstr(info, ";");
	strncpy(id, info, end - info);
	id[end - info] = '\0';
	printf("The each subject sore of No.");
	printf("%s ", id);
	char*end2 = info + (strlen(info));
	strncpy(sore, end + 1, end2 - end-1);
	sore[end2 - end - 1] = '\0';
	printf("is %s .\n", sore);
	return 0;
}

//ʮ������תʮ����

//int main()
//{
//	int a = 0XABCDEF;
//	printf("%15d\n", a);
//	return 0;
//}