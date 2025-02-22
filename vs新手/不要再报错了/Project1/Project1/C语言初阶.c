#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include <string.h>//strcmp->判断字符串是否相等
#include<windows.h>//Sleep
#include<stdlib.h>//system，srand->定义起点数字，rand生成随机数
#include<time.h>//time->生成时间戳

//if 语句
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("小屁孩");
//	else if (age >= 18 && age < 28)
//		printf("新生的太阳");
//	else if (age >= 28 && age < 60)
//		printf("壮年");
//	else if (age >= 60 && age < 70)
//	    printf("夕阳");
//	else
//		printf("手里的苹果掉落在落日的余晖中");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a); 
//	int c = a % 2;
//
//	if (0 == c)
//	{
//		printf("a是偶数");
//	}
//	else
//		printf("a是奇数");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	while (a<= 100)
//	{
//		int d = a % 2;
//		printf("%d", a);
//		if (0 == d)
//		{
//			printf("是偶数\n");
//		}
//		else
//		{
//			printf("是奇数\n");
//		}
//		a++;
//	}
//	return 0;
//}


//switch(整形)
//case 后面要加空格！且后面应为整形常变量表达式，可以为字符。
//int main()
//{
//	int day = 1;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	//。。。。。。。。	 
// 	}
//	return 0;
//}

//int main()
//{
//	int day = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("选择错误");
//	}
//	return 0;
//}


//循环语句
// break可以永久终止循环，作用于while
// continue被执行会跳过本次循环，重新进入循环
//int main()
//{
//	int a = 1;
//	while (a<10)
//	{
//		a++;
//		if (5 == a)
//			continue;
//			printf("%d", a);
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

int main()
{
	char password[20] = { 0 };//password初始化
	printf("password:");
	scanf("%s", password);
	

	//int ch = 0;
	//ch = getchar();
	//while (ch  !='\n')
	//{
	//	;
	//}
	//printf("请确认密码（Y/N):");
	int ret = getchar();
	if ('Y' == ret)
	{
		printf("yes\n");

	}
	else
	{
		printf("no\n");
	}
	return 0;
}

//char类型读取字符是读取对应的ASCII码值
//该循环为输入任意字符，仅输出0-9之间的数字
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar())!= EOF)
//	{
//		if (ch < '0' || ch> '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//for 循环
//continue在while中会跳回到条件语句，而在for中跳到调整语句
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)//初始化；条件语句；调整语句
//	{
//
//		for (j = 0; j < 10; j++)
//		{
//			printf("hehe");
//		}
//		printf("%d", i);
//	}
//
//	return 0;
//}

//for循环的一道考题:循环了几次？
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0, j = 0; j = 0; i++, j++)
//	{
//		j++;
//	}
//	
//
//
//
//	//）次，因为j=0是赋值为假
//	return 0;
//}


//do.....while
//int main()
//{
//	int i = 1;
//	do
//	{
//		i++;
//		if (5 == i)
//			break;
//		printf("%d",i);
//	}
//	while (i < 10);
//	return 0;
//}

//求阶乘的和

//int main()
//{
//	int ret0 = 1;
//	int n = 0;
//	int i = 1;
//	
//	
//	int j = 3;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret0 = ret0 * i;
//	}
//	int sum = ret0;
//	int retn = ret0;
//	for (j = n; j > 1; j--)
//	{
//		
//		retn = retn / j;
//		sum = retn + sum;
//	}
//	//其实 我的算法思路逆过来用更好
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret0 = ret0 * i;
//		sum = sum + ret0;
//
//	}
//
//
//
//	printf("%d", sum);
//
//	return 0;
//}
//
//
//
//int main()
//{
//	int ret = 1;
//	int i = 1;
//	int n = 0;
//	int  sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//
//
//	return 0;
//}

