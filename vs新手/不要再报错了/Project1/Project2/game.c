#include"game.h"

//初始化：让数组每个块都产生空格_ ，而后再把标记覆盖掉空格_上。

//若无初始化，为什么会出现坐标无效的现象？？？

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印数据
	for (i = 0; i < row;i++)
	{
		
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);

			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//打印分割信息  ---|---|---|
		//能否把分割信息融入到打印数据的代码中？
		//不能，因为要再数据打印后输出换行！！
		if(i <row-1)//少打印一组---|
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋:\n");
	
	while (1)
	{
		printf("输入坐标:>");
		scanf("%d %d", &x, &y);
		printf("\n");
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("违规下棋，无效\n");
			}
		}
		else
		{
			printf("违规坐标，重新输入！\n");
		}
	}
}



//优化算法，当一行/一列/一斜线出现ROW-1个*，则电脑的#下在对应的线上。

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("\n");
	printf("电脑下棋:>\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
	    y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
		else
		{
			continue;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char Iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	

     //判断行
  /*  for (i = 0; i < row; i++)
    {
	   if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
	   {
		return board[i][0];
	   }
    }*/
	//下面也是判断行，是我自己改的，就是把原本的三子棋判断行改为多子棋判断行。
	//我感觉思路没问题，但是就是这里出bug。
     for (i = 0; i < row; i++)
     {	
		int a = 0;
		for (j = 1; j < col; j++)
		{
			
			if (board[i][0] == board[i][j] &&  board[i][0] != ' ')
			{
				a = 1;
			}
			else
			{
				//之前没有添加a = 0的条件。。。
			    a = 0;
				break;
			}
		}
		if (a) 
		{
            return board[i][0];
		}
	 }

	//判断列
	for (j = 0; j < col; j++)
	{
		/*if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}*/
		int a = 0;
		for (int i = 1; i < row; i++)
		{
			if (board[0][j] == board[i][j] && board[0][j] != ' ')
			{
				a = 1;
			}
			else
			{
				a = 0;
				break;
			}
		}
		if (a)
		{
			return board[0][j];
		}
	}
	//判断对角线
	/*if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[1][1];
	}*/
	while (i < row && j < col)
	{

	}
	
	
	while (i < row && j < col)
	{
		if (board[0][0] == board[i][j] && board[0][0] != ' ')
		{
			i++;
			j++;

		}
		else
		{
			break;
		}
		if (i == row)
		{
			return board[0][0];
		}
	}
	while (i < row && j < col)
	{
         if (board[0][col - 1] == board[i][col - i - 1] && board[0][col - 1] != ' ')
		 {
			i++;
			j++;
		 }
		 else
		 {
			 break;
		 }
		 if (i == row )
		 {
			 return board[i][col - i -1];
		 }
	}	
	//判断平局
	if (IsFull(board, row, col))
	{
		return 'Q';
	}
	return 'c';
}



