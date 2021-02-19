#include <stdio.h> 
#include <stlib.h> 
//打印菱形图案
int main()
{
	int n = 0;
	scanf("%d", &n);//一条边有几颗*
	int i = 1;
	for (i = 1; i <=  n; i++)
	{
		int j = 0;
		for (j = 1; j <= (2 * n - (2 * i - 1) - 1) / 2; j++)
			printf(" ");
		int k = 0;
		for (k = 1; k <= 2 * i - 1; k++)
			printf("*");
		printf("\n");
	}
	for(i =1; i<=n-1;i++)
	{
		int j = i;
		for (j = i; j > 0; j--)
			printf(" ");
		int k = 1;
		for (k = 1; k <=2*(n-i)-1 ; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}
