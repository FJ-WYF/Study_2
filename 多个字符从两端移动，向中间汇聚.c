#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
//�Լ���д�� 
int main()
{
	char arr1[] = "I love WYF!";
	char arr2[] = "99999999999";
	int sz = sizeof(arr1) / sizeof(arr1[0]) - 1;//��������Ԫ�ظ��� 
	int i = 0;
	for (i = 0; i < sz / 2; i++)
	{
		arr2[i] = arr1[i];//��arr1��arr2�ĵ�i��Ԫ�ضԻ�		
		arr2[sz - 1 - i] = arr1[sz - 1 - i];//��arr1��arr2�ĵ�sz-1-i��Ԫ�ضԻ�	
		printf("%s\n", arr2);
		Sleep(1000);//��Ļ�ϵ�����ͣ��1000���룬Ȼ��������ִ�� 
		system("cls");//����ն���Ļ�ϵ����� 
	}
	if ((i == (sz - 1) / 2) && sz % 2 != 0)//��sz��������ѭ�����������м��Ǹ��±��ֵʱ 
	{
		arr2[(sz - 1) / 2] = arr1[(sz - 1) / 2];//���������м��Ԫ�ضԻ� 
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
	}
	printf("%s\n", arr2);
	Sleep(2500);
	printf("�Ұ��㣬����\n");
	Sleep(2500);
	printf("��ʹ���������Զ\n");
	Sleep(2500);
	printf("���Ƿ���һֱס���ҵ�����\n");
	Sleep(2500);
	printf("�޸��ң����\n"); 
	Sleep(2500);
	printf("1.��ѽ 0.NO\n");
	int choice=0;
	scanf("%d",&choice);
	if(choice==0)
	{ 
		
		printf("���Ȼѡ�������\n"); 
		Sleep(2500);
		printf("�����أ�������û����");
		Sleep(3000); 
	} 
	else
	{
		printf("�Ǿ�˵����Ŷ~\n");
		Sleep(2500);
		printf("���26�꣬����Ȣ��\n");
		Sleep(2500);
		printf("һ��Ҫ���ң�\n"); 
		Sleep(2500);
		printf("һ��������");
		Sleep(3000); 
	}
	return 0;
}
//���˸��õ�д�� 
//int main()
//{
//	char arr1[] = "I love WYF!!!";
//	char arr2[] = "#############";
//	int left = 0;//���±�left
//	int right = strlen(arr1) - 1;//���±�right
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return 0;
//}
