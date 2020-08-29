#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>  //使用strlen()

//


//字符串逆序（递归实现）
//reverse_string(char arr[]){
//	char tmp = arr[0];
//	int len = strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (strlen(arr+1) > 1){
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = tmp;
//}
//int main(){
//	char arr[] = "asfssfsdgd";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//strlen
//非递归
//int m_strlen(char* str){
//	int count = 0;
//	while ('\0' != *str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
////递归
//int my_strlen(char* str){
//	if (*str != '\0'){
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main(){
//	char arr[] = "asjkhak";
//	int len = my_strlen(arr);
//	int len1 = m_strlen(arr);
//	printf("%d\n", len);
//	printf("%d\n", len1);
//	return 0;
//}

//返回数字之和
//int DigitSum(int n){
//	if (n > 9)
//	{
//		return DigitSum(n / 10);
//	}
//	else
//		return n;
//}
//int main(){
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = DigitSum(n);
//	printf("%d", ret);
//	return 0;
//}


//阶乘
//非递归
//int fac(int n){
//	int ret = 1;
//	for (int i = 1; i <= n; i++){
//		ret = ret*i;
//	}
//	return ret;
//}
////递归
//int fac1(int n){
//	if (n == 1)
//		return 1;
//	else if (n>=2)
//		return n*fac(n - 1);
//}
//int main(){
//	int n = 1;
//	scanf("%d", &n);
//	int ret = 0;
//	int ret1 = 0;
//	ret = fac(n);
//	ret1 = fac1(n);
//	printf("%d\n%d", ret, ret1);
//	return 0;
//}


//打印一个整数的每一位
//int print(int num){
//	if (num > 9){
//		print(num / 10);
//	}
//	printf("%d\t", num % 10);
//}
//int main(){
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


//实现n的k次方,递归
//int power(int n, int k){
//	if (k == 0)
//		return 1;
//	else if (k>0)
//		return n*power(n,k - 1);
//  else
//      return 1.0/power(n,-k)
//}
//
//int main(){
//	int n = 1;
//	int k = 0;
//	scanf("%d%d", &n,&k);
//	int ret = 0;
//	ret = power(n,k);
//	printf("%d\n", ret);
//	return 0;
//}

//第n个斐波那契数,暂时还不考虑溢出
//采用迭代 循环 方法
//int Fib(int n){
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2){
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//第n个斐波那契数
//过于多的重复
//递归效率低

//int Fib(int n){
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//	
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//乘法表
//void mul(int n){
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= i; j++){
//			printf("%d*%d=%d\t", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//}
//int main(){
//	int n = 1;
//	printf("输入n后获得乘法表>>>\n");
//	scanf("%d", &n);
//	mul(n);
//	return 0;
//}


//交换整数
//void swap(int* pa,int* pb){
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	swap(&a,&b);
//	printf("交换后：a=%d;b=%d", a, b);
//
//	return 0;
//}

//判断素数
//int is_prime(int num){
//	int i = 0;
//	for (i = 3; i <= sqrt(num); i++){
//		if (num %i == 0){
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main(){
//	int i = 0;
//	for (i = 101; i <= 200; i+=2){
//		if (is_prime(i) == 1){
//			printf("%d\t", i);
//		}
//	}
//	return 0;
//}

//判断是否是闰年
//int is_leap_year(int year){
//	if (year % 4 == 0 && year % 400 != 0 || year % 400==0){
//		return 1;
//	}
//	return 0;
//}
//int main(){
//	int y = 0;
//	for (y = 1001; y <= 2000; y++){
//		if (is_leap_year(y) == 1){
//			printf("%d\t", y);
//		}
//	}
//	return 0;
//}

//找数字
//int main(){
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 3;
//	int mid = 0;
//	while (left <= right){
//		mid = left + (right - left) / 2;
//		if (arr[mid] > key){
//			right = mid-1;
//		}
//		else if (arr[mid] < key){
//			left = mid+1;
//
//		}
//		else{
//			printf("找到了，下标是%d",mid);
//			break;
//		}
//	}
//	if(left>right)
//		printf("找不到\n");
//
//	return 0;
//}


//猜数字
//void menu()
//{
//	printf("********************************\n");
//	printf("*******     1. play      *******\n");
//	printf("*******     0. exit      *******\n");
//	printf("********************************\n");
//}
//
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int num = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &num);
//		if (num == ret)
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		else if (num > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜小了\n");
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}




//99乘法表
//int main(){
//	int i = 1;
//	int j = 1;
//	int ret = 1;
//	for (i = 1; i < 10; i++){
//		for (j = 1; j <= i; j++){
//			ret = i*j;
//			printf("%d*%d=%d\t", i, j, ret);
//		}
//		printf("\n");
//	}
//  return 0;
//}


//求10个整数内最大值
//int main(){
//	int arr[10] = {0};
//	int max = 0;
//	int i = 0;
//	printf("请输入十个整数:\n");
//	for (i = 0; i<10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 0; i <10; i++){
//		if (arr[i] > max){
//			max = arr[i];
//		}
//	}
//	printf("最大值为%d\n", max);
//	return 0;
//}


//分数求和1/1-1/2+1/3-……+1/99-1/100
//int main(){
//	int i = 1;
//	double ret = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++){
//		ret += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n",ret);
//	return 0;
//}


//1+2！+3！+……+10！
//int main(){
//	int i = 1;
//	int n = 0;
//	int sum = 0;
// 	int ret = 1;
//	int j = 0;
//	for (j = 1; j <= 10; j++){
//		ret = 1;
//		for (i = 1; i <= j; i++){
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("阶乘的和为%d",  sum);
//	return 0;
//}

//计算n的阶乘
//1*2*……*n
//int main(){
//	int n = 0;
//	int ret = 1;
//	printf("输入n：");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++){
//		ret = ret*i;
//	}
//	printf("%d的阶乘为%d",n, ret);
//
//
//	return 0;
//}

//9的个数
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//100-200素数
//int main(){
//	int num = 0;
//	int count = 0;
//	for (num = 101; num <= 201; num++){
//		int i = 0;
//		for ( i = 2; i < num; i++){
//			if (num%i == 0){
//				break;
//			}
//		}
//		if (i==num)
//			{
//			count++;
//			printf("%d ", num);
//			}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}



//打印1000-2000闰年
//int main(){
//	int year=1000;
//	printf("1000到2000之间的闰年是有:");
//	while (year < 2001){
//		if (year%4==0&&year%400!=0||year%400==0)
//	{
//		printf("%d\t",year);
//	}
//	year++;
//	}
//	return 0;
//}


//最大公约数
//int main() 
//{
//	int a;
//	int b;
//	int i;
//	printf("请输入俩个数：");
//	scanf("%d%d", &a, &b);
//	i = (a>b) ? b : a;
//	while (i>0)
//
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			printf("%d和%d的最大公约数是：%d", a, b, i);
//			break;
//		}
//			
//		i--;
//	}
//	return 0;
//}


//int main(){
//	for (int i = 1;i <=100 ;i++ )
//	{
//		if (i % 3 == 0){
//			printf("%d\t", i);
//		}
//	}
//		return 0;
//	}
//从大到小顺序输出
//int main()
//{
//	printf("请输入三个数：");
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("从大到小顺序为：%d\t%d\t%d",&a,&b,&c);
//	if (a>=b && a>=c)
//	{
//		if (b >= c){
//			printf("从大到小顺序为：%d\t%d\t%d",a,b,c);
//		}
//		else{ 
//			printf("从大到小顺序为：%d\t%d\t%d", a, c,b); 
//		}
//	}
//	else if (b > a && b >= c){
//		if (a >= c){
//			printf("从大到小顺序为：%d\t%d\t%d", b, a, c);
//		}
//		else
//		{
//			printf("从大到小顺序为：%d\t%d\t%d", b, c, a);
//		}
//	}
//	else
//	{
//		if (a>=b)
//		{
//			printf("从大到小顺序为：%d\t%d\t%d", c, a, b);
//		}
//		else
//		{
//			printf("从大到小顺序为：%d\t%d\t%d", c, b, a);
//		}
//	}
//	return 0;
//}
//100以内奇数&
//int main()
//{
//	for (int i = 0; i++; i < 100){
//		if (i % 2 == 1){
//			printf("%d",i);
//		}
//		return 0;
//	}
//}

//static修饰
//void test(){
//	int i = 0;
//	i++;
//	printf("%d",i);
//}
//int main(){
//	int i = 0;
//	while (i < 10){
//		test();
//		i++;
//	}
//	return 0;
//}
/*
int sum(int a)
{
	int c = 0;
	static int b = 3;
	c += 1;
	b += 2;
	return (a + b + c);
}
int main()
{
	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d,", sum(a));
	}
}
*/

//较大数
/*int main()
{
	printf("请输入俩个整数：");
	int num1;
	int num2;
	scanf("%d%d", &num1, &num2);
	if (num1 >= num2){
		if (num1>num2)
		{
			printf("较大额数字是：%d", num1);
		}
		else
		{
			printf("这俩个数一样大");
		}
	}

	else
	{
		printf("较大的数字是：%d", num2);
	}
	return 0;
}
*/
/*
int get_max(int x,int y)
{
	if (x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main(){

	printf("请输入俩个整数：");

	int num1;

	int num2;

	scanf("%d%d", &num1, &num2);

	int max = get_max(num1, num2);

	printf("max=%d\n", max);

	return 0;

}
*/