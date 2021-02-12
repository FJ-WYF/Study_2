#include <stdio.h>
#include <assert.h>
//��������
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
//ָ��-ָ�뷨 
//size_t my_strlen(char* p)
//{
//	char* end =  p;
//	while (*end)
//	{
//		end++;
//	}
//	return end - p;//end-p����'\0'��'I'֮���Ԫ�ظ���+1	
//}

//�����ݹ鷨 
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
