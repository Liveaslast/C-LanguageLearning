#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
//判断操作系统是大端还是小端
//int main()
//{
//	int a = 1;
//	//char arr[32] = { a };//这个是数组在栈区的分布，和地址无关
//	//if (arr  == '1')
//	//{
//	//	printf("小端\n");
//	//}
//	//else
//	//{
//	//	printf("大端\n");
//	//}
//  
//	char* p = (char*) &a;//强制类型转换，判断第一个字节对应的地址解引用后是1/0从而来判断大小端
//	if(*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//算术转换，与整型提升

//******unsigned影响的只是unsigned整型提升补0而已******

//signed转化为unsigned
//int main()
//{
//	char a = -128;
//	//10000000 00000000 00000000 10000000   a原码
//	//11111111 11111111 11111111 01111111   a反码
//	//11111111 11111111 11111111 10000000   a补码
//	//10000000 截断
//	//11111111 11111111 11111111 10000000   a整型提升 -- b
//	//将b看作无符号数，则最高位1代表2^31，则b看作无符号数时其值为正数。
//	printf("%u", a);//先整型提升后再看作无符号数
//	return 0;
//}


//unsigned的整型提升:补0
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a = %d, b = %d, c = %d", a, b, c);
//
//	//10000000 00000000 00000000 00000001  a,b,c的原码
//	//11111111 11111111 11111111 11111110  a,b,c的反码
//	//11111111 11111111 11111111 11111111  a,b,c的补码
//	//11111111 a,b,c截断为char
//	//11111111 11111111 11111111 11111111  a,b整型提升
//	//10000000 00000000 00000000 00000001  a,b整形提升后的原码，值为-1
//
//	//00000000 00000000 00000000 11111111  c整型提升后的原码
//	//先把c截断后看作unsigned,再整型提升。
//	return 0;
//}


//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d", i + j);
//
//	//10000000 00000000 00000000 00011000  i的原码
//	//11111111 11111111 11111111 11100111  i的反码
//	//11111111 11111111 11111111 11101100  i的补码
//	// 
//	//00000000 00000000 00000000 00001010  j的补码
//
//	//i的补码转换为unsigned
//	//11111111 11111111 11111111 11110110 相加之后的补码。unsigned影响的只是unsigned整型提升补0而已
//	//10000000 00000000 00000000 00001010 补码转换为原码
//	return 0;
//}


//int main()
//{
//	unsigned int i ;
//	for (i = 9; i >= 0; i--)
//	{
//		//00000000 00000000 00000000 00001001
//		//9
//
//		//00000000 00000000 00000000 00001000
//
//		//......
//
//		//00000000 00000000 00000000 00000000
//		//0
// 
//      //10000000 00000000 00000000 00000001
//      //-1
//      //11111111 11111111 11111111 11111111
//      //-1转换为补码后变为无符号数，成为一个巨大的数
//     
//      
//
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}
//
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//问题是a[i] 的类型是char，只能放-128-127之间的数
//	//111111111  -1
//	//......
//	//100000000  -128
//	//011111111  127
//	//011111110  126
//	//......
//	//000000000  0 停止
//	//
//	printf("%d", strlen(a));//求字符串出现\0(阿斯克码值就是0）的位置，当找到0的时候停下来。
//	return 0;
//}


////浮点数的数据存储
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n:%d\n", n);//9
//
//	//00000000 00000000 00000000 0001001
// //   0 00000000 00000000000000000001001
//	/*E = -126   
//	M = 0.00000000000000000001001*/
//    
//	printf("*pFloat:%f\n", *pFloat);
//	
//	*pFloat = 9.0;
//	/*1001.0*/
//	
//	printf("n:%d\n", n);
//	printf("*pFloat:%f\n", *pFloat);
//
//
//
//	return 0;
//}


//指针

//字符指针
//int main()
//{
//	const char* p = "abcdef";//若没有
//
//	return 0;
//}


//int main()
//{
//
//
//	//指针数组    一个存放指针的数组
//	int* arr[4];
//	char* ch[5];


//	//数组指针    一个指向整个数组地址的指针
//	int arr2[5];
//	int(*pa)[5] = &arr2;   可以找到每个元素的地址


//	//函数指针    一个存放函数的指针
//	int x = 0;
//	int y = 0;
//	Add(x, y);
//	int(*pf)(int, int) = &Add;   可以根据信号来调用函数
//
// 
//  //函数指针数组    一个存放函数地址的数组 
//  int(*pfarr[4])(int, int) = { Add,Jian,Chen,Chu };    //    可找到每个函数的地址,用来选择你要调用的函数，
//                                                      //  方便后续增加或减少需要调用的函数
//
// 
//  //函数指针数组指针   一个指向 存放函数地址的数组 的 指针
//    int(*(*ppfarr)[4])(int, int) = &pfarr;            可以找到每个函数 
// 
//    (*pparr)[4]  -->pparr优先和*结合（有括号下，若无括号，则优先和[4]结合），说明是指针，指针指向了[4]，即指向了数组
//    int(*           )(int, int) = &arr;指向的数组的类型是int(*           )(int, int)，即函数指针
// 
//  return 0;
//}

