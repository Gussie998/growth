#define _CRT_SECURE_NO_WARNINGS 1
#include "contackBook.h"
//
//void Test1(){
//
//	ContactBook cb;
//	ContactInit(&cb);
//
//	Contact ct1 = { "С��", 17, "18700209198", "���̴�"};
//	Contact ct2 = { "С��", 13, "18700209198", "���̴�" };
//	Contact ct3 = { "С��", 14, "18700209198", "���̴�" };
//	ContactAdd(&cb, ct1);
//	ContactAdd(&cb, ct2);
//	ContactAdd(&cb, ct3);
//
//}
enum OPTION{
	Exit,
	Add,
	Search,
	Del,
	Update
};

int ContactBookMenu(){

	Contact ct;
	Contact ct1 = { "gussie", 17, "18700278998", "���̴�" };
	Contact ct2 = { "luna", 13, "18700249191", "���̴�" };
	Contact ct3 = { "juicy", 14, "18700245199", "���̴�" };

	ContactBook cb;
	ContactInit(&cb);
	ContactAdd(&cb, ct1);
	ContactAdd(&cb, ct2);
	ContactAdd(&cb, ct3);

	char name[NAME_MAX];
	char name2[NAME_MAX];
	int option;
	do{
		printf("**************************************\n");
		printf("****************0���˳�***************\n");
		printf("****************1�����***************\n");
		printf("****************2������***************\n");
		printf("****************3��ɾ��***************\n");
		printf("****************4���޸�***************\n");
		printf("**************************************\n");
		printf("��ѡ��>>>>");
		scanf("%d", &option);
		switch (option)
		{
		case Add:
			printf("����������Ҫ�����ϵ�˵���������͡��绰�͵�ַ>>>>\n");
			scanf("%s %d %s %s", ct.name, ct.age, ct.tel, ct.address);
			ContactAdd(&cb, ct);
			break;
		case Exit:
			break;
		case Search:
			printf("������Ҫ���ҵ���ϵ������; ");
			scanf("%s", name);
			Contact *pct = ContactSearch(&cb, name);
			if (pct == NULL)
			{
				printf("�޴���ϵ��\n");
			}
			else
			{
				printf("������%s\n", pct->name);
				printf("���䣺%d\n", pct->age);
				printf("�绰��%s\n", pct->tel);
				printf("��ַ��%s\n", pct->address);
			}
			break;
		case Del:
			printf("������Ҫɾ������ϵ������; ");
			scanf("%s", name);
			ContactDel(&cb, name);
			break;
		case Update:
			printf("******************************************\n");
			printf("****************1���޸�����***************\n");
			printf("****************2���޸�����***************\n");
			printf("****************3���޸ĵ绰***************\n");
			printf("****************4���޸ĵ�ַ***************\n");
			printf("******************************************\n");
			printf("��ѡ��>>>>");
			scanf("%d", &option);
			if (option == 1){
				char name[NAME_MAX];
				char name2[NAME_MAX];
				printf("����������ּ�������:\n");
				scanf("%s", name);
				scanf("%s", name2);
				ContactUpdateName(&cb, name, name2);
			}
			if (option == 2){
				char name[NAME_MAX];
				short age = 0;
				printf("��������Ҫ�������ּ�����:\n");
				scanf("%s", name);
				scanf("%d", &age);
				ContactUpdateAge(&cb, name, age);
			}
			if (option == 3){
				char name[NAME_MAX];
				char tel[TEL_MAX];
				printf("��������Ҫ�������ּ��绰:\n");
				scanf("%s", name);
				scanf("%s", tel);
				ContactUpdateTel(&cb, name, tel);
			}
			if (option == 4){
				char name[NAME_MAX];
				char address[ADDR_MAX];
				printf("��������Ҫ�������ּ���ַ:\n");
				scanf("%s", name);
				scanf("%s", address);
				ContactUpdateTel(&cb, name, address);
			}
			break;
		default:
		   printf("û�д�ѡ�������ѡ��\n");
		   break;
		} 
	}while (option);
	return 0;
}