//自己写的
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 1;
//	int left = 0 ;
//	int right = 9;
//	int n = 0;
//	scanf("%d", &n);
//	int k = n;
//	int mid = left + right;
//	
//	for (i = 1;i<=4; i++)
//	{
//	    mid = (left + right)/2;
//		
//		if (arr[mid] < k)
//		{
//			left = mid;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid;
//		}
//		else
//		{
//			
//			break;
//		}
//	}
//	printf("%d", mid);
//	return 0;
//}
//
//int main()
//{
//	int left = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int k = 0;
//	scanf("%d", &k);
//
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("get it,it is:%d",mid);
//		}
//	}
//	if (left > right)
//	{ 
//		printf("fause!");
//	}
//	return 0;
//}
 
 
//#include <windows.h>
//int main()
//{
//	char arr1[] = "welcome to NBA , noob!!!!";
//	char arr2[] = "#########################";
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//\0会占字节
//	int c = right;
//	int left = 0;
//	int j = 0;
//	int i = 0;
//	for (i = 0;i<=13;i++)
//	{
//		left =  i;
//		right =  c- i;
//		Sleep(100);
//		j = 24 - i;
//		arr2[i] = arr1[left];
//		arr2[j] = arr1[right];
//		printf("%s\n", arr2);
//	}
//	return 0;
//}


//#include <windows.h>
//#include <stdlib.h>
//Sleep函数能使执行速度变慢，但需要引用头文件#include <windows.h>
//int main()
//{
//	char arr1[] = "welcome to NBA , noob!!!!";
//	char arr2[] = "#########################";
//	int right = strlen(arr2) - 1;
//	int left = 0;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(100);
//		left++;
//		right--;
//		//system是一个库函数，执行系统命令，需要头文件（第二行），cls是清理屏幕
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//若返回值是0，表示两字符串相等
//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[100] = {0};//若没有设置内存，会导致内存不足而报debug error!!!
//	for (i = 0; i < 3; i++)
//	{
//		printf("the key:");
//		scanf("%s", password);//数组名本身就是地址，不需要取地址&
//		if (strcmp(password,"abcdef")==0)//比较2个字符串是否相等不能用==，而要用库函数：strcmp
//		{
//			printf("密码bingo\n");
//			break;
//		}
//	}
//	if (i == 3)
//	{
//		printf("theif! BACK OF MY HOUSE!\n");
//	}
//	return 0;
//}


//猜数字
//void menu()
//{
//	printf("################################\n");
//	printf("######     1.play      #######\n");
//	printf("###########0.exit      #######\n");
//	printf("################################\n");
//}

//RAND_MAX(0-32767)
//time_t为整数类型
#include <stdlib.h>//srand所需的头文件
#include <time.h>
//time函数会返回一个时间戳time_t，类型是整形；srand函数需要unsigned int类型的值，故进行强制转换；
//void game()
//{
//	
//	//1.rand生成随机数字
//	//2.srand定义起点数字
//	//3.time生成时间戳
//	RAND_MAX;
//	int ret = rand()%100+1;
//	
//	//4.猜数字
//	int guess = 0;
//	printf("guess the number");
//	int j = 0;
//	for (j = 1; j > 0; j++)
//	{
//		scanf("%d", &guess);
//		/*printf("%d\n", ret);*///作弊答案
//		if (guess == ret)
//		{
//			printf("right!,congradulate!");
//			break;
//		}
//
//		else if (guess < ret)
//			printf("bigger,input again:");
//		else
//		{
//			printf("smaller,input again:");
//		}
//	}
//}
//int main()
//{                                     //NULL为空指针
//	srand((unsigned int)time(NULL));//若将时间戳放在这，则每次调用函数时都会重新生成时间戳，点快的话会造成时间戳相等
//	int input = 1;                 //所以建议将时间戳放在主函数中！！！！
//	int i = 1;
//	for (i = 1; input != 0; i++)
//	{
//		menu();
//		printf("select:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("选择错误，重新选\n");
//			break;
//		}
//	}
//	return 0;
//}



//关机程序
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("你电脑即将关机，输入我是pig取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是pig") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}



//函数的使用 




//错误一：将a,b的值输入函数中，并传给了x y,也确实交换了x y的值，但x y 的值没有传回给a,b
// 本质就是a,b与x,y的地址不对应，是不同的变量。改变x,y但没有改变a,b。
// 但实参传递给形参时，形参是实参的一份临时拷贝，对形参的修改不会影响实参
//void Swap(a, b)
//{
//	int z = 0;
//	z = a;
//	b = a;
//	a = z;
//
//}

