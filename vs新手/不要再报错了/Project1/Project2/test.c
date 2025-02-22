#include"game.h"

void menu()
{
	printf("************************\n");
	printf("****  1.play 2.exit **** \n");
	printf("************************\n");
	printf("\n");
	

}

void game()
{
	//设置棋盘,二维数组
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	printf("****************!!***************\n");
	printf("请注意，本游戏的坐标输入格式为_ _\n");
	printf("***第一个_表示行 第二个_表示列***\n");
	printf("****************!!***************\n");
	printf("\n");
	//下棋步骤：玩家，判断，电脑，判断，》》》》》》》胜/负/平
	//然后再对胜/负/平的结果打印
	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家或电脑的操作通过函数改变了数组内容，而用Iswin直接判断数组内容即可。
		ret = Iswin(board, ROW, COL);
		if (ret != 'c')//!=c表示没有平局
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	DisplayBoard(board, ROW, COL);
	if (ret == '*')
	{
		printf("you win !!\n");
	}
	else if (ret == '#')
	{
		printf("you lose !!\n");
	}
	else if (ret = 'Q')
	{
		printf("平局\n");
	}
	
}

int main()
{
	srand((unsigned int)time(NULL));//ramd函数需要srand的调用，而time函数定义了起始生成的数字
	int i = 0;
	//重复游戏
	while(1)//比随便一个for循环合理，无警告！
	{
		int a = 0;
		//菜单
		menu();
		
		printf("请选择：");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			printf("\n");
			break;
		case 2:
			printf("退出游戏");
			return 0;//switch中break是跳过switch.
			//但是return 可以直接跳出嵌套switch 的循环while
		}
	}
}