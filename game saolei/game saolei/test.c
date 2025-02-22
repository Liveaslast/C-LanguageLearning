#include "game.h"

int main()
{
	srand((unsigned int)time(NULL));
	printf("***************游戏申明***************\n");
	printf("\n");
	printf("**********本游戏由尼莫yu开发**********\n");
	printf("\n");

	printf("*************游戏规则如下*************\n");
	printf("\n");

	printf("*****本游戏在选择时只能输入YES/NO*****\n");
	printf("\n");

	printf("游戏目前还有许多不方便的指令，日后整改\n");
	printf("\n");

	printf("*******开始游戏后会展开一片雷区*******\n");
	printf("\n");

	printf("*****数字表示相邻位置雷的数量之和*****\n");
	printf("\n");

	printf("******符号'*'表示还没有排雷的位置*****\n");
	printf("\n");

	printf("*游戏中可以用‘？’标记可能有雷的位置*\n");
	printf("\n");


	printf("***********如有BUG请call:me***********\n");
	printf("\n");

	while (1)
	{
		menu();
		int a = 0;
		printf("请选择：");
	    scanf("%d", &a);	
		
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	}
	return 0;
}