//int(*pf)(int, int) = &Add;
//int ret = pf(3,4);
//void(* signal(int, void(*)(int)) )(int);//申明signal，signal有两个参数，类型分别是int,函数指针.signal的返回值是一个函数指针
//改进上段代码
//Typedef void(*sighandler)(int)
//sighandler signal(int, sighandler)







//数组指针
//用来存放数组的地址
 
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//p实际上是存放arr数组地址的数组.
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", *(*p + i));//p是指向数组的，*p其实就相当于数组名，数组名又是数组首元素的地址。
//		//所以*p本质上是数组首元素的地址
//	}
//	return 0;
//}

//void print(char (*p)[5], int a, int b)//p指向二维数组第一行的地址,*p是某一行首元素的地址
//{
//	for (int i = 0; i < a ; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			printf("%d ", * (*(p + i) + j));
//			
//			等价于printf("%d ",p[i][j] );
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	char arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7, };
//	print(arr, 3, 5);//传的是arr数组的首元素的地址，二维数组首元素是他的第一行，也就是传了第一行的地址给print.
//	return 0;
//}



//int(*arr[10])[5];存放数组指针的数组。
//arr[10]是一个存放数组arr1,arr2,arr3,arr4....地址的数组
//而存放的数组arr1,arr2,arr3,arr4都是有五个元素的数组.


//函数指针

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pf)(int, int) = &Add;
//	int ret = (*pf)(3, 4);//调用函数
//	//int ret = pf(3,4);
//	printf("%d", ret);
//	return 0;
//}



//回调函数
//int Add(int x, int y)
//{
//	return x + y;
//}
//void calc(int(*pf)(int, int))
//{
//	int a = 3;
//	int b = 5;
//	int ret = pf(a, b);
//}
//int main()
//{
//	calc(Add);
//	return 0;
//}



//简易计算器1.1.0
//void menu()
//{
//	printf("************************\n");
//	printf("******1.jia 2.jian******\n");
//	printf("******3.chen 4. chu*****\n");
//	printf("******5.tui*************\n");
//	printf("************************\n");
//	
//}
//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Jian(int x, int y)
//{
//	return x + y;
//}
//int Chen(int x, int y)
//{
//	return x + y;
//}
//int Chu(int x, int y)
//{
//	return x + y;
//}
//
//int Sum(int (*fl)(int, int))
//{
//	printf("shu liang ge shu zi");
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = fl(a,b);
//	printf("%d", ret);
//}

//回调函数：通过函数指针在适合的情况调用函数

//int main()
//{
//	int input = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//
//		printf("input:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Sum(Add);
//			break;
//		case 2:
//			Sum(Jian);
//			break;
//		case 3:
//			Sum(Chen);
//			break;
//		case 4:
//			Sum(Chu);
//			break;
//		case 5:
//			printf("tui\n");
//		default:
//			printf("chong xing xuan ze");
//		}
//	} while (input != 5);
//	return 0;
//}


////函数指针数组--->>转移表
////实现选择函数的功能
//int main()
//{
//	int(*pf)(int, int) = Add;
//	int(*arr[4])(int, int) = { Add,Jian,Chen,Chu };//参数相同，返回类型相同。
//	for (int i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);//通过指针数组调用函数
//		printf("%d", ret);
//	}
//	return 0;
//}
//
////计算器1.1.0
//void menu()
//{
//	printf("************************\n");
//	printf("******1.jia 2.jian******\n");
//	printf("******3.chen 4. chu*****\n");
//	printf("******5.tui*************\n");
//	printf("************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Jian(int x, int y)
//{
//	return x + y;
//}
//int Chen(int x, int y)
//{
//	return x + y;
//}
//int Chu(int x, int y)
//{
//	return x + y;
//}
//
//函数指针数组的应用
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	int a = 0;
//	int b = 0;
//	int(*arr[])(int, int) = {0, Add,Jian,Chen,Chu };//后续改进功能是很方便
//	do
//	{
//		menu();
//
//		printf("input:\n");
//		scanf("%d", &input);
//		if (input == 5)
//		{
//			printf("退出");
//			break;
//		}
//		else if (input < 5 && input > 0)
//		{
//			printf("选择两个操作数\n");
//			scanf("%d %d", &a ,& b);
//			ret = arr[input];
//			printf("%d", ret);
//		}
//		else
//		{
//			printf("选择错误！");
//		}
//	} while (input != 5);
//	return 0;
//}



//回调函数
//应用1：冒泡排序的优化

//void bubble_sort(int arr[], int sz)
//{
//	for (int i =0 ;i < sz - 1 ; i++)
//	{
//		for (int j =0 ;j < sz -1 -i ; j++)
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

