#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
 //自幂数(一个n位数的各位的n次方之和等于这个数)
int main()
{
	
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int n = 1;
		int tmp = i;
		while (tmp/= 10)//计算i的位数
		{
			n++;
		}
		int sum = 0;
		tmp = i;
		while (tmp )
		{
			sum += pow(tmp % 10, n);//计算每一位的n次方
			tmp /= 10;
		}
		if (sum == i)
			printf("%d\n", i);
	}
	return 0;
}
