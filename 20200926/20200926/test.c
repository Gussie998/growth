# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////�������
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
//	printf("1\n"); //��һ�о�ֱ�Ӵ�ӡ��
//	for (i = 1; i < n; i++) //�ӵڶ��п�ʼ
//	{
//		for (j = i; j > 0; j--) //�Ӻ���ǰ�������һ�е�������ʹ��ǰ�ͱ�����
//		{
//			data[j] += data[j - 1]; //��ʽͬ�ϣ����ڱ����һά����ʽҲ����ˡ�
//		}
//
//		for (j = 0; j <= i; j++) //��һ�������ֱ�Ӵ�ӡ�ˡ�
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
//		printf("�ҵ���\n");
//	}
//	else{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}

int main(){
	//��ά����

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