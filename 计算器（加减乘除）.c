#include <stdio.h>
//计算器的实现
void menu()
{
	printf("*********************************\n");
	printf("**       1.add      2.sub      **\n");
	printf("**       3.mul      4.div      **\n");
	printf("**********   0.exit    **********\n");
	printf("*********************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	int a = 0;
	int b = 0;
	int(*pfarr[4])(int, int) = {Add,Sub,Mul,Div};
	do
	{
		menu();
		printf("请选择--->");
		scanf("%d", &input);
		if (input > 4 || input < 0)
		{
			printf("选择错误\n");
		}
		else if (input == 0)
		{
			printf("退出\n");
			break;
		}
		else 
		{
			printf("请输入两个操作数--->");
			scanf("%d%d", &a, &b);
			printf("结果为%d\n",pfarr[input-1](a, b));
		}
	} while (1);
	return 0;
}

