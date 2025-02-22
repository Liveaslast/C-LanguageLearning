#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//选择语句
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("要好好学习吗（1/0）？");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("高薪offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}

// 循环语句
//line 无法过大？！
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 2000)
//	{
//		printf("能写代码数:%d\n", line);
//		line ++;
//
//		if (line == 2000)
//		{
//			printf("好offer\n");
//		}
//		else
//		{
//			printf("you are a noob\n");
//		}
//	}
//	return 0;
//}


//函数.1
//int Add(int x,int y)
//{
//	
//	return x+y;
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int sum = Add(n1, n2);
//	printf("%d", sum);
//	return 0;
//}



//函数.2
//larger(a,b)
//{
//	if (a > b)
//	{
//		return a ;
//	}
//	else
//	{
//		return b;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int M = larger(a, b);
//	printf("%d", M);
//	return 0;
//}


//函数.3
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	if (x > 0)
//		y = -1;
//	else if (x == 0)
//		y == 0;
//	else
//		y = 1;
//	printf("%d\n", y);
//	return 0;
//}




//数组.1
//int main()
//{
//	int arr[] = {0,1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i = i + 1;
//	}
//	return 0;
//}


//数组.2
// arr[]中不能是变量
//int main()
//{
//	char arr1[9] = {"abcd erg" };
//	printf("%s\n", arr1);
//	printf("%d\n", strlen(arr1));
//	return 0;
//}



//操作符.
// 算术操作符
//int main()
//{
//	int a = 7 / 2;
//	printf("%d\n", a);
//	float b = 7 / 2.0;
//	printf("%f\n", b);
//	printf("%.1f\n", b);
//	//取模时%左右两边需为整数
//	int c = 7 % 2;
//	printf("%d\n", c);
//	return 0;
//}

//赋值操作符
//int main()
//{
//	int a = 0;//等号的作用：初始化
//	a = 20;//赋值
//	a = a + 3;
//	a += 3;
//	return 0;
//}

//单目操作符:只有一个操作数的操作符

//C语言中0为假，非0为真。而if只会执行真命题
//！为反过来的意思
//int main()
//{
//	int a = 0;
//	if (!a)
//	{
//		printf("hehe");
//	}
//	int b = 3;
//	int c = -b;
//	ptintf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof a);//4
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));//4
//	int arr[10] = { 0 };//arr中有10个空间
//	printf("%d\n", sizeof(arr));//40,计算的是整个数组的大小
//	printf("%d\n", sizeof(arr[1]));//arr[1]或arr[2]。。。。都表示arr中的一个元素。4
//	return 0;
//}


//int a = 10;
//int b = a++;//后置++ ：先使用a，后++
//int b=a;a=a+1;打印出b=10(使用a的值）,a=11（后+1）
//int b=++a;//前置++，前++，后使用。打印出b=a=11

//int main()
//{
//	int a = (int)3.14159;
//	printf("%d\n", a);
//	return 0;
//}

//关系操作符

//int a=10;初始化
//if(a=3)赋值
//.........

//int main()
//{
//	int a = 10;
//	if (a == 3)//判断
//	{
//		printf("hehe");
//	}
//	return 0;
//}

//逻辑操作符
//if(a && b)表示并且
//if（a || b)表示或者


//配合笔记理解 L223
/*nt main()
{
	int a = 0;
	int b = 10;
	int r = a > b ? a : b;
	printf("%d\n", r);
	return 0;
}*/

//逗号表达式
//int main()
//{
//	int a = 0;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);
//	//-2,18,-5输出结果是最后表达式得到的-5
//	return 0;
//}


//关键字
// 1.typedef
//typedef  unsigned int uint;
//
//typedef struct Node
//{
//	int deta;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	uint num2 = 1;
//	struct Node n;
//	Node n2;
//	return 0;
//}

//2.static
//static修饰局部变量
//void test()//void 意思是不需要test函数有任何的返回
//{                    //延长了生命周期，本质为改变了变量的存储位置
//	static int a = 1;//static使a出void函数后不被销毁，能继续使用。2，3，4，5，6...
//	a++;             //         （作用域）
//	printf("%d\n", a);
//}
//int main()  
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//static修饰全局变量:是全局变量的外部连接属性变成内部链接属性。

//其他源文件就无法使用这个全局变量。也就无法使用课后作业.c的[L35,L36]int g_val=2022
//声明外部符号extern
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//static修饰函数同理
//函数有外部链接属性，在VS2022中不需要申明extern 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d", z);
//
//	return 0;
//}

//寄存器register
//int main()
//{
//	register int num = 3;//建议3存放在寄存器中
//	return 0;
//}



//define 定义标识常量
//#define NUM 100
//int main()
//{
//	int n = NUM;
//	printf("%d\n", n);
//	int arr[NUM] = { 0 };
//
//	return 0;
//} 

//define 定义宏
//宏是有参数
//#define ADD(x,y) (x)+(y)//宏名，宏的参数，宏体
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}



//指针
//指针就是地址，也就是内存的编号
//存放指针的变量就是指针变量
//int main()
//{
//	int a = 10;//向内存申请4个字节，存储a
//	//&a;取地址操作符
//	printf("%p\n", &a);
//	int *p = &a;
//	//p就是指针变量，即a的地址
//	//也就是通过&a把变量a的地址拿出来，然后把地址赋值到指针变量p上，下行代码再将地址中的数据a赋值为20
//	*p = 20;//解引用操作符，通过p中地址，找到p所指向的对象，*p就是p指向的对象
//	return 0;
//}
//
//int main()
//{
//	printf("%zu", sizeof(char*));
//	printf("%zu", sizeof(float*));
//	//不管是什么类型的指针，都是在创建指针变量
//	//指针变量是用来存放地址的
//	//指针变量的大小取决于一个地址存放的时候需要多大的空间
//	//32位机器上的地址：32bit位-4byte,所以指针变量的大小是4个字节
//	//64位机器上的地址：64bit-8byte,所以指针变量的大小是8个字节
//
//	return 0;
//}
//
//
//
//结构体
//struct STU
//{
//	//结构体成员
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//void print(struct STU* ps)
//{
//	//->
//	//结构体指针变量->成员名
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//int main()
//{
//	struct STU s= { "zhangsan",20,"nan","1987654321" };
//	//结构体对象.成员名
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}
//
//
//
//
