#include <stdio.h> 
#include <stlib.h> 
//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ����ϵ����ǵ�����
//���дһ�������������ľ����в���ĳ�����Ƿ����
//Ҫ��ʱ�临�Ӷ�С��O(N)������������ΪO(N)��
int Find_num(int arr[3][3], int aim, int* px, int* py)
{
	*px = 0;
	*py = 2;
	//ÿһ�ζ��Ӿ�������Ͻ�Ԫ�ز��ң��Դ��ų�һ�л�һ��
	while (*px <= 2 && *py >= 0)
	{
		if (arr[*px][*py] > aim)
		{
			(*py)--;
		}
		else if (arr[*px][*py] < aim)
		{
			(*px)++;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3} ,{4,5,6} ,{7,8,9} };
	int x = 3;
	int y = 0;
	int aim = 1;
	int ret = Find_num(arr,aim,&x,&y);
	if (ret == 1)
	{
		printf("�ҵ��ˣ��±���%d %d", x, y);
	}
	else
	{
		printf("�Ҳ���");
	}
	return 0;
} 
