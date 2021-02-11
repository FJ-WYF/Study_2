#include <stdio.h> 
#include <stdlib.h> 
//喝汽水问题
//一瓶汽水1元，2个空瓶换一瓶汽水
//问：20元可以喝多少瓶
int main()
{
	int price = 1;
	int money = 0;
	scanf("%d", &money);
	int n = money / price;//喝的汽水总数
	int empty =money/price;//空瓶个数
	while (empty>=2)
	{
		n += empty/2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d",n);
	return 0;
}
