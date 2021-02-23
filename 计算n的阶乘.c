#include <stdio.h>
int main()
{
	int i, n, factorial=1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		factorial = factorial*i;
	printf("%d", factorial);
	return 0;
}
//int Fac(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int out = Fac(n);
//	printf("%d!=%d",n, out);
//	return 0;
//}
