#include<stdio.h>
//统计二进制数(补码)中1的个数
//方法一
int main()
{
	int n = 0;
	int count = 0;
	scanf("%d", &n);
	while (n)
	{
		n = n & (n - 1);//这种算法由找规律得到； 
		count++;
	}
	printf("%d", count);
	return 0;
}
//方法二 
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n>>i)&1==1)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//方法三 
//int Count(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int count = 0;
//	int n = 0;
//	scanf("%d", &n);
//	count = Count(n);
//	printf("%d", count);
//	return 0;
//}