//目前缺点：只能排序整型数组
//改进排列
//qsort:库函数，可以排序任意类型的数据//1.你要排序的数组的起始位置。2.待排序的数据元素的个数。
									  //3.待排序的数据元素的大小（字节）。4.函数指针int(* cmp)(const void* e1,const void* e2)
									  //e1,e2是你要比较的两个元素的地址。
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);//强制类型转换为int*才能比较大小，因为void*无法实现比大小。升序
//	//return(*(int*)e2 - *(int*)e1);//降序
//}
//
////ps:void* 指针的特点
////int main（）
////{
////   int a = 10;
////   char* pc = (char*)&a;
////   void* pv = &a; //void*指针是无具体类型的指针，可以接受任意类型的的地址，但是不能解引用，不能+-整数
////   return 0; 
////}
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);//cmp_int其实是一个函数指针，其类型是int(* )(const void* e1, const void* e2)
//	//通过这个指针，我们调用了上面的cmp_int函数来比较大小。
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//	//strcmp 返回类型恰好和qsort的返回类型相同。
//}
//
//
//void test2()
//{
//	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s", s[i].name);
//	}
//}
//
//void Swap(char* base1, char* base2, int width)
//{
//	for (int i = 0; i < width; i++)//确保转换的类型每个字节空间内存储的数据都转换！！
//	{
//		int tmp = 0;
//		tmp = *base1;
//		*base1 = *base2;
//		*base2 = tmp;
//		base1++;
//		base2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* , const void* ))//用函数指针接收cmp_int的地址
//{
//	for (int j = 0; j < sz - 1; j++)
//	{
//		int flag = 1;//旗帜，如果已经排好序，就不需要下一趟冒泡了
//		for (int i = 0; i < sz - 1 - j; i++)
//		{
//			if (cmp((char*)base + i * width, (char*)base + (i + 1) * width)>0)//用函数指针调用函数操作
//				                                                              //指针类型+1 ：跳过指针类型对应的空间大小（int* +1):+4!
//			{
//				Swap((char*)base + i * width, (char*)base + (i + 1) * width, width);
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//void test3()//模拟实现qsort
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);//传入函数cmp_int地址
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//	//test1();
//	printf("\n");
//	//test2();
//	printf("\n");
//
//	test3();
//	return 0;
//}
//理解：
//你有一个数组，你想对它进行排序。
//你定义了一个比较函数 cmp_int，它告诉 qsort 如何比较数组中的元素。
//你调用 qsort，并传递你的数组、数组的大小、每个元素的大小以及指向 cmp_int 的指针作为参数。
//qsort 在其内部使用你提供的比较函数来比较数组中的元素，并根据比较的结果对它们进行排序。





//复习指针：
//数组名，数组首元素地址
//指针运算（类型相关）

//指针运算的题目
//1.
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//&a+1，跳过整个数组，数组指针类型强制转换为（int*）
//	printf("%d %d", *(a + 1), *(ptr - 1));
//	return 0;
//}
////2.
//struct Test
//{
//	int Num;
//	char* pcName;
//	short Sdate;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;
////Test 变量大小为20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);
//	//指针加1，0x100000 + 20  0x100014     
//	printf("%p\n",(unsigned long)p + 0x1);
//	//无符号长整型+1，0x100001   
//	printf("%p\n",(unsigned int*)p + 0x1);
//	//+4
//}
//
////3.
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);//a是数组首元素地址，转换为int 后+1 不能看作+4(因为不再是指针运算）
//	//+1是a首元素地址实实在在+1，如原来是0x000001 ->0x000002
//	//而数组元素在VS中是小端存储，故为02000000，省略开头0 得到2000000（详见笔记本）第（“1”）页
//	printf("%x,%x", ptr1[-1], *ptr2);
//	printf("\n");
//	printf("%d", *ptr2);
//	return 0;
//}
//
////4.
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//{{0,1},{2,3},{3,4}}小括号内是逗号表达式！！
//	int* p = a[0];//a[0]是a数组第一行的数组名，代表第一行首元素的地址
//	printf("%d", p[0]);
//	return 0;
//}
//
////5.
// //二维数组的元素地址也是连续的
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//p[i][j] 等价于  *(*(p+i)+j)  -4
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//-4在地址中是补码形式，打印p就是补码。打印d就是-4
//	return 0;
//}
//
////6.
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n",**++cpp);//POINT
//	printf("%s\n",*--* ++cpp +3 );//ER
//	printf("%s\n",*cpp[-2] + 3);//ST
//	printf("%s\n",cpp[-1][-1] + 1);//EW
//	return 0;
//}
//
//
////7.
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));//(*(aa+1))  等价于aa[1],是第二行的数组名，表示第二行首元素的地址
//	printf("%d, %d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

