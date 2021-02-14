#include <stdio.h>
int main()
{
	printf("char %zd\n",sizeof(char));          //1
	printf("short %zd\n",sizeof(short));        //2
	printf("int %zd\n",sizeof(int));            //4
	printf("long %zd\n",sizeof(long));          //4
	printf("long long %zd\n",sizeof(long long));//8
	printf("float %zd\n",sizeof(float));        //4
	printf("double %zd\n",sizeof(double));      //8
	return 0;
 } 
