#include <stdio.h> 
#include <stlib.h> 
 //计算Sn=a+aa+aaa+...(a是一个常数)
int main()
{
	int n = 0;
	int a = 0;
	int sum = 0;
	int ret = 0;
	int i = 0;
	scanf("%d%d", &a,&n);
	for (i = 1; i <= n; i++)
	{
		ret = a + ret*10;
		sum += ret;
	}
	printf("%d ", sum);
	return 0;
}
