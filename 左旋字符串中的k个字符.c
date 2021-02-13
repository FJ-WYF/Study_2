#include <stdio.h> 
#include <stdlib.h> 
#include <assert.h>
//实现一个函数，可以左旋字符串中的k个字符
//如：ABCD左旋一个字符得到BCDA
//    ABCD左旋两个字符得到CDAB
////暴力求解法(1)
//void Left_Move(char arr[],int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)//把前k个和最后k个对换
//	{
//		char tmp = arr[i];
//		arr[i] = arr[len - k+i];
//		arr[len -k+i] = tmp;
//	}
//	int j = 0;
//	int x = k;
//	while (k)//把对换后的前k个换到最后k个之前；
//	{
//		for (j = 0; j < len-x-1; j++)//len-k-1是对换的次数
//		{
//			char tmp = arr[j + 1];
//			arr[j + 1] = arr[j];
//			arr[j] = tmp;
//		}
//		k--;
//	}
//}
////暴力求解法(2)
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
//三步翻转法
//前k个字符逆序，如ABCD左旋两个，则为BACD
//后面的字符逆序，变成BADC
//整个字符再逆序，变成CDAB
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
	reverse(p,p+k-1);//逆序前k个
	reverse(p+k,p+len-1);//逆序后len-k个
	reverse(p,p+len-1);//逆序整个字符串
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