//上下都是传值调用

// 错误2：确实交换了x y的值，但是a,b的值没变
//void Swap(int x, int y)    //x y是形式参数
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}

//正解
//void Swap(int *x, int *y)
//{
//	int z = *x;
//	*x = *y;
//	*y = *x;
//}

//传址调用

//void Swap(int* a, int* b)
//{
//	int z = *a;
//	*a = *b;
//	*b = z;
//
//}
//int main()
//{
//	int a = 0;//实际参数
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//Swap(a,b);
//	Swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//求素数100-200


//1
//
//
//#include <math.h>//squrt的头文件用于开方
// int is_prime(int i)
//{
//	int b = 0;
//	for (b = 2; b <= sqrt(i); b++)
//	{
//		if (i % b == 0)
//		{	
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//
////函数法
//
////		if (is_prime(i))
////		{
////			printf("%d", i);
////			count++;
////			printf("%d\n", count);
////		}
// 
//
////循环法
//
//		int b = 0;
//		int flag = 1;
//	    for (b = 2; b <= sqrt(i); b++)
//	    {
//		    if (i % b == 0)
//		    {
//			flag = 0;
//			break;
//		    }
//	    }
//      
//      /*flag意义就是在你循环借书时判断i是否是素数
//      若没有flag 非素数和素数都会执行printf,导致错误！！！
//      */
//		if (flag == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//求闰年
//int rn(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0)
//	{
//		return 1;
//	}
//	else if (x % 400 == 0)
//		return 1;
//	else
//		return 0;
//
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (rn(i))
//		{
//             printf("闰年分别为%d\n", i);
//		}
//		
//	}
//	return 0;
//}



