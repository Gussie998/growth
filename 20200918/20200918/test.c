#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//typedef struct Book{
//	char name[20];
//	short price;
//}BBBook;//类型重命名
//
//struct Book{
//	char name[20];
//	short price;
//}b2,b3,b4;//全局结构体变量
//
//int main(){
//	struct Book b1;//局部变量
//	strcpy(b1.name,"Cyuyan ");//数组不能以=这种方式赋值
//	b1.price = 55;
//	return 0;
//}
//
//

//struct Stu{
//	char name[20];
//	int age;
//};
//printf1(struct Stu stu){
//	printf("%s %d\n", stu.name, stu.age);
//}
//
//printf2(struct Stu* ps){
//	printf("%s%d\n", (*ps).name, (*ps).age);
//	printf("%s%d\n", ps->name, ps->age);
//
//}
//
//int main(){
//	struct Stu s1 = { "zhangsan", 12 };
//	print1(s1);//值传递，传值调用，变量拷贝，与原来的没关系
//	printf2(&s1);//找回原始数据
//	return 0;
//}

//喝汽水问题
int main(){
	int a = 1;
	int sum = 20;
	int count = sum / a;
	int empty = sum / a;//空瓶
	while (empty>1){
		count += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d ", count);
	return 0;
}
