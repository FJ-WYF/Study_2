#include <stdio.h>
int main ()
{
	int x=0;
	char password[]={0};
	printf("请输入密码：");
	scanf("%s",&password);
	//此时缓冲区还剩余一个\n（回车键换行） 
	getchar();//将缓冲区的\n读取走 
	printf("请确认密码(Y/N)");
	char ch=getchar();
	if(ch == 'Y')
		printf("确认成功");
	else
		printf("放弃确认");
	return 0;
} 
