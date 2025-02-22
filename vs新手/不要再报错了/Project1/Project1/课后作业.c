#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int c = 0;
//	scanf("%d %d", &a, &c);
//	int conclude = (-8+22)*a-10+c/2;
//	printf("conclude=%d", conclude);
//	return 0;
//}
 
//static int g_val = 2022;
//int g_val = 2022;

//int Add(x, y)
//{
//
//	return x + y;
//}


//int main ()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (0 < a || b<10000)
//	{
//		int c = a / b;
//	    int n = a % b;
//	    printf("%d %d", c, n);
//	}
//	
//	return 0;
//}


//数字转为ASCII


//循环可用于打印出数组中的元素
//%.2f 保留两位小数 
//4/3.0 保证得到的数带小数点


//int main()
//{
//	int arr[] = { 7,72,99,33,37,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组总大小 /数组元素大小
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	
//	
//	scanf("%4d%2d%2d",&year,&month,&date );//4是填充4位整数的意思
//	printf("year=%4d\n", year);
//	printf("month=%02d\n", month);//0意思是用0补齐空位，如05
//	printf("date=%02d\n", date);
//	return 0;
//}

//int main()
//{
//	int NO = 0;//若用字符类型表示会使后面输入的成绩也被视作字符串，无法正常输出
//	float c = 0.0f;
//	float math = 0.0f;
//	float eng = 0.0f;
//	scanf("%d;%f,%f,%f", &NO, &c, &math, &eng);
//	printf("The each subject score of NO.%d is %.2f, %.2f, %.2f.\n", NO, c, math, eng);//.2f表示保留小数点后面两位
//
//	return 0;
//}



//找最大值


//int main()
//{
//	int arr[] = { 0 };
//	int i = 0;
  //
//	//i=0且i<4进入循环输入四个元素
//
//	while (i < 4)
//	{
//		scanf("%d", &arr);
//		i++;
//	}
//	int max = arr[0];
//	 i = 1;
//
//	//比较大小
//
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}

//2.0
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int  max = 0;
//	scanf("%d", &max);
//	//i=1且放在while（i<4)决定了循环三次
//	//while循环三次即输入三个n，同时在输入的max与后面输入的三个n中选择最大的一项 
//	while (i < 4)
//	{
//		scanf("%d", &n);
//		if (n > max)
//		{
//			max = n;
//			i++;
//		}
//	}
//	printf("%d\n",max);
//	return 0;
//}

//输入数值计算结果
//int main()
//{
//	double V = 0.0f;
//	double r = 0.0f;
//	scanf("%lf", &r);
//	V = 4 / 3.0 * 3.1415926 * r * r * r;
//	printf("%.3lf\n", V);
//	return 0;
//}

//0.0默认为double 类型。0.0f则为float类型。



//int main()
//{
//	int weight = 0;
//	int high = 0;
//	scanf("%d %d", &weight, &high);
//	float BMI = 0.0f;
//	BMI = weight / (high / 100.0)/(high / 100.0);
//	printf("%.2f", BMI);
//	return 0;
//}

//void print(int i)
//{ 
//	for (i = 0; i <= 100; i+=3)
//	{
//		printf("%d\n", i);
//	}
//}
//int main()
//{
//	int i = 0;
//	print(i);
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	int num = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			num++;
//		}
//	    if (i / 10 == 9 )    //此处不能是elseif 因为elseif与if只会进入一个；而两个if则都可以进入。
//		{
//			num++;
//		}
//		else
//		{
//			continue;
//		}
//	}
//	printf("%d", num);
//	return 0;
//}


//求1 - 1/2 +1/3。。。。。。
//int main()
//{
//	int i = 1;
//	/*float sum1 = 0;
//	float sum2 = 0;*/
//	/*float sum = 0;*/
//	float suma = 0;
//	int flag = 1;
//	for (i = 1; i <= 50; i++)
//	{
//		/*sum2 -= 1.0 / (2 * i);
//	    sum1 += 1.0 / (2 * i - 1);*/
//		suma = suma + flag * (1.0 / i);
//		flag = -flag;
//	}
//	/*sum = sum1 + sum2;*/
//	/*printf("%.3f", sum);*/
//	printf("%.3f", suma);
//	return 0;
//}


//输入数组，暂时不会。
//int main()
//{
//	char arr[10] = { 0 };//输入数组必须定义arr的空间，不然默认值会导致栈区溢出
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		scanf("%s", &arr[i]);
//	}
//	printf("%s", arr);
//	return 0;
//}


//输入数组
//int main()
//{
//	char arr[10] = { 0 };
//	gets(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//打印99乘法表
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			int a = 0;
//			a = i * j;
//			printf("%d*%d=%2d  ", i, j, a);//%2d两位右对其，%-2d两位左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}



