#include <stdio.h>
//��������ʵ��
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
		printf("��ѡ��--->");
		scanf("%d", &input);
		if (input > 4 || input < 0)
		{
			printf("ѡ�����\n");
		}
		else if (input == 0)
		{
			printf("�˳�\n");
			break;
		}
		else 
		{
			printf("����������������--->");
			scanf("%d%d", &a, &b);
			printf("���Ϊ%d\n",pfarr[input-1](a, b));
		}
	} while (1);
	return 0;
}

