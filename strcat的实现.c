#include <stdio.h> 
#include <stdlib.h> 
#include <assert.h>
char* my_strcat(char* dest,const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest)//找到目标字符串的'\0'
	{
		dest++;
	}
	while (*dest++ = *src++)//把源字符串追加到目标字符串之后
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
