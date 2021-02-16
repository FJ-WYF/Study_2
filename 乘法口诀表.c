//打印乘法口诀表； 
#include <stdio.h>
int main ()
{
	int a = 1, b = 9,product;
	for (b = 9; b > 0; b--)
	{
		for (a = 1; a <= b; a++)
			printf("%d*%d=%-2d ", a, b, product = a * b);//%-2d使得整数以两个字符宽度的形式打印，不足两位的 
		printf("\n");						             // 会在 右边 打印一个空格 ； 
	}                                                    //相反，%2d会在 左边 打印一个空格 ； 
	return 0;
} 