////8.
//int main()
//{
//	char* a[] = { "work","at","alibaba" };//字符串其实看作字符串首元素的地址
//	char** pa = a;
//	pa++;
//	printf("%s", *pa);
//	return 0;
//}


//字符函数和字符串函数
//

//1.模拟实现strlen  计算‘\0'前有多少个字符
// 返回值是无符号整型，size_t(unsigned int)
//1.计数器
//int my_strlen1(const char* a)
//{
//	int count = 0;
//	assert(a);
//	while (*a != '\0')
//	{
//		count++;
//		a++;
//	}
//	return count;
//}
////2.指针-指针
//int my_strlen2(const char* a)
//{
//	assert(a);
//	char* tmp = a;
//	while (*(++a) != '\0')
//	{
//		;
//	}
//	return a - tmp ;
//}
////3.递归法
//int my_strlen3(const char* a)
//{
//	if (*a != '\0')
//	{	
//	    return 1 + my_strlen3(++a);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int achieve(int(*pf[3])(const char*),char* a)
//{
//	int i = 0;
//	scanf("%d", &i);
//	return pf[i](a);
//}
//int main()
//{
//	char arr[200] = { 0 };
//	gets(arr);
//	int(*pf[4])(const char*) = {0, my_strlen1 ,my_strlen2,my_strlen3 };
//	int len = achieve(pf,arr);
//	printf("%d\n", len);
//	return 0;
//}


//2.strcpy:拷贝'\0'以及之前的字符串
//int main()
//{
//	char name[20] = { 0 };
//	strcpy(name,"zhangsan");
//	printf("$s\n", name);
//	return 0;
//}
////模拟实现strcpy
//char* my_strcpy( const char* a1, char* a2)
//{
//	assert(a1 && a2);
//	char* start = a1;
//	while (*a2++ = *a1++)
//	{
//		;
//	}
//	return start;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	char*  ret =my_strcpy(arr2, arr1);
//	printf("%s\n",ret);
//}

//3.strcat字符串追加


//strcat模拟实现
//char* my_strcat(char* a1, const char* a2)
//{
//	assert(a1 && a2);
//	char* start = a1;
//	while (*a1++)
//	{
//		;
//  }
//	while (*a1++ = *a2++)
//	{
//		;
//	}
//
//	
//	return start;
//}
//int main()
//{
//	char arr1[20] = "hallo";
//	strcat(arr1, "world");
//    char* ret = my_strcat(arr1, "world");
//	printf("%s\n", arr1);
//	printf("%s\n", ret);
//	return 0;
//}


//4.strcmp 比较字符串
//return >0 / 0 / <0,返回值是int
//int main()
//{
//	char arr1[20] = { "zhangsan" };
//	char arr2[] = "zhangsanfeng";
//
//	int ret = strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}

//5.strstr找到是否存在子字符串 
// 
//返回一个和传入strstr的指针相同类型的指针，若没有字串则返回NULL
//模拟实现strstr
//char* my_strstr( const char* a1,const  char* a2)
//{
//	assert(a1 && a2);
//	char* start = a2;//abcrabcd.com
//	                 //abcd
//	if (*a1 == '\0')
//	{
//		return NULL;
//	}
//	while (*a1 != *a2 && *++a1 != *a2 )//首字符相同直接进入判断，不同就循环直到指向的字符相同
//	{
//		;
//	}
//	int flag = 0;//用于判断是否存在相同的字符串
//	while (*a2 != '\0')
//	{
//	    flag = 0;
//		if (*a1++ == *a2++)
//		{
//			flag = 1;
//		}
//	}
//	if (flag)
//	{
//		return start;
//	}
//	else 
//	{
//		my_strstr( a1, start);//传start而不能直接传a2,因为a2在上面的代码中已经改变。
//	}
//}
//int main()
//{
//	char email[] = "babcrabcd.com";
//	char substr[] = "abcd";
//	//char* ret = strstr(email, substr);
//	char* ret = my_strstr(email, substr);
//	if (ret == NULL)
//	{
//		printf("字串不存在");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//strtok
//切割字符串
//找到字符串中一个标记（@ . /)然后把这个标记改为/0，返回该字符串第一个参数的地址。
//第一个参数不为NULL,strtok会找到第一个标记（@ . /)，并保存它在字符串中的位置
//找下一段时就跳过第一个标记往下找
//int main()
//{
//	const char* sep = "@.";
//	char email[] = "zhangpengwei@@bitejiuyeke.com";
//	char cp[30] = { 0 };
//	strcpy(cp, email);
//	//char* ret = strtok(cp, sep);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, sep);//NULL表示从第一个标记开始向后找
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, sep);
// 
//	char* ret = NULL;//指针初始化
//	for (ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//
//	}
//	return 0;
//}

//strerror
//int main()
//{
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//
//	FILE* pf = fopen("text.text", "r");//以可读形式‘r'打开file text.text
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//errno -C语言设置的一个全局的错误码存放的变量
//		return 1;
//	}
//	else
//	{
//		;
//	}
//	return 0;
//}