//找数组标号
//不能在函数内部求数组元素个数，因为数组传给函数本质上是上传指针，占4、0字节
//int binary_search(int x, int arr[], int sz)
//{
//	int left = 0;
//	int right = sz;
//	int mid = 0; 
//	
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else  if  (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//
//}
//int main()
//{
//	int k = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	int sz = sizeof(arr) / sizeof(arr[1]) - 2;
//	scanf("%d", &k);
//	int ret = binary_search(k,arr,sz);
//	printf("%d\n", ret);
//
//	return 0;
//}



//bool 用于函数定义前，是return flase和true.

//函数的声明，若无声明，则需把函数的定义置于main函数前！
//函数的声明要放在头文件中，定义放在另外一个源文件中，要调用函数则引用头文件即可。
//int Add(int x, int y);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = ADd(a, b);
//	printf("%d", sum);
//
//
//	return 0;
//}
//
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//
//}



//#include "mul.h"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = mul(a, b);
//	printf("%d", c);
//
//
//	return 0;
//}



//函数的递归
//递：函数延续调用
//归：函数返回
//递与归间需要限制条件才能停下，每次递归越来越接近限制条件。
//void print(unsigned int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


//数组传入函数本质是把数组第一个元素的地址传给函数，故要用指针接收
//str+1可以理解为a的地址往后，也可以看作标号+1;不能++是因为++是先使用（输入）后++
//int my_strlen(char* str)
//{
//
//	if (*str != \0)//限制条件
//   		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = { "abc" };
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//数组

//1.冒泡排序

//void bubble_sort(int arr[],int x)
//{
//	
//	int i = 0;
//	冒泡趟数
//	for (i = 0; i < x - 1; i++)
//	{
//		int j = 0;
//		一趟排序
//		for(j = 0; j < x - 1 - i; j++)
//		{
//           if (arr[j]>arr[j + 1])
//		   {
//			   int a = 0;
//			   a = arr[j];
//			   arr[j] = arr[j + 1];
//			   arr[j + 1] = a;
//		   }
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//函数内部不能求数组大小
//因为数组传参本质上是吧数组第一个元素的地址传过去
//求sz的时候只是求第一个元素的空间/元素数量：1  sz结果为1。
//但是有两个例外
//1.sizeof(数组名），这里的数组名表示整个数组，计算的是整个数组的大小
//2.&数组名，这款里的数组名表示整个数组，去除的是整个数组的地址。

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//数组首元素的地址  68
//	printf("%p\n", arr+1);//数组第二个元素的地址  6c
//	printf("\n");
//	printf("%p\n", &arr[0]);//数组首元素的地址  68
//	printf("%p\n", &arr[0]+1);//数组第二个元素的地址  6c
//	printf("\n");
//	printf("%p\n", &arr);//整个数组的地址，但是表现为第一个数组元素的地址  68
//	printf("%p\n", &arr+1);	//  90
//	//90-68=22
//	//22看作（2*16^0） +（2*16^1） 换算为十进制就是34
//	return 0;
//}


//2维数组
//把一行理解为一个数族元素即可




//操作符

//1.左移操作符
//int main()
//{
//	int a = 8;
//	int b = a << 1;
//	printf("%d", a);
//	printf("%d", b);
//
//}


//2.位移操作符//均是在补码上操作


//按位与，按位或，按位异或思考对改变二进制某一位的影响

//异或操作符
//3 ^ 3 = 0
//3 ^ 3 ^ 5 = 0
//3 ^ 5 ^ 3 = 5

//可知异或支持交换律。
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("交换前：a=%d, b=%d\n",a ,b);
//
//	a = a ^ b;
//	b = a ^ b; //3 ^ 5 ^ 5 = 3 ^ 0=3
//	a = a ^ b;
//	printf("交换后：a=%d, b=%d\n", a, b);
// return 0;
//}


//a&1可以用来判断a的最后一位二进制数是0/1
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = 0;
//	for (int i = 1; i <= 32; i++)
//	{
//		int b =a & 1;
//		if (b == 1)
//		{
//			count++;
//		}
//		a =a >> 1;//用于判断每一位是0/1
//	}
//	printf("%d", count);
//	return 0;
//}
//
//
//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011原码
//	//11111111111111111111111111111100按位取反后的补码
//	//11111111111111111111111111111011反码
//	//10000000000000000000000000000100原码
//	//-4
//}


//使正整数二进制从右到左第N位改为1
//int main()
//{
//	//设改变13的右数第二位为1
//	int a = 13;
//	//00000000000000000000000000001101  （13的补码）
//	// 令13 | 下面的补码
//	//00000000000000000000000000000010   补码B
//	//得到
//	//00000000000000000000000000001111
//
//	//补码B看作00000000000000000000001 << 1
//
//	a = a | (1 << 1);
//}


//逻辑操作符
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//&&为真才进行  1 && 3 &&  4  打印出2 3 3 5
//	i = a++ || ++b || d++;// || 只要为真，后面的都不会运行。 1 || ++b || d++  打印出2 2 3 4.
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}






//表达式求值

//整型提升!!!

//1.类型大小小于整型大小，必须先整型提升
//2.若一个表达式中既有有符号数，又有无符号数，那么会先把有符号数转换为无符号数在计算。
// 3.无符号数整型提升补0
////eg.
//-1
//10000000000000000000000000000001
//11111111111111111111111111111110
//11111111111111111111111111111111
// 算术转换，让第一位符号位转为算术位，即-1转为2^32
//算术转换是由低字节转为高字节



//二进制求值是内存中的运算，使用的是补码。
//而整正数原反补码相同，负数需要进行变换。
//计算的时候都是用整形，4字节。
// 只要是在表达式中，不是整形的会整型提升，前面会补最高位数直到变为4字节。
//内存运算是补码！！！
//int main()
//{
//	char a = 5;//00000000000000000000000000000101
//	//00000101-a
//	//00000000000000000000000000000101-a(整型提升）
//	char b = 126;//00000000000000000000000000111110
//	//0111110-b
//	//0000000000000000000000000111110-b(整型提升）
//	char c = a + b;
//	//0000000000000000000000010000011-c
//	//10000011-c(char类型）
//	//11111111111111111111111110000011-c(整型提升后的补码）
//	//11111111111111111111111110000010-c(反码）
//	//10000000000000000000000001111101-c(原码）
//	//-125
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	char  c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));//遇到+整型提升为int ，4字节
//	printf("%u\n", sizeof(-c));//遇到-整型提升为int ， 4字节
//	return 0;
//}

