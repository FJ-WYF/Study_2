#include<stdio.h>
//ͳ�ƶ�������(����)��1�ĸ���
//����һ
int main()
{
	int n = 0;
	int count = 0;
	scanf("%d", &n);
	while (n)
	{
		n = n & (n - 1);//�����㷨���ҹ��ɵõ��� 
		count++;
	}
	printf("%d", count);
	return 0;
}
//������ 
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
//������ 
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