//tolower转小写
//tohigher转大写

//memcpy--内存拷贝(void* destination, const void* source, size_tnum)
//只能拷贝两块独立内存空间的数据
//size_tnum是算拷贝内容有多少个字节
//void*  my_memcpy(void* a2, void* a1,size_t num)
//{
//	assert(a1 && a2);
//	int count = 0;
//	void* start = a2;
//	while (count++ != num  )
//	{
//		*((char*)a2)++ = *((char*)a1)++;
// 
//      //老师写的
//      //*(char*)a1 = *(char*)a2;
//      //a1 = (char*)a1 + 1;
//      //a2 = (char*)a2 + 1;
//	}
//	return start;
//}
//
//void* my_memmove(void* dest, void* source, size_t num)
//{
//	assert(dest && source);
//	void* start = dest;
//	if (dest < source)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)source;
//			dest = (char*)dest + 1;
//			source = (char*)source + 1;
//		}
//		return start;
//	}
//	else
//	{
//		while (num--)
//		{
//			
//			*((char*)dest + num)  = *((char*)source + num);
//		}
//		return start;
//	}
//}
//int main()
//{
//	int arr1[20] = { 1,2,3,4,5,6,7,8,8 };
//	int arr2[20] = {0};
//	//memcpy(arr2, arr1,36);
//    my_memcpy(arr2, arr1, 36);
//	
//	memmove(arr1 + 2, arr1, 36);
//	my_memmove(arr1 + 2, arr1, 36);
//
//	for (int i = 0; i < 9; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	return 0;
//}


////结构体
//
//
//struct Stu//结构体标签Stu
//{
//	char name[20];
//	int age;
//};
//
//struct Stu
//{
//	char name[20];
//	int age;
//}s1,s2;//s1,s2是Stu类型的变量
//
//
////匿名结构体类型:只能使用一次结构体变量x
//struct
//{
//	char name[20];
//	int age;
//}x;
//
////结构体的自引用
//struct Node
//{
//	int date;
//	struct Node* next;
//};

//结构体的初始化
//struct Point
//{
//	int x;
//	int y;
//}p = { 2,3 };
//struct score
//{
//	int n;
//	char ch;
//}; 
//
//struct Stu
//{
//	char name[20];
//	int age;
//	struct score s;
//};
//
//int main()
//{
//	struct Point p2 = { 3,4 };
//	struct Stu s1 = { "zhangsan",3,{3,'f'}};
//	printf("%s %d %d %c\n", s1.name, s1.age, s1.s.n, s1.s.ch);
//	return 0;
//}

//结构体内存对齐（可参考笔记本）！
//让小的结构体成员尽量相邻减少空间浪费
#include <stddef.h>//offsetof的头文件。
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%u\n", offsetof(struct S1, c1));//offsetof(type,member)用于查找结构体成员的偏移量。
//	printf("%u\n", offsetof(struct S1, i));
//	printf("%u\n", offsetof(struct S1, c2));
//	return 0;
//}

//#pragma pack(4)//定义对齐默认值
//struct S
//{
//	int i;//0~3 默认值为8时
//	double d;//8 ~ 16 默认值为8时
//};
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}


//struct S
//{
//	char arr[20];
//	int n;
//};
//void print(struct S* s)
//{
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d", s->arr);
//	}
//	printf("%d", s->n);
//}
//int main()
//{
//	struct S s = { {1,2,3},100 };
//	print(&s);
//}
//
////位段  只能存在于结构体
////不跨平台
//struct A
//{
//	//开辟4byte（int家族） ，若是char,则为1byte
//	int _a : 2;//限定为2个bit,节省空间
//	int _b : 5;
//	int _c : 10;
//	//15bite
//	//再开辟4byte
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));//8
//	return 0;
//}



//枚举可以定义多个变量
//enum Day
//{
//	Mon = 1,
//	Tues,
//	Wed,
//};
//int main()
//{
//	enum Day d = Mon;
//	printf("%d\n", d);
//	printf("%d\n", Mon);
//	printf("%d\n", Tues);
//	printf("%d\n", Wed);
//}

//联合体
//成员共用一个地址
//union Un
//{
//	int a;//对齐数：4，最大对齐数为4
//	char c[5];//对齐数：1，成员大小：5//当最大成员类型大小不等于最大对齐数的整数倍时，要对齐到最大对齐数的整数倍
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", (int)sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &u.a);
//	printf("%p\n", &u.c);
//}


//动态内存管理
//malloc开辟内存:返回指向开辟的内存开头地址
//int main()
//{
//	//int arr[10] = { 0 };
//	int* p = (int*)malloc(40);//若开辟内存失败，则返回空指针。
//	if (p == NULL)
//	{
//		printf("%s\n", streerror(errno));
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;//p指向的内存空间释放，还给操作系统，但是p本身的地址不变，还能找到还给操作系统的内存，危险，野指针，必须让p成为空指针
//	return 0;
//}