//void Test2()
//{
//	ContactBook cb;
//	ContactInit(&cb);
//	Contact ct = { "����", 18, "18516283076", "������" };
//	for (int i = 0; i < 11; ++i)
//	{
//		ct.age = i;
//		ContactAdd(&cb, ct);
//	}
//
//	ContactBookPrint(&cb);
//}

int main(){
	//Test1();
	//Test2();
	ContactBookMenu();
	return 0;
}



////void Test1()
////{
////	ContactBook cb;
////	ContactInit(&cb);
////
////	Contact ct = { "С��", 18, "18516283075", "���ƴ� ����-3��¥-601" };
////	ContactAdd(&cb, ct);
////}
////
////enum OPTION
////{
////	QUIT = 0,
////	ADD = 1,
////	SEARCH = 2,
////	DEL = 3,
////	UPDATE = 4,
////};
////
////void ContackBookMenu()
////{
////	Contact ct;
////	Contact ct1 = { "����", 18, "18516283076", "������ ����-3��¥-601" };
////	Contact ct2 = { "�ν�", 20, "18516283077", "���ƴ� ����-3��¥-602" };
////	Contact ct3 = { "����", 25, "18516283078", "���ƴ� ����-3��¥-603" };
////
////	ContactBook cb;
////	ContactInit(&cb);
////	ContactAdd(&cb, ct1);
////	ContactAdd(&cb, ct2);
////	ContactAdd(&cb, ct3);
////
////	char name[NAME_MAX];
////	//char ch = '\0';
////
////
////	int option;
////	do{
////		printf("********************************************\n");
////		printf("1�������ϵ�� 2��������ϵ��\n");
////		printf("3��ɾ����ϵ�� 4���޸���ϵ��\n");
////		printf("0���˳�\n");
////		printf("��ѡ��");
////		scanf("%d", &option);
////		printf("********************************************\n");
////
////		switch (option)
////		{
////		case ADD:
////			printf("�������������� ���� �绰���� ��ַ��\n");
////			scanf("%s", ct.name);
////			scanf("%d", ct.age);
////			scanf("%s", ct.tel);
////			scanf("%s", ct.addr);
////			ContactAdd(&cb, ct);
////			break;
////		case SEARCH:
////			printf("������Ҫ�����˵�����:");
////			scanf("%s", name);
////			Contact* pct = ContactSearch(&cb, name);
////			if (pct == NULL)
////			{
////				printf("�޴���ϵ��\n");
////			}
////			else
////			{
////				printf("������%s\n", pct->name);
////				printf("���䣺%d\n", pct->age);
////				printf("�绰��%s\n", pct->tel);
////				printf("��ַ��%s\n", pct->addr);
////			}
////			break;
////		case DEL:
////			printf("������Ҫɾ���˵�����:");
////			scanf("%s", name);
////			ContactDel(&cb, name);
////			break;
////		case UPDATE:
////			printf("1����������  2�����µ绰\n");
////			printf("3����������  4�����µ�ַ\n");
////			printf("��ѡ��");
////			//scanf("%c", &ch);
////			scanf("%d", &option);
////			if (option == 2)
////			{
////				char name[NAME_MAX];
////				char tel[TEL_MAX];
////				printf("��������Ҫ�������ּ��绰:\n");
////				scanf("%s", name);
////				scanf("%s", tel);
////				ContactUpdateTel(&cb, name, tel);
////			}
////			break;
////		case QUIT:
////			break;
////		default:
////			printf("û�д�ѡ�������ѡ��\n");
////			break;
////		}
////	} while (option != 0);
////}
////
////void Test2()
////{
////	ContactBook cb;
////	ContactInit(&cb);
////	Contact ct = { "����", 18, "18516283076", "������ ����-3��¥-601" };
////	for (int i = 0; i < 501; ++i)
////	{
////		ct.age = i;
////		ContactAdd(&cb, ct);
////	}
////
////	ContactBookPrint(&cb);
////}
////
////int main()
////{
////	//Test1();
////	ContackBookMenu();
////	//Test2();
////
////	return 0;
////}