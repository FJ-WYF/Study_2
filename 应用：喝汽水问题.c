#include <stdio.h> 
#include <stdlib.h> 
//����ˮ����
//һƿ��ˮ1Ԫ��2����ƿ��һƿ��ˮ
//�ʣ�20Ԫ���Ժȶ���ƿ
int main()
{
	int price = 1;
	int money = 0;
	scanf("%d", &money);
	int n = money / price;//�ȵ���ˮ����
	int empty =money/price;//��ƿ����
	while (empty>=2)
	{
		n += empty/2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d",n);
	return 0;
}
