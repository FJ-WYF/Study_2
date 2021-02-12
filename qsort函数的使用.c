#include <stdio.h> 
#include <stdlib.h> 
typedef struct Stu {
		char name[20];
		int age;
		}Stu;
int compare_Stu_age(const void* e1,const void* e2)
{
	return ((Stu*)e1)->age - ((Stu*)e2)->age;
}
int compare_Stu_name(const void* e1, const void* e2)
{
	return strcmp(((Stu*)e1)->name, ((Stu*)e2)->name);
}
int main()
{
	Stu s[3] = { {"zhangsan",20} ,{"lisi",10}, {"wangwu",30} };
	int num = sizeof(s) / sizeof(s[0]);
	qsort(s,num,sizeof(s[0]),compare_Stu_name);
	return 0;
}