//calloc：开辟十个整型的内存空间，但是会给每个空间初始化为0；
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d",*(p + i));
//	}
//	
//	free(p);
//	p = NULL;
//	return 0;
//}


//realloc :在原动态内存基础上开辟内存
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	} 
//	int* ptr = (int*)realloc(p, 80);//追加40个字节，总共80个字节(可能会新开辟一块内存并把原内存释放）
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	free(p && ptr);
//	p = NULL;
//	ptr = NULL;
//	return 0;
//}


//常见动态内存错误
//1.
//int main()
//{
//	int* p = (int*)malloc(40);
//	//if（NULL == p)
//	//{
//    //		printf("%s\n", strerror(errno));
//	//}    
//	*p = 20;//万一开辟失败，返回空指针，解引用会失败。
//	return 0;
//}

//2.
//int main()
//{
//	int* p = (int*)malloc(40);
//	if(NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//	}    
//	for (int i = 0; i <= 10; i++)
//	{
//		p[i] = i;//动态内存开辟也要注意越界访问的错误
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3.
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;//free只能释放动态内存开辟的空间
//}


//4.
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	for (int i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;//会导致p改变，以后free时只能释放一部分空间
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//5.
//int main()
//{
//	int* p = (int*)malloc(40);
//	free(p);//需要把p赋为空指针，否则会连续释放两次，野指针free,危险
//	//.....
//	//.....
//	free(p);
//	return 0;
//}


//6.内存泄漏
//必须要把申请的内存返回（free）


//柔性数组
//结构体最后一成员允许是未知大小的数组，叫做柔性数组 成员
//struct S
//{
//	int n;
//	int arr[];
//};
//int main()
//{
//	int sz = sizeof(struct S);
//	printf("%d", sz);//4,只会算结构体非柔性数组成员的大小
//
//	//要使用包含柔性数组的结构体，必须用malloc去开辟内存
//	struct S* ps =(struct S*)malloc(sizeof(struct S) + 40);
//	if (NULL == ps)
//	{
//		return 1;
//	}
//
//	//访问柔性数组的成员
//	ps->n = 100;
//	for (int i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d", ps->arr[i]);
//	}
//
//	//柔性数组扩容
//	struct S* ptr = realloc(ps, sizeof(struct S) + 80);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//		ptr = NULL;
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//文件
// 
//1.打开与所有流的输出与输入
// 
//int main()
//{
//	FILE* pf = fopen("D:\\SteamLibrary\\steamapps\\workshop\\content\\[中字]HSR_ACHERON_BECAUSE_I_LOVE_YOU_4K_FIRST_TAKE.mp4", "r");
//	if (NULL == pf)
//	{
//		printf("%s\n", strerror(errno));
//		//perror("fopen"); 
//		return 1;
//	}
//	int c = fgetc(pf);//一次读取一个字符
//	printf("%d\n", c);
//	int ch = 0;
//	while (ch = fgetc(pf) != EOF)//当读不出来时返回EOF
//	{
//		printf("%c\n", ch);
//	}
//
//	//读取一行数据
//	char arr[20];
//	fgets(arr, 5, pf);//把pf指向的文件读取5个字符给arr,最后会读一个\0，导致实际读取的是四个字符
//	printf("%s\n", arr);
//
//	fclose(pf);//关闭文件，类似于free
//	pf = NULL;
//	return 0;
//}
////写
//int main()
//{
//	FILE* pf = fopen("D:\\SteamLibrary\\steamapps\\workshop\\content\\[中字]HSR_ACHERON_BECAUSE_I_LOVE_YOU_4K_FIRST_TAKE.mp4", "w");
//	if (NULL == pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//写文件
//	for (char i = 'a'; i < 'z'; i++)
//	{
//		fputc(i, pf);//一次写入一个字符（fputc)
//	}
//	fputs("hello world", pf);//写一行字符，写之前会清空文件！，不想清空则在fopen那文件打开模式改为"a"  
//	fclose(pf);//关闭文件，类似于free
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int age;
//	char name[20];
//	char sex[10];
//	char addr[40];
//};
//int main()
//{
//	FILE* pf = fopen("D:\\SteamLibrary\\steamapps\\workshop\\content\\[中字]HSR_ACHERON_BECAUSE_I_LOVE_YOU_4K_FIRST_TAKE.mp4", "w");
//	struct S s = { 4,"zhangsan","nv","guangzhou" };
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//把数据写到文件上
//	fprintf(pf, "%d %s %s %s", s.age, s.name, s.sex, s.addr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = ("D:\\SteamLibrary\\steamapps\\workshop\\content\\[中字]HSR_ACHERON_BECAUSE_I_LOVE_YOU_4K_FIRST_TAKE.mp4", "r");
//	if (NULL == pf)
//	{
//		perror(fopen);
//		return 1;
//	}
//	//读取文件中d s s s的内容,放到结构体s成员上
//	fscanf(pf, "%d %s %s %s", &(s.age), s.name, s.sex, s.addr);//最后必须是地址
//	printf("%d %s %s %s", s.age, s.name, s.sex, s.addr);//这个和下面的等价
//	fprintf(stdout, "%d %s %s %s", s.age, s.name, s.sex, s.addr);//stdout是C程序中的数据流
//	return 0;
//}


////文件的二进制输入与输出
//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "zhangsan",25,50.5f };
//	FILE* pf = fopen("D:\\SteamLibrary\\steamapps\\workshop\\content\\[中字]HSR_ACHERON_BECAUSE_I_LOVE_YOU_4K_FIRST_TAKE.mp4", "wb");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fwrite(&s, sizeof(struct S), 1, pf);//把一个结构体S类型大小的s写入到文本中
//	return 0;
//}
//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "zhangsan",25,50.5f };
//	FILE* pf = fopen("D:\\SteamLibrary\\steamapps\\workshop\\content\\[中字]HSR_ACHERON_BECAUSE_I_LOVE_YOU_4K_FIRST_TAKE.mp4", "rb");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fread(&s, sizeof(struct S), 1, pf);//把一个结构体S类型大小的s读文本中
//	printf("%s %d %f", s.arr, s.age, s.score);
//	return 0;
//}



//sprintf 把一个格式化的数据转换为字符串
//scanf 把一个字符串转换为一个格式化的数据

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "zhangsan",3,5.05f };
//	char buff[100];
//	//把s中的格式化数据转化成字符串放到buff
//	sprintf(buff,"%s %d %f", s.name,s.age, s.score);
//	printf("%s", buff);
//
//	struct S tmp = { 0 };
//	//从字符串buf中获取一个格式化的数据放到tmp中
//	sscanf(buff,"%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	return 0;
//}


