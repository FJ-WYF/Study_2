#include <stdio.h> 
#include <stdlib.h> 
#include <assert.h>
char* my_strcat(char* dest,const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest)//�ҵ�Ŀ���ַ�����'\0'
	{
		dest++;
	}
	while (*dest++ = *src++)//��Դ�ַ���׷�ӵ�Ŀ���ַ���֮��
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "Hello";
	char arr2[] = "World";
	printf("%s\n",my_strcat(arr1, arr2));
	return 0;
}
