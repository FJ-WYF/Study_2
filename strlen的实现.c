#include <stdio.h>
#include <assert.h>
//计数器法
int my_strlen(const char* arr)
{
	int count = 0;
	assert(arr != NULL);
	while (*arr)
	{
		count++;
		arr++; 
	}
	return count;
}
//指针-指针法 
//size_t my_strlen(char* p)
//{
//	char* end =  p;
//	while (*end)
//	{
//		end++;
//	}
//	return end - p;//end-p计算'\0'和'I'之间的元素个数+1	
//}

//函数递归法 
//int my_strlen(const char* p)
//{
//	assert(p);
//	if (*p == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(++p);
//}

int main()
{
	char arr[] = "I LOVE WYF";
	int len=my_strlen(arr);
	printf("%d", len);
	return 0;
}
