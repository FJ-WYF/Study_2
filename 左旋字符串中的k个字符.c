#include <stdio.h> 
#include <stdlib.h> 
#include <assert.h>
//ʵ��һ�����������������ַ����е�k���ַ�
//�磺ABCD����һ���ַ��õ�BCDA
//    ABCD���������ַ��õ�CDAB
////������ⷨ(1)
//void Left_Move(char arr[],int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)//��ǰk�������k���Ի�
//	{
//		char tmp = arr[i];
//		arr[i] = arr[len - k+i];
//		arr[len -k+i] = tmp;
//	}
//	int j = 0;
//	int x = k;
//	while (k)//�ѶԻ����ǰk���������k��֮ǰ��
//	{
//		for (j = 0; j < len-x-1; j++)//len-k-1�ǶԻ��Ĵ���
//		{
//			char tmp = arr[j + 1];
//			arr[j + 1] = arr[j];
//			arr[j] = tmp;
//		}
//		k--;
//	}
//}
////������ⷨ(2)
//void Left_Move(char* p,int k)
//{
//	assert(p);
//	int i = 0;
//	int len = strlen(p);
//	for (i = 0; i < k; i++)
//	{
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			char tmp = *(p+j);
//			*(p + j) = *(p + j + 1);
//			*(p + j + 1) = tmp;
//		}
//	}
//}
//������ת��
//ǰk���ַ�������ABCD������������ΪBACD
//������ַ����򣬱��BADC
//�����ַ������򣬱��CDAB
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *(left);
		*(left) = *(right);
		*(right) = tmp;
		left++; 
		right--;
	}
}
void Left_Move(char* p,int k)
{
	assert(p);
	int len = strlen(p);
	reverse(p,p+k-1);//����ǰk��
	reverse(p+k,p+len-1);//�����len-k��
	reverse(p,p+len-1);//���������ַ���
}
int main()
{
	char arr[256] = { 0 };
	gets(arr);
	int k = 0;
	scanf("%d", &k);
	Left_Move(arr, k);
	printf("%s", arr);
	return 0;
} 
