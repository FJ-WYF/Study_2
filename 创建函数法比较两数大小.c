#include <stdio.h> 
int MAX(int x,int y) 
{
	if (x>y)
		return x;
	else
		return y;
}
int main()
{
	int x,y,maximum;
	scanf("%d%d",&x,&y);
	maximum=MAX(x,y);
	printf("���ֵ��%d",maximum); 
	return 0;
}


