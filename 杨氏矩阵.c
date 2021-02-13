#include <stdio.h> 
#include <stlib.h> 
//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，从上到下是递增的
//请编写一个程序，在这样的矩阵中查找某个数是否存在
//要求时间复杂度小于O(N)【遍历数组则为O(N)】
int Find_num(int arr[3][3], int aim, int* px, int* py)
{
	*px = 0;
	*py = 2;
	//每一次都从矩阵的右上角元素查找，以此排除一行或一列
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
		printf("找到了，下标是%d %d", x, y);
	}
	else
	{
		printf("找不到");
	}
	return 0;
} 
