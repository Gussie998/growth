//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>

//冒泡排序
//void bubble_sort(int arr[],int n){
//	//趟数
//	for (int i = 0; i < n-1; i++){
//		int j = 0;
//		//比较交换次数
//		for (j = 0; j < n-1-i; j++){
//			int tmp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = tmp;
//		}
//	}
//}
//void print_arr(int arr[], int n){
//	int i = 0;
//	for (i = 0; i < n; i++){
//		printf("%d ",arr[i]);
//	}
//
//}
//
//int main(){
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,n);
//	print_arr(arr, n);
//	return 0;
//}

//交换数组
//int main(){
//	int arrA[10] = {1,2,3,4,5,6,7,8,9,10};
//	int arrB[10] = {10,20,30,40,50,60,70,80,90,100};
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < 10; i++){
//		tmp = arrA[i];
//		arrA[i] = arrB[i];
//		arrB[i] = tmp;
//	}
//	printf("arrA: ");
//	for (i = 0; i < 10; i++){
//		printf("%d ", arrA[i]);
//	}
//	printf("\n");
//	printf("arrB: ");
//	for (i = 0; i < 10; i++){
//		printf("%d ", arrB[i]);
//	}
//	printf("\n");
//	return 0;
//}
