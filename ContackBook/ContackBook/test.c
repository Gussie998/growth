#define _CRT_SECURE_NO_WARNINGS 1
#include "contackBook.h"
//
//void Test1(){
//
//	ContactBook cb;
//	ContactInit(&cb);
//
//	Contact ct1 = { "小李", 17, "18700209198", "工程大"};
//	Contact ct2 = { "小李", 13, "18700209198", "工程大" };
//	Contact ct3 = { "小李", 14, "18700209198", "工程大" };
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
	Contact ct1 = { "gussie", 17, "18700278998", "工程大" };
	Contact ct2 = { "luna", 13, "18700249191", "工程大" };
	Contact ct3 = { "juicy", 14, "18700245199", "工程大" };

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
		printf("****************0、退出***************\n");
		printf("****************1、添加***************\n");
		printf("****************2、查找***************\n");
		printf("****************3、删除***************\n");
		printf("****************4、修改***************\n");
		printf("**************************************\n");
		printf("请选择>>>>");
		scanf("%d", &option);
		switch (option)
		{
		case Add:
			printf("请依次输入要添加联系人的姓名、年纪、电话和地址>>>>\n");
			scanf("%s %d %s %s", ct.name, ct.age, ct.tel, ct.address);
			ContactAdd(&cb, ct);
			break;
		case Exit:
			break;
		case Search:
			printf("请输入要查找的联系人姓名; ");
			scanf("%s", name);
			Contact *pct = ContactSearch(&cb, name);
			if (pct == NULL)
			{
				printf("无此联系人\n");
			}
			else
			{
				printf("姓名：%s\n", pct->name);
				printf("年龄：%d\n", pct->age);
				printf("电话：%s\n", pct->tel);
				printf("地址：%s\n", pct->address);
			}
			break;
		case Del:
			printf("请输入要删除的联系人姓名; ");
			scanf("%s", name);
			ContactDel(&cb, name);
			break;
		case Update:
			printf("******************************************\n");
			printf("****************1、修改姓名***************\n");
			printf("****************2、修改年龄***************\n");
			printf("****************3、修改电话***************\n");
			printf("****************4、修改地址***************\n");
			printf("******************************************\n");
			printf("请选择>>>>");
			scanf("%d", &option);
			if (option == 1){
				char name[NAME_MAX];
				char name2[NAME_MAX];
				printf("请输入旧名字及新名字:\n");
				scanf("%s", name);
				scanf("%s", name2);
				ContactUpdateName(&cb, name, name2);
			}
			if (option == 2){
				char name[NAME_MAX];
				short age = 0;
				printf("请输入你要更新名字及年龄:\n");
				scanf("%s", name);
				scanf("%d", &age);
				ContactUpdateAge(&cb, name, age);
			}
			if (option == 3){
				char name[NAME_MAX];
				char tel[TEL_MAX];
				printf("请输入你要更新名字及电话:\n");
				scanf("%s", name);
				scanf("%s", tel);
				ContactUpdateTel(&cb, name, tel);
			}
			if (option == 4){
				char name[NAME_MAX];
				char address[ADDR_MAX];
				printf("请输入你要更新名字及地址:\n");
				scanf("%s", name);
				scanf("%s", address);
				ContactUpdateTel(&cb, name, address);
			}
			break;
		default:
		   printf("没有此选项，请重新选择\n");
		   break;
		} 
	}while (option);
	return 0;
}

//void Test2()
//{
//	ContactBook cb;
//	ContactInit(&cb);
//	Contact ct = { "武松", 18, "18516283076", "西工程" };
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
////	Contact ct = { "小李", 18, "18516283075", "西科大 宿舍-3号楼-601" };
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
////	Contact ct1 = { "武松", 18, "18516283076", "西工程 宿舍-3号楼-601" };
////	Contact ct2 = { "宋江", 20, "18516283077", "西科大 宿舍-3号楼-602" };
////	Contact ct3 = { "李逵", 25, "18516283078", "西科大 宿舍-3号楼-603" };
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
////		printf("1、添加联系人 2、查找联系人\n");
////		printf("3、删除联系人 4、修改联系人\n");
////		printf("0、退出\n");
////		printf("请选择：");
////		scanf("%d", &option);
////		printf("********************************************\n");
////
////		switch (option)
////		{
////		case ADD:
////			printf("请依次输入姓名 年龄 电话号码 地址：\n");
////			scanf("%s", ct.name);
////			scanf("%d", ct.age);
////			scanf("%s", ct.tel);
////			scanf("%s", ct.addr);
////			ContactAdd(&cb, ct);
////			break;
////		case SEARCH:
////			printf("请输入要查找人的名字:");
////			scanf("%s", name);
////			Contact* pct = ContactSearch(&cb, name);
////			if (pct == NULL)
////			{
////				printf("无此联系人\n");
////			}
////			else
////			{
////				printf("姓名：%s\n", pct->name);
////				printf("年龄：%d\n", pct->age);
////				printf("电话：%s\n", pct->tel);
////				printf("地址：%s\n", pct->addr);
////			}
////			break;
////		case DEL:
////			printf("请输入要删除人的名字:");
////			scanf("%s", name);
////			ContactDel(&cb, name);
////			break;
////		case UPDATE:
////			printf("1、更新名字  2、更新电话\n");
////			printf("3、更新年龄  4、更新地址\n");
////			printf("请选择：");
////			//scanf("%c", &ch);
////			scanf("%d", &option);
////			if (option == 2)
////			{
////				char name[NAME_MAX];
////				char tel[TEL_MAX];
////				printf("请输入你要更新名字及电话:\n");
////				scanf("%s", name);
////				scanf("%s", tel);
////				ContactUpdateTel(&cb, name, tel);
////			}
////			break;
////		case QUIT:
////			break;
////		default:
////			printf("没有此选项，请重新选择\n");
////			break;
////		}
////	} while (option != 0);
////}
////
////void Test2()
////{
////	ContactBook cb;
////	ContactInit(&cb);
////	Contact ct = { "武松", 18, "18516283076", "西工程 宿舍-3号楼-601" };
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