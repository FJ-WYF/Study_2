//��ӡ�˷��ھ��� 
#include <stdio.h>
int main ()
{
	int a = 1, b = 9,product;
	for (b = 9; b > 0; b--)
	{
		for (a = 1; a <= b; a++)
			printf("%d*%d=%-2d ", a, b, product = a * b);//%-2dʹ�������������ַ���ȵ���ʽ��ӡ��������λ�� 
		printf("\n");						             // ���� �ұ� ��ӡһ���ո� �� 
	}                                                    //�෴��%2d���� ��� ��ӡһ���ո� �� 
	return 0;
} 
