#include <stdio.h> 
#include <stdlib.h> 
#include <assert.h>
int my_strcmp(const char* p1, const char* p2)
{
	assert(p1 && p2);
	while (*p1 == *p2)//比较
	{
		if (*p1 == '\0')//相等
			return 0;
		p1++;
		p2++;
	}
	if (*p1 < *p2)
		return -1;//小于
	else
		return 1;//大于
}
int main()
{
	char* p1 = "abcd";
	char* p2 = "abcd";
	int ret = my_strcmp(p1, p2);
	printf("%d\n", ret);
	return 0;
}
