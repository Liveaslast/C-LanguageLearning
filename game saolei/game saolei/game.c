
#include "game.h"

void menu()
{
	printf("***********menu***********\n");
	printf("**************************\n");
	printf("********* 1.play *********\n");
	printf("********* 2.exit *********\n");
	printf("**************************\n");
}

void game()
{
	//一定要注意函数调用的顺序！！
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	
	Setmine(mine, ROW, COL);
	//初始展开

	while (1)
	{
		int x = rand() % ROW + 1;
		int y = rand() % COL + 1;
		int countaside = get_mine_count(mine, x, y);

		if (countaside == 0 && show[x][y] != '0' && mine[x][y] != '1')
		{
			Unfold(mine, show, x, y);
			DisplayBoard(show, ROW, COL);
			break;

		}
		continue;
	}

	int ret1 = IsWin(show, mine, ROW, COL);
	
	if (ret1)
	{
		printf("代码缺陷，you win !!\n");
		return ;
	}

	//DisplayBoard(mine, ROW, COL);
	//DisplayBoard(show, ROW, COL);
	FindMine(mine, show, ROW, COL);
}

//初始展开
void Unfold(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int countaside = get_mine_count(mine, x, y);
	if (show[x][y] != '0' && countaside == 0)
	{
		show[x][y] = '0';
		for (int a = x - 1; a <= x + 1; a++)
		{
			for (int b = y - 1; b <= y + 1; b++)
			{
				Unfold(mine, show, a, b);	
			}
		}
	}
	//怪怪的！！
	else 
	{
		show[x][y] = countaside + '0';
	}
}

//报周围有多少雷
int get_mine_count(char board[ROWS][COLS], int x, int y)
{   int sum = 0;
    int sum1 = 0;
    int sum2 = 0;
	for (int a = y - 1; a <= y + 1; a++)
	{
		
		sum = sum + (board[x - 1][a] - '0');
		
		sum1 = sum1 + (board[x + 1][a] - '0');
		
		if (a != y)
		{
			sum2 = sum2 + (board[x][a] - '0');
		}

	}
	return sum + sum1 + sum2;
}

int IsWin(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col)
{
	int count = 0;
	
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			if (show[i][j] == '*' && mine[i][j] != '1')
			{
				return 0;
			}
			else if (show[i][j] == '?' && mine[i][j] == '1')
			{
				count++;
			}
			else if (show[i][j] != '*' && show[i][j] != '?')
			{
				count++;
			}
			else if (show[i][j] == '?' && mine[i][j] == '0')
			{
				return 0;
			}
		}
	}
	if (count == row * col - Count)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}








//扫雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	
	while (1)
	{
		printf("输入排雷坐标：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("lose!");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else 
			{
			    int count =	get_mine_count(mine, x, y);
				show[x][y] = count +'0';//转换成数字字符！
				DisplayBoard(show, ROW, COL);
				printf("\n");
				printf("是否做标记雷的位置？  YES/NO\n");
				printf("请输入：YES/NO\n");
				char input[20] = { 0 };
				scanf("%s", input);
				if (strcmp(input, "YES") == 0)
				{
					Flag(mine,show, ROW, COL);
				}
			}
		}
		else
		{
			printf("坐标非法，重输\n");
		}
		int ret = IsWin(show,mine, row, col);
		if (ret)
		{
			printf("you win !!\n");
			DisplayBoard(mine, ROW, COL);
			break;
		}
	}
}

//标雷
void Flag(char mine[ROWS][COLS],char show[ROWS][COLS],int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入标记位置的坐标：");

		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			
			if (show[x][y] != '*')
			{
				printf("标记已知坐标，无效,重输");
				continue;
			}
			else
			{
				show[x][y] = '?';
				DisplayBoard(show, ROW, COL);
				//DeFlag(show, ROW, COL, x, y);
				FlagAgain(mine,show, ROW, COL,x,y);
				
				/*DisplayBoard(show, ROW, COL);*/

				printf("\n");
				break;//跳出Flag，进入扫雷
				//但问题是现在break后是进入Find_Mine 105
			}
		}
		else//坐标输入位置不存在
		{
			continue;
		}
	}
}



//是否继续标记
void FlagAgain(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col, int x, int y)
{
	
	char input1[20] = { 0 };
	while (1)
	{
		printf("是否继续标记？  YES/NO\n");
	    printf("请输入：YES/NO\n");
		scanf("%s", input1);
		if (strcmp(input1, "NO") == 0)
		{
			DeFlag(mine,show,x,y);//跳出YES/NO循环,是否取消标记
			break;//跳出FlagAgain
		}
		else if (strcmp(input1, "NO") != 0 && strcmp(input1, "YES") != 0)
		{
			printf("错误输入,重输YES/NO\n");
			continue;//乱输则重输
		}
		else if (strcmp(input1, "YES") == 0)
		{
			Flag(mine,show, ROW, COL);//跳出FlagAgain,进入Flag
		}
	}
}


//是否取消标记
void DeFlag(char mine[ROWS][COLS],char show[ROWS][COLS], int x, int y)
{
	printf("是否取消标记？  YES/NO\n");
	printf("请输入：YES/NO\n");
	char input2[10] = { 0 };
	int a = 0;
	while (1)//是否取消标记
	{
		scanf("%s", input2);
		if (strcmp(input2, "YES") == 0)
		{
			printf("请输入要取消标记的坐标：");
			while (1)//多次取消标记，但要加上跳出多次取消标记的判断：没有‘？’ 。
			{
				int x = 0;
				int y = 0;
				scanf("%d %d", &x, &y);
				if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
				{
					if (show[x][y] == '?')
					{
						show[x][y] = '*';
						DisplayBoard(show, ROW, COL);
						printf("是否停止取消标记？  YES/NO\n");
						printf("请输入：YES/NO\n");
						char input3[10] = { 0 };
						while (1)
						{
							int count = 0;
							for (int i = 1; i <= ROW; i++)
							{
								for (int j = 0; j <= COL; j++)
								{
									if (show[i][j] == '?')
									{
										count++;
									}
								}
							}
							if (count == 0)
							{
								FindMine(mine, show, ROW, COL);
								break;//这个break的意义是什么呢？？
							}
							scanf("%s", input3);
							if (strcmp(input3, "YES") == 0)
							{
								FindMine(mine, show, ROW, COL);
								break;
							}
							else if (strcmp(input3, "NO") == 0)
							{
								break;
							}
						}
					}
					else 
					{
						continue;
					}
				}
				else
				{
					printf("错误输入,重输YES/NO\n");
					continue;
				}
			}
			////可以修改为能取消任意被标记的flag.
			//show[x][y] = '*';
			
		    break;//停止DeFlag
		}
		else if (strcmp(input2, "NO") == 0)
		{
			break;
		}
		else
		{
			printf("错误输入,重输YES/NO\n");
		}
	}
}

//初始化数组
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}








//布雷
void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = Count;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1'; // 注意不能初始化为1，应该为字符！！
			count--;
		}

	}
}

//展示雷场
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("\n");
	
	printf("嘟噜嘟——嘟噜嘟——嘟噜嘟\n");

	for (int j = 0; j <= col; j++)
	{
		printf("%d ", j);
		
	}
	printf("\n");
	for (int i = 1; i <= row; i++)//对于循环的限制条件一定要想清楚，多子棋的教训！！
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);//此处打印应补空格！！！；
		}
		printf("\n");
	}
	printf("嘟噜嘟——嘟噜嘟——嘟噜嘟\n");
	printf("\n");
}