//算数转换
//若一个表达式中既有有符号数，又有无符号数，那么会先把有符号数转换为无符号数在计算。
//int i;//全局变量默认初始化为0
//int main()
//{
//	i--;//-1
//	//sizeof返回类型是size_t，是无符号整形
//	if (i > sizeof(i))//-1进行算数转换
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}



 

//指针
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;//float*理解为一种数据类型（用来接受地址），也就是vp的类型。
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;//*vp是指针变量
//	}
//	//先使用*vp。即令*vp = 0;
//	//再加加。即令vp = vp + 1;
//	return 0;
//}

//指针++
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//
//	方法1
//
//	/*for (i = 0; i < 10; i++)
//	{
//		arr[i] = 1;
//	}*/
//
//	方法2
//
//	int* p = arr;
//	/*for (i = 0; i < 10; i++)
//	{
//		*p = 1;
//		p++;
//	}*/
//
//	方法3
//
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}


//指针相减
//表达的是指针之间元素的个数。

//二级指针
//用来存放一级指针变量的地址

//指针数组
//存放指针的数组

//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//
//	int arr3[4] = { 3,4,5,6 };
//	int* parr[3] = { arr1,arr2,arr3 };//数组传的是首元素的地址，需要指针来接收。
//	//所以parr[3]是一个指针数组。
//	//arr[i] = *(arr + i)
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", *(parr[i]+j));
//		  //printf("%d ", parr[i][j]);//parr是指针数组，parr[i]存放arri这个数组，再对arri取下标j即可。
//		}//思考上面为什么不是*parr[i][j]???
//		printf("\n");
//	}
//	return 0;
//}





//结构体 可以理解为蓝图
//声明的结构体类型struct Peo
/*struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;

};*///p1,p2;//p1,p2是struct Peo结构类型创建的两个变量//全局变量
//或者写成struct Peo p1,p2;
//struct St
//{
//	struct Peo p;//结构体中的成员可以是结构体
//	int num;
//	float f;
//};
//int main()
//{
//	struct Peo p1 = { "zhangsan","166666666666","nan",181 };// 结构体变量的创建。
//	struct St s = { {"lisi","16666666666","nv",166},100,3.14f };//浮点数在内存中无法精确存放
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);//打印结构体的内容的格式！
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high,s.num,s.p);//打印结构体的内容的格式！
//	return 0;
//}



//结构体指针->成员(1)
//结构体对象.成员(2)
//(1)与（2）等价
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//void set_stu(struct Stu* ss)//必须是指针，因为要改变实参，并打印出实参。
//{
//	strcpy((*ss).name, "zhangsan");
//	(*ss).age = 20;
//	(*ss).score = 100.0;
//
//	strcpy(ss->name, "zhangsan");
//	ss->age = 20;
//	ss->score = 100;
//	//通过->找到指针ss去改变age,score,name
//}
//void print_stu(struct Stu* ss)
//{
//	printf("%s %d %lf\n", (*ss).name, (*ss).age, (*ss).score);
//}
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(&s);
//}


//**********
//*!*调试*!*

//bug
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;//当arr[i]的地址越界访问到i的地址时，arr[i]的变为0也会导致i变为0.
//		printf("hehe");
//	}
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	assert(src != NULL);//报错，预警
//	while (*dest++ = *src++)//当为\0时,为假，停止
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxx";
//	char arr2[20] = "hello bit";//字符串后藏有\0，传参的时候也会传上去
//	char* p = NULL;
//	my_strcpy(arr1, p);
//	return 0;
//}

//const修饰指针变量
//1. const放在*的左边
//意思是：p所指向的对象不能通过p来改变了，但是p变量本身的值可以改变
//const int* p = & num;
//int n = 100;
//*p = 20;//err
//p = &n//ok

//2.const 放在*的右边
//意思是p指向的对象可以通过p来改变，但是不能修改p变量本身的值

//int * const p = & num;
//*p = 0;//ok
//p = &n;//err