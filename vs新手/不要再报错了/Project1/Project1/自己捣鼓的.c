#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//找第二大值

//int find_first(char *arr ,int *max)
//{
//	int i = 0;
//	
//	for (i = 0; i <= 9; i++)
//	{
//		if(arr[i] > arr[*max])
//		{
//			*max = i;
//		}
//	}
//	return max;
//}
//int main()
//{
//	int max = 0;
//	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	
//	find_first(arr ,&max);
//	printf("%d\n", max);
//
//	int second = 0;
//	for (i = 0; i < 9 && i != max; i++)
//	{
//		if (arr[i] > arr[second])
//		{
//			second = i;
//		}
//
//	}
//	printf("%d\n", second);
//	return 0;
//}


//汉诺塔问题
//只需把问题看成最后一步和倒数第二步的联系。类似于求数列的通项。
//但是对于内部实际运行难以理解————》那么说明用递归时不能去层层考虑？？？

//递归是一个关于 n 与n-1 的问题
//move表示移动过程，hanoi表示把n个盘子从A移到C这个过程中的步骤
//本题要求表示将n个盘子按规则从A移到C的步骤，那么就需要一个表示步骤的函数hanoi,
//而只需考虑hanoi(n）是在hanoi(n-1)的基础上怎样去移动即可



//int solve(int n1)
//{
//	int count = 0;
//	if (n1 >= 1)
//	{
//		solve(n1 - 1);
//		count = 1 + 2 * (solve(n1 - 1));
//	}
//	return count;
//}
//void move(char pos1,char pos2 )
//{
//	printf("%c->%c ", pos1, pos2);
//}
//void hanoi(int n, char pos1, char pos2, char pos3)
//{
//	if (n == 1)
//	{
//		move(pos1, pos3);
//	}
//	else
//	{
//		hanoi(n - 1, pos1, pos3, pos2);
//		move(pos1, pos3);
//		hanoi(n - 1, pos2, pos1, pos3);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num =solve(n);
//	printf("移动所需的次数为%d\n", num);
//	hanoi(n, 'A', 'B','C');
//	printf("移动步骤为\n");
//	return 0;
//}


//青蛙跳台阶问题
//int  jump_num(int x)
//{
//	if (1 == x)
//	{
//		return 1;
//	}
//	else if (2 == x)
//	{
//		return 2;
//	}
//	else if (x >=3)
//	{
//		/*return jump_num(x - 1) + jump_num(x - 2) + jump_num(x - 2) ;	*/
//		return jump_num(x - 1) + 2*jump_num(x - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//    count =jump_num(n);
//	printf("%d", count);
//	return 0;
//}


