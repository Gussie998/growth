#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//����������
int main(){
	int a = 9;
	int b = 5;
	printf("����ǰ��a=%d b=%d\n", a, b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("������a=%d b=%d\n", a, b);
}

//int main(){
//	int a = 0;
//	int i = 0;
//	scanf("%d",&a);
//	for (i = 31; i > 0; i -= 2){
//		printf("%d ",(a >> i) & 1); 
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2){
//		printf("%d ", (a >> i) & 1);
//	}
//	return 0;
//
//}

//��������ͬ��bitλ����
//int count_dif(int a, int b){
//	int tmp = a^b;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp&(tmp - 1);
//		count++;
//	}
//	return count;
//
//}
//int main(){
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", count_diff(a, b));
//	return 0;
//}

////���������1�ĸ���
//int count_one(int n){
//	int count = 0;
//	while (n){
//		n = n&(n - 1);
//		//���������ұߵ�1ȥ��
//		//����1ѭ������
//		count++;
//	}
//	return count;
//}
////int count_one(int n){
////	int count = 0;
////	int i = 0;
////	for (i = 0; i < 32; i++){
////		if ((n >> i) & 1 == 1)
////			count++;
////	}
////	return count;
////}
//int main(){
//	int a = -1;
//	int ret = count_one(a);
//	printf("%d��1\n", ret);
//	return 0;
//}