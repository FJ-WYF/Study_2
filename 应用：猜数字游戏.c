//��������Ϸ�� 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
menu(void)
{
	printf("***************************\n");
	printf("**       �����֣�        **\n");
	printf("**   1.play     2.exit   **\n");
	printf("***************************\n");
	printf("       ����������1��2��      \n");
}
int main()
{
	//����˵���ѡ��play ���� exit��
	start:
	menu();
	int player = 0;
	scanf("%d", &player);//��ҵ�ѡ��;
	switch (player)
	{
	case 1:
		break;//��Ϸ������
	case 2:
		goto end;//��Ϸ������
	default:
		system("cls");
		printf("������1��2��\n\n"); 
		goto start;//������Ϸ��ͷ��
	}
	game:
	//�����������һ�����֣�
	srand((unsigned int)time(NULL));//srand��������ʱ�����Ϊ������rand�����趨��ʼ�㣻
	int random = rand()%100+1;//����1-100֮����������
	int guess=0;
	printf("��������µ����֣�\n");
	scanf("%d", &guess);
	while (guess != random)
	{
		if (guess > random)
			printf("�´��ˣ����������룺\n");
		else if (guess < random)
			printf("��С�ˣ����������룺\n");
		scanf("%d", &guess);
	}
	printf("�¶��ˣ��Ƿ�Ҫ������(1.���� 2.�˳�)\n");
	int choice = 0;
	scanf("%d", &choice);
	while (1)//��choice�����ж�
		{
			switch (choice)
			{
			case 1:
				goto game;//��Ϸ�������ص���Ϸ��������������֣�
			case 2:
				goto end;//�˳�����Ϸ������
			default:
				printf("������1��2��1Ϊ������2Ϊ�˳�");
				continue;//��������choice��
			}
		}
	end:
	system("cls");
	printf("��Ϸ������\n");
	return 0;
}
