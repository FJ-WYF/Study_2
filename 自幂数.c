#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>
 //������(һ��nλ���ĸ�λ��n�η�֮�͵��������)
int main()
{
	
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int n = 1;
		int tmp = i;
		while (tmp/= 10)//����i��λ��
		{
			n++;
		}
		int sum = 0;
		tmp = i;
		while (tmp )
		{
			sum += pow(tmp % 10, n);//����ÿһλ��n�η�
			tmp /= 10;
		}
		if (sum == i)
			printf("%d\n", i);
	}
	return 0;
}
