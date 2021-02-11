//猜数字游戏； 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
menu(void)
{
	printf("***************************\n");
	printf("**       猜数字！        **\n");
	printf("**   1.play     2.exit   **\n");
	printf("***************************\n");
	printf("       请输入数字1或2：      \n");
}
int main()
{
	//输出菜单，选择play 或者 exit；
	start:
	menu();
	int player = 0;
	scanf("%d", &player);//玩家的选择;
	switch (player)
	{
	case 1:
		break;//游戏继续；
	case 2:
		goto end;//游戏结束；
	default:
		system("cls");
		printf("请输入1或2！\n\n"); 
		goto start;//返回游戏开头；
	}
	game:
	//电脑随机生成一个数字；
	srand((unsigned int)time(NULL));//srand函数利用时间戳作为参数给rand函数设定起始点；
	int random = rand()%100+1;//生成1-100之间的随机数；
	int guess=0;
	printf("请输入你猜的数字：\n");
	scanf("%d", &guess);
	while (guess != random)
	{
		if (guess > random)
			printf("猜大了，请重新输入：\n");
		else if (guess < random)
			printf("猜小了，请重新输入：\n");
		scanf("%d", &guess);
	}
	printf("猜对了！是否还要继续？(1.继续 2.退出)\n");
	int choice = 0;
	scanf("%d", &choice);
	while (1)//对choice进行判断
		{
			switch (choice)
			{
			case 1:
				goto game;//游戏继续，回到游戏的生成随机数部分；
			case 2:
				goto end;//退出，游戏结束；
			default:
				printf("请输入1或2，1为继续，2为退出");
				continue;//重新输入choice；
			}
		}
	end:
	system("cls");
	printf("游戏结束！\n");
	return 0;
}
