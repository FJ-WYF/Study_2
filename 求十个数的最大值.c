#include <stdio.h>
int main ()
{
//��ʮ��������Сֵ;
	int x = 1;
	int max= 0, input;
	scanf_s("%d", &input);
	max = input;//�ѵ�һ�������ֵ�ȸ���max���������ıȽ�;
	while (x <= 9)
	{
		scanf_s("%d", &input);
		if (input > max)
			max = input;
		x++;
	}
	printf("%d", max);
/*��ʮ��������Сֵ��ʮ��������֪�ģ�;
#include <stdio.h>
int main ()
{
	int arr[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int max=arr[0],i=0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("%d", max);
	return 0;
}*/