//文件的随机读写
//int main()
//{
//	FILE* pf = fopen("D:\\SteamLibrary\\steamapps\\workshop\\content\\[中字]HSR_ACHERON_BECAUSE_I_LOVE_YOU_4K_FIRST_TAKE.mp4", "rb");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//fseek会改变文件读写指针的位置
//
//	//abcdef   //文件起始位置
//	fseek(pf, 2, SEEK_SET);//int fseek ( FILE * stream, long int offset, int origin );(流，偏移量，起始位置）
//	int ch = fgetc(pf);//c
//               //文件目前指向的位置
//	fseek(pf, 2, SEEK_CUR);
//	ch = fgetc(pf);//f
//	            //文件末尾
//	fseek(pf, -1, SEEK_END);
//	ch = fgetc(pf);//f
//
//	//ftell 计算文件读写指针相对于起始位置的偏移量
//	ftell(pf);//6，当读取一个字符时，文件指针会自动向后移动一个位置，所以是6不是5
//
//
//	//rewind 让文件读写指针归零
//	rewind(pf);
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("C语言进阶.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//文件读取结束的判定
//feof :用来判断文件读取结束时是否因为遇到文件尾结束
//返回为真，代表恰好读到文件的末尾 

//ferror : 用来判断是否因为遇到错误而结束读取
//返回为真，代表遇到读取错误而结束读取


//判断文件读取是否结束
//1.fgetc 判断是否为EOF(文本文件）
//2.fgets 判断返回值是否为NULL（文本文件）
//3.fread判断返回值是否小于实际要读的数（二进制文件）


//#define SIZE 5
//int main()
//{
//	double a[SIZE] = { 1.,2.,3.,4.,5., };
//	FILE* pf = fopen("D:\\SteamLibrary\\steamapps\\workshop\\content\\[中字]HSR_ACHERON_BECAUSE_I_LOVE_YOU_4K_FIRST_TAKE.mp4", "wb");
//	fwrite(a, sizeof * a, SIZE, pf);//把5个a中的double类型的数据以二进制形式写到文件中
//	fclose(pf);
//
//	double b[SIZE];
//	pf = fopen("D:\\SteamLibrary\\steamapps\\workshop\\content\\[中字]HSR_ACHERON_BECAUSE_I_LOVE_YOU_4K_FIRST_TAKE.mp4", "rb");
//	size_t ret_code = fread(b, sizeof * b, SIZE, pf);//把文件中的数据以二进制形式读到b中
//	//fread会返回成功读取到的数据的数目
//	if (ret_code == SIZE)//成功把文件数据都读取出来
//	{
//		for (int n = 0; n < SIZE; ++n)
//		{
//			printf("%f\n", b[n]);
//		}
//	}
//	else
//	{
//		if (feof(pf))//此情况下表示文件中只有小于SIZE的数据，但是要读SIZE的数据，说明已经读到了文件尾，（写数据的时候出错）？
//		{
//			printf("文件已经读完\n");
//		}
//		else if (ferror(pf))
//		{
//			perror(" ");
//		}
//	}
//	fclose(pf);
//}


//文件缓冲区：当在程序上输入信息到文件上，会先把信息存储到缓冲区中，一段时间后再传到文件中，以提高操作系统的工作效率



//预定义符号
//int main()
//{
//	FILE* pf = fopen("C语言进阶.txt", "w");
//	if (!pf)
//	{
//		perror("fopen");
//		return EXIT_FAILURE;
//	}
//	for (int i = 0; i < 10; i++)
//	{                                                           //进行编译的源文件  文件当前的行号     文件被编译的日期  文件被编译的时间
//		fprintf(pf, "file:%s line = %d date:%s time:%s i = %d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//define
//define尽量后面不加分号
//#define MAX 1000
//#define STR "hello bit"
//#define print printf("hehe\n")
//
//int main()
//{
//	int m = MAX;
//	printf("%d\n", MAX);
//	printf("%s\n", STR);
//	print;
//}


//define定义宏:不要省空号，避免出错
//#define SQUARE(X) X*X//SQUARE和（X)必须紧邻，否则（X) 会和X*X一起被定义为SQUARE
////正解：#define SQUARE(X) ((X)*(X))
//int main()
//{
//	int r = SQUARE(5);
//	int r = SQUARE(5 + 1);//5+1会被直接视为X进行计算，5 + 1 * 5 + 1 = 6
//	//所以要定义为（（X）*（X））
//
//	printf("%d\n", r);
//	return 0;
//}

//宏参数和#define定义中可以出现其他#define定义的符号。但是对于宏，不能出现递归，但是可以替换为其他代码
//当预处理搜索#define定义的符号是，字符串常量内容不会被搜索，其他内容会被替换的#define定义的宏
//                                #define M 8    “M"不会被替换为8

//#N,把N转译为字符串，避免N的值替换
//#define PRINT(N) printf("the value of "#N" is %d\n",N)
//#define PRINT(N, FROMAT) printf("the value of "#N" is  FORMAT",N)
//int main()
//{
//	int a = 0;
//	float f = 3.14f;
//	PRINT(a, "%d\n");
//	PRINT(f, "%lf\n");
//	return 0;
//}


//##可以把位于塔两边的符号和成为一个符号

//#define CAT(class, NUM) class##NUM
//int main()
//{
//	int class106 = 100;
//	printf("%d\n", CAT(class, 106));
//	printf("%d\n", class106);
//
//	return 0;
//}



//带有副作用的宏参数

//#define MAX(a,b) ((a)>(b)?(a):(b))
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int m = MAX(a++, b++);
//	printf("%d %d", a, b);
//	printf("%d\n", m);
//	return 0;
//}

//宏和函数的对比

//1.宏可以用来进行简单的计算
// 而函数的计算更为死板，正常难以比较不同类型的参数
//#define MAX(a,b) ((a) > (b)?(a):(b))//(2,3,14)
//eg,
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 2;
//	int b = 2.4;
//	MAX(a, b);
//	return 0;
//}

//2.宏是参数的替换，省去函数调用和返回的过程，实际执行小型计算工作更快

//3.宏的缺点：如果宏定义的代码过长，每次替换都会使代码量增加，可能大幅增加程序的长度

//4.宏的缺点：宏是没法调试的（代码在预处理中就已经被宏替换了，而我们看到的代码是为替换的代码，导致无法调试

//5.宏要考虑计算优先级，所以要多加括号

//宏的参数与类型无关


//命名约定
//全大写一般是宏，函数名不要全部大写


//#undef M 取消定义M
//#define M 100
//int main()
//{
//	printf("%d\n", M);
////#undef M
//	printf("%d\n", M);
//
//	return 0;
//}


//命令行定义（在VS实现不了）
//对于代码中未定义的参数，可以在编译器路径命令行处进行定义（Linux gcc）

//条件编译
//1.判断是否满足条件
//  #if
//    ......
//  #else if
//    ......
//  #endif 
//int main()
//{
//#if 1
//	printf("hehe\n");
//#endif 
//
//#if 0
//	printf("hehe\n");
//#endif 
//	return 0;
//}

//2.
//#if defined(symbol) 或者是//#idef symbol
//#endif


//#define MAX 100
//int main()
//{
////若被定义则执行printf
//#if defined(MAX)
////若无定义则不执行printf
////#if !defined(MAX)
//	printf("%d\n", MAX);
//#endif
//	return 0;
//}
//
//#define MAX 100
//int main()
//{
////若被定义则执行printf
//#ifdef MAX
////若无定义则不执行printf
////#ifndef MAX
//	printf("%d\n", MAX);
//#endif
//	return 0;
//}


//也可以嵌套命令行定义


//文件包含
//如何避免头文件多次包含？

//方案1
//#ifndef __TEST_H__
//#define __TEST_H__
//int Add(int x, int y);
//#endif

//方案2
//#pragma once
//int Add(int x, int y);





