//猜数字
//#include <time.h>
//#include <stdlib.h>
//#include<windows.h>
//#include<string.h>
//游戏
//void game(int x)
//{
//	RAND_MAX;
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			
//			printf("smaller\n");
//			
//		}
//		else if (guess < ret)
//		{
//			
//			printf("larger\n");
//			
//		}
//		else
//		{
//			x = 2;
//			printf("congratulate!\n");
//			break;
//		}
//	}
//	if (x != 2)
//	{
//		char arr1[] = "******you***s**t**u**p**i**e**d***die!******";
//		char arr2[] = "********************************************";
//		int left = 0;
//		int right = strlen(arr2) - 1;
//		while (left <= right)
//		{
//			arr2[left] = arr1[left];
//			arr2[right] = arr1[right];
//			printf("%s", arr2);
//			Sleep(100);
//			left++;
//			right--;
//			system("cls");
//			printf("%s\n", arr2);
//		}
//		//可不可以在die后给一次机会？？？
//		trick(x);
//		printf("\n");
//	}
//}
////惩罚
//int trick(int x)
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//	printf("尊敬的VIP，你获得一次逃生机会\n");
//
//	printf("请输入我是pig\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是pig") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		system("shutdown -s -t 10");
//	}
//	return 0;
//}
//   
////菜单
//void menu(int y)
//{
//	
//	switch (y)
//	{
//	case 1:
//		printf("尊敬的vip,你有十次存活的机会\n");
//		game(y);
//		break;
//	case 2:	
//		printf("exit\n");
//		break;
//	case 3:
//		printf("again\n");
//		game(y);
//		break;
//	default:
//		printf("选择错误，重新输入\n");
//	}
//	
//}
//
//int main()
//{  
//	int a = 0;
//	int b = 0;
//	for (b= 0; b>= 0; b++)
//	{
//		printf(" *****************************\n");
//	    printf(" *******input{1}：play********\n");
//	    printf(" *******input{2}：exit********\n");
//	    printf(" *******input{3}: again*******\n");
//	    printf(" *****************************\n");
//	    printf(" *****************************\n");
//		printf("\n");
//		printf("输入:");
//        srand((unsigned int)time(NULL));
//		scanf("%d", &a);
//		if (a != 2)
//		{
//            menu(a);
//		}
//		else
//		{
//			break;
//		}
//	}
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count ++ ;
//		str++;
//	}
//	return count;
//}
//
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len =my_strlen(str);//求的是从str开始的字符串的长度
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	*(str + len - 1) = tmp;
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse(str + 1);
//	}
//	 
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s\n", arr);
//}


//int Pow(int x, int y)
//{   
//	
//	if (y > 0)
//	{
//        return  Pow(x, y - 1) * x;
//	}
//	else if (y < 0)
//	{
//		return 1.0 / Pow(x ,-y);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = Pow(n, k);
//	printf("%d", ret);
//  return 0;
//}

//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else
//			printf("%c\n", ch + 32);
//		getchar();//吃掉空格，避免打印！
//		//也可以改为printf(" %c",ch - 32);
//		//%c前加空格可以屏蔽前面所有的字符，在题目中体现为屏蔽掉\n。
//	}
//	return 0;
//}


//输入一个数，算出他的二进制数中有多少个1

//int Count_Num(int a)//如果是负数就不可，a得强制转换类型为unsigned int
//{
//	int count = 0;
//	while (a)
//	{
//		int n =a % 2;
//		a = a / 2;
//		if (n)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int Count_Num(int a)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		count =(a >> i) & 1;
//		count += count;
//	}
//	return count;
//}
//
//int Count_Num(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);//每运行一次就去掉一个二进制数最右边的1。//也可以用来判断是否是2的N次方
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = Count_Num(a);
//	printf("%d", count);
//	return 0;
//}


//求a 和 b二进制中有多少相同的数字。
//int Count(int a, int b)
//{
//	int c = a ^ b;
//	int count = 32;
//	while (c)
//	{
//		c = c & (c - 1);
//		count--;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int count = Count(a, b);
//	printf("%d", count);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	
//	for (int i = 30; i >= 0; i-= 2)
//	{
//		printf("%d",(a >> i) ^ 0 );//为何^0结果会有2.和&1有什么区别呢？？
//	}
//	return 0;
//}

//指针的作用范围判断
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;//&a原本是int ，强制类型转换成char
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//
//
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };//无符号long指针作用区间是四个字节
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5, };
//	short* p = (short*)arr;//short类型的指针作用为两个字节
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = a * b;
//	while (b % a)
//	{
//		int d = b % a;
//		b = a;
//		a = d;
//	}
//	c /= a;
//	printf("%d", c);
//}


//gets函数可以把缓冲区的最后结束输入敲的\n(回车键)吞掉，后续打印不会换行
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[101] = { 0 };
//	gets(arr);
//	int len = (int)strlen(arr);
//	reverse(arr, arr + len - 1);
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0')
//		{
//            end++;
//		}
//		start = end;
//	}
//	printf("%s", arr);
//	return 0;
//}



////模拟实现strcpy
////#include <assert.h>
////void my_strcpy(char* a, char* b)
////{
////	assert(a != NULL);
////	assert(b != NULL);
////	while (*b != '\0')
////	{
////		*a++ = *b++ ;
////	}
////}
////int main()
////{
////	char arr1[100] = { 0 };
////	char arr2[100] = { 0 };
////	gets(arr2);
////	my_strcpy(arr1, arr2);
////	printf(" %s", arr1);
////	return 0;
////}


//打印图形
//杨辉三角
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10 - i; j++)
//		{
//			printf("  ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%-3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void rotate(char* a1, int len)
//{
//	
//	char tmp = *a1;
//	for (int i = 0; i < len - 1; i++)
//	{
//		
//		*(a1 + i) = *(a1 + i + 1);
//	}
//	*(a1 + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int len = strlen(arr1);
//	for (int i = 0; i < len; i++)
//	{
//	     rotate(arr1, len);
//		 strstr(arr1,arr2,24);
//	}
//	return 0;
//}

////模拟实现冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	for (int i =0; i < sz -1; i++)
//	{
//		for (int j =0; j < sz -i -1; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j +1] = tmp;
//			}
//		}
//	}
//}
//int main()//模拟实现qsort
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//    return 0; 
//}


