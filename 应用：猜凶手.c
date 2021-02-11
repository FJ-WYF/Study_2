#include <stdio.h> 
#include <stdlib.h> 
//猜凶手题目:
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个
//以下为4个嫌疑犯的供词:
//A说:不是我
//B说:是C
//C说:是D
//D说:C在胡说
//已知3个人说了真话，1个人说的是假话
int main()
{
	char murderer = 0;
	for (murderer = 'A'; murderer <= 'D';murderer++)
	{
		if ((murderer != 'A') + (murderer == 'C') + (murderer == 'D') + (murderer != 'D') == 3)
			printf("凶手是%c", murderer);
	}
	return 0;
} 
