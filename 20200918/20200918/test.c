#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//typedef struct Book{
//	char name[20];
//	short price;
//}BBBook;//����������
//
//struct Book{
//	char name[20];
//	short price;
//}b2,b3,b4;//ȫ�ֽṹ�����
//
//int main(){
//	struct Book b1;//�ֲ�����
//	strcpy(b1.name,"Cyuyan ");//���鲻����=���ַ�ʽ��ֵ
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
//	print1(s1);//ֵ���ݣ���ֵ���ã�������������ԭ����û��ϵ
//	printf2(&s1);//�һ�ԭʼ����
//	return 0;
//}

//����ˮ����
int main(){
	int a = 1;
	int sum = 20;
	int count = sum / a;
	int empty = sum / a;//��ƿ
	while (empty>1){
		count += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d ", count);
	return 0;
}
