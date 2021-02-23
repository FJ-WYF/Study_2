#include<stdio.h>
//获取并打印二进制数的奇数位和偶数位
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	printf("奇数位：");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	printf("偶数位：");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	return 0;
}
