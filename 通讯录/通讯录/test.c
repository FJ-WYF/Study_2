#include "contacts.h"
void menu()
{
	printf("*******************************************\n");
	printf("*******1.添加联系人     2.删除联系人*******\n");
	printf("*******3.查找联系人     4.修改联系人*******\n");
	printf("*******5.查看通讯录     6.排序联系人*******\n");
	printf("***************** 0.退出 ******************\n");
}
int main()
{
	int input = 0;
	contacts x;//创建通讯录结构体变量x
	Init_contacts(&x);//初始化通讯录
	do {
		menu();
		printf("请选择: >");
		scanf("%d", &input);
		switch (input)
		{
		case 添加联系人:
			contacts_add(&x);
			break;
		case 删除联系人:
			contacts_delete(&x);
			break;
		case 查找联系人:
			contacts_search(&x);
			break;
		case 修改联系人:
			contacts_modify(&x);
			break;
		case 查看通讯录:
			contacts_show(&x);
			break;
		case 排序联系人:
			contacts_sort(&x);
			break;
		case 退出:
			//销毁通讯录，销毁动态开辟的内存
			Savecontact(&x);
			Destroy(&x);
			printf("退出.");
			break;
		default:
			printf("输入错误数字！\n");
			break;
		}
	} while (input);
	return 0;
}