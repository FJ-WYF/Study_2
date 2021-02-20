/* 
//遍历法查找 
#include <stdio.h>
int main ()
{
	int arr[] = { 4,5,3,7,11,8,0,88,99,4396 };
	int i,aim = 0;
	int size = sizeof(arr);
	int n = size / sizeof(arr[0]);
	for (i = 0; i < n; i++)
	{
		if (aim == arr[i])
			{
				printf("找到了，下标是%d", i);
				break; 
			}
	}
	if (i == n)
		printf("找不到");
	return 0;
}
*/
//二分查找法
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int aim = 10;
	int low, high,mid;//low为左下标，high为右下标，mid为中间值；
	low = 0;
	high = sizeof(arr) / sizeof(arr[0])-1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (arr[mid] > aim)
		{
			high = mid - 1;
		}
		else if (arr[mid] < aim)
		{
			low = mid+1;
		}
		else
		{
			printf("找到了，下标为%d", mid);
			break;
		}
	}
	if(low>high)
		printf("找不到！");
	return 0;
}
