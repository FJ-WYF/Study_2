#include <stdio.h>
int main ()
{
	int x=0;
	char password[]={0};
	printf("���������룺");
	scanf("%s",&password);
	//��ʱ��������ʣ��һ��\n���س������У� 
	getchar();//����������\n��ȡ�� 
	printf("��ȷ������(Y/N)");
	char ch=getchar();
	if(ch == 'Y')
		printf("ȷ�ϳɹ�");
	else
		printf("����ȷ��");
	return 0;
} 
