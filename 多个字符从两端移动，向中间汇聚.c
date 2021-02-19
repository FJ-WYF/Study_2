#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
//自己的写法 
int main()
{
	char arr1[] = "I love WYF!";
	char arr2[] = "99999999999";
	int sz = sizeof(arr1) / sizeof(arr1[0]) - 1;//计算数组元素个数 
	int i = 0;
	for (i = 0; i < sz / 2; i++)
	{
		arr2[i] = arr1[i];//将arr1和arr2的第i个元素对换		
		arr2[sz - 1 - i] = arr1[sz - 1 - i];//将arr1和arr2的第sz-1-i个元素对换	
		printf("%s\n", arr2);
		Sleep(1000);//屏幕上的内容停留1000毫秒，然后程序继续执行 
		system("cls");//清除终端屏幕上的内容 
	}
	if ((i == (sz - 1) / 2) && sz % 2 != 0)//当sz是奇数且循环至交换最中间那个下标的值时 
	{
		arr2[(sz - 1) / 2] = arr1[(sz - 1) / 2];//将两数组中间的元素对换 
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
	}
	printf("%s\n", arr2);
	Sleep(2500);
	printf("我爱你，宝贝\n");
	Sleep(2500);
	printf("即使我们相隔甚远\n");
	Sleep(2500);
	printf("但是帆帆一直住在我的心里\n");
	Sleep(2500);
	printf("嫁给我，好嘛！\n"); 
	Sleep(2500);
	printf("1.好呀 0.NO\n");
	int choice=0;
	scanf("%d",&choice);
	if(choice==0)
	{ 
		
		printf("你居然选了这个！\n"); 
		Sleep(2500);
		printf("呜呜呜，这世界没爱了");
		Sleep(3000); 
	} 
	else
	{
		printf("那就说定了哦~\n");
		Sleep(2500);
		printf("最多26岁，我来娶你\n");
		Sleep(2500);
		printf("一定要等我！\n"); 
		Sleep(2500);
		printf("一定！！！");
		Sleep(3000); 
	}
	return 0;
}
//别人更好的写法 
//int main()
//{
//	char arr1[] = "I love WYF!!!";
//	char arr2[] = "#############";
//	int left = 0;//左下标left
//	int right = strlen(arr1) - 1;//右下标right
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return 0;
//}
