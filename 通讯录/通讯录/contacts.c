#define _CRT_SECURE_NO_WARNINGS 1
#include "contacts.h"
void Checkcapacity(struct contacts* p)
{
	if (p->capacity == p->sz)
	{
		//增加容量
		info* tmp=(info*)realloc(p->x, (p->capacity + 2) * sizeof(info));
		if (tmp != NULL)
		{
			p->x = tmp;
			p->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}
void Readcontact(struct contacts* p)
{
	info tmp = { 0 };
	FILE* pf = fopen("contacts.data", "rb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	while (fread(&tmp, sizeof(struct info), 1, pf))
	{
		Checkcapacity(p);
		p->x[p->sz] = tmp;
		p->sz++;
	}
}
void Init_contacts(struct contacts* p)
{
	p->x = (info*)malloc(DEFAULT_SZ * sizeof(info));//默认通讯录存放三个联系人
	if (p->x == NULL)
	{
		return;
	}
	else
	{
		p->sz = 0;
		p->capacity = DEFAULT_SZ;
	}
	Readcontact(p);
}
void contacts_add(struct contacts* p)
{
	//检测通讯录容量
	//满了就增加容量
	Checkcapacity(p);
	printf("请输入姓名:>");
	scanf("%s", p->x[p->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &p->x[p->sz].age);
	printf("请输入性别:>");
	scanf("%s", p->x[p->sz].sex);
	printf("请输入电话:>");
	scanf("%s", p->x[p->sz].tele);
	printf("请输入住址:>");
	scanf("%s", p->x[p->sz].address);
	printf("添加成功！\n");
	p->sz++;
}

void contacts_delete(struct contacts*p)
{
	if (p->sz == 0)
	{
		printf("无联系人可删除\n");
	}
	else
	{
		char name[MAX_NAME] = { 0 };
		printf("请输入要删除的联系人姓名:>");
		scanf("%s", name);
		int ret=Findbyname(p, name);//查找联系人
		//删除联系人
		if (ret == -1)
		{
			printf("查无此联系人\n");
		}
		else
		{
			/*memmove(&(p->x[i]),&(p->x[i+1]),(p->sz-i)*sizeof(struct contacts));*/
			int j = ret;
			for (j = ret; j < p->sz-1; j++)
			{
				p->x[j] = p->x[j + 1];
			}
			p->sz--;
		}
	}
}

void contacts_search(struct contacts* p)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入联系人姓名:>");
	scanf("%s", name);
	int ret = Findbyname(p, name);
	if (ret == -1)
	{
		printf("查无此人！\n");
	}
	else
	{
		printf("%-5s\t%-4s\t%-5s\t%-15s\t%-20s\n", "姓名", "年龄", "性别", "电话", "住址");
		printf("%-5s\t%-4d\t%-5s\t%-15s\t%-20s\n",
				p->x[ret].name,
				p->x[ret].age,
				p->x[ret].sex,
				p->x[ret].tele,
				p->x[ret].address
			);
	}
}

void contacts_modify(struct contacts* p)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改的联系人姓名:>");
	scanf("%s", name);
	int ret = Findbyname(p, name);
	if (ret == -1)
		printf("查无此人\n");
	else
	{
		printf("请输入姓名:>");
		scanf("%s", p->x[ret].name);
		printf("请输入年龄:>");
		scanf("%d", &p->x[ret].age);
		printf("请输入性别:>");
		scanf("%s", p->x[ret].sex);
		printf("请输入电话:>");
		scanf("%s", p->x[ret].tele);
		printf("请输入住址:>");
		scanf("%s", p->x[ret].address);
		printf("修改成功！\n");
	}
}

void contacts_show(const struct contacts*p)
{
	if (p->sz == 0)
	{
		printf("联系人为空！\n");
	}
	else
	{
		printf("%-5s\t%-4s\t%-5s\t%-15s\t%-20s\n","姓名","年龄","性别","电话","住址");
		int i = 0;
		for (i = 0; i < p->sz; i++)
		{
			printf("%-5s\t%-4d\t%-5s\t%-15s\t%-20s\n",
				p->x[i].name,
				p->x[i].age,
				p->x[i].sex,
				p->x[i].tele,
				p->x[i].address
			);
		}
	}
}

void contacts_sort(struct contacts* p)
{
	int input = 0;
	printf("请选择排序方式:>\n");
	printf("1.姓名    2.年龄\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		qsort(p->x, p->sz,sizeof(p->x->name), name_cmp);
		break;
	case 2:
		qsort(p->x, p->sz, sizeof(p->sz), age_cmp);
		break;
	default:
		printf("选择错误\n");
		break;
	}
}
int name_cmp(const void* e1,const void*e2)
{
	return (int)(((contacts*)e1)->x->name - ((contacts*)e2)->x->name);
}
int age_cmp(const void* e1, const void* e2)
{

}
void Savecontact(struct contacts* p)
{
	FILE* pf = fopen("contacts.data", "wb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		fwrite(&(p->x[i]),sizeof(struct info),1,pf);
	}
	fclose(pf);
	pf = NULL;
}
void Destroy(struct contacts* p)
{
	free(p->x);
	p->x = NULL;
}
static int Findbyname(const struct contacts* p, char* name)
{
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		if (strcmp(p->x[i].name, name) == 0)
		{
			return i;
		}
	}
	if (i == p->sz)
	{
		return -1;
	}
}