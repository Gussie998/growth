# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////杨辉三角
//int main(){
//	int i;
//	int j;
//	int arr[20][20] = { 1 };
//	int n;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++){
//		arr[i][0] = 1;
//		for (j = 1; j <= i; j++){
//			arr[i][j] = arr[i - 1][j] + arr[i-1][j - 1];
//		}
//	}
//	for (i = 0; i < n; i++) 
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		putchar('\n');
//	}
//
//	return 0;
//}
//
//void yangHuiTriangle(int n)
//{
//	int data[30] = { 1 };
//
//	int i, j;
//	printf("1\n"); //第一行就直接打印了
//	for (i = 1; i < n; i++) //从第二行开始
//	{
//		for (j = i; j > 0; j--) //从后向前填，避免上一行的数据在使用前就被覆盖
//		{
//			data[j] += data[j - 1]; //公式同上，由于变成了一维，公式也变简单了。
//		}
//
//		for (j = 0; j <= i; j++) //这一行填完就直接打印了。
//		{
//			printf("%d ", data[j]);
//		}
//		putchar('\n');
//	}
//}
//int find(int a[][3], int x, int y, int b){
//	int i = 0;
//	int j = x - 1;
//	while (i<y&&j>=0){
//		if (a[i][j] > b){
//			j--;
//		}
//		else if (a[i][j] < b){
//			i++;
//		}
//		else{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main(){
//	int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, {7,8,9}};
//	if (find(a, 3, 3, 7)){
//		printf("找到了\n");
//	}
//	else{
//		printf("没找到\n");
//	}
//	return 0;
//}

int main(){
	//二维数组

	int a[3][4] = { 0 };

	printf("%d\n\n", sizeof(a));

	printf("%d\n\n", sizeof(a[0][0]));

	printf("%d\n\n", sizeof(a[0]));

	printf("%d\n\n", sizeof(a[0] + 1));

	printf("%d\n\n", sizeof(*(a[0] + 1)));

	printf("%d\n\n", sizeof(a + 1));

	printf("%d\n\n", sizeof(*(a + 1)));

	printf("%d\n\n", sizeof(&a[0] + 1));

	printf("%d\n\n", sizeof(*(&a[0] + 1)));

	printf("%d\n\n", sizeof(*a));

	printf("%d\n\n", sizeof(a[3]));
	return 0;
}