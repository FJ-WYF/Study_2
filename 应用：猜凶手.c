#include <stdio.h> 
#include <stdlib.h> 
//��������Ŀ:
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ��
//����Ϊ4�����ɷ��Ĺ���:
//A˵:������
//B˵:��C
//C˵:��D
//D˵:C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ�
int main()
{
	char murderer = 0;
	for (murderer = 'A'; murderer <= 'D';murderer++)
	{
		if ((murderer != 'A') + (murderer == 'C') + (murderer == 'D') + (murderer != 'D') == 3)
			printf("������%c", murderer);
	}
	return 0;
} 
