#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//交换俩个数
int main(){
	int a = 9;
	int b = 5;
	printf("交换前：a=%d b=%d\n", a, b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("交换后：a=%d b=%d\n", a, b);
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

//俩个数不同的bit位个数
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

////求二进制内1的个数
//int count_one(int n){
//	int count = 0;
//	while (n){
//		n = n&(n - 1);
//		//将数字最右边的1去掉
//		//几个1循环几次
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
//	printf("%d个1\n", ret);
//	return 0;
//}