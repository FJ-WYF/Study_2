#include<stdio.h>
//��ȡ����ӡ��������������λ��ż��λ
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	printf("����λ��");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	printf("ż��λ��");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	return 0;
}
