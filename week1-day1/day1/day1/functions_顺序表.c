#include "test_顺序表.h"
//我的初始化
void Init_list(Sqlist* list)//这里的data与动态通讯录的结构体时同个概念
{
	list->data = (int*)malloc(sizeof(Sqlist));
	list->capacity = Init_size;
	list->length = 0;
}

Sqlist* Init_list_r1()
{
	Sqlist* list = (Sqlist*)malloc(sizeof(Sqlist));//malloc怎么分配内存的？,这段代码意义是什么？
	list->data = (int*)malloc(Init_size * sizeof(int));//分配10个整数的内存空间
	//R1中并没有判断分配成功，疑惑？
	//答：蓝桥杯可以减少编写时间，但是学习阶段不建议省略
	/*if (!list && !list->data)
	{
		return NULL;
	}*/
	list->capacity = Init_size;
	list->length = 0;
	return list;
}

Sqlist* check_capacity(Sqlist* list)//扩容
{
	if (list->length >= list->capacity)//“>=更加严谨”
	{
		//list = (Sqlist*)realloc(list, sizeof(Sqlist));为何不需要？
		list->data = (int*)realloc(list->data, growth_factor * list->capacity * sizeof(int));//指数倍扩增
		if (!list || !list->data)
		{
			perror("check_capacity");
			return NULL;
		}
		list->capacity = list->capacity * growth_factor;
		return list;
	}
	else return NULL;
}

void stuff_list(Sqlist* list)
{
	int i = 0;
	printf("输入填充元素数量(<%d)\n",Init_size);
	scanf("%d", &i); 
	int elem = 0;
	for (int j = 0; j < i; j++)
	{
		
		printf("输入填充数据元素:");
		scanf("%d", &elem);
		List_insert(list, j, elem);
		printf("\n");
	}
}


//按照下标插入，而非按照第几个数据元素来插入
int  List_insert(Sqlist* list, int index, int elem)//插入元素到下标为index的元素，使顺序表当前长度+1
{
	//判断位置合法性
	if (index < 0 && index >= list->length)
	{
		return 0;
	}
	check_capacity(list);//扩容
	for (int i = list->length ; i > index; i--)
	{
		list->data[i] = list->data[i - 1];
	}
	list->length++;//顺序表当前长度+1
	list->data[index] = elem;
	return 1;
}

int List_delete(Sqlist* list,int index)//删除下标为index的元素
{
	if (index < 0 || index >= list->length)
	{
		return 0;
	}
	for (int i = index; i < list->length - 1; i++)
	{
		list->data[i] = list->data[i + 1];
	}
	list->length--;//顺序表当前长度-1
	list->data[list->length] = 0;
	return 1;
}

int Find_list_name(Sqlist* list, int elem)
{
	for (int i = 0; i < list->length; i++)
	{
		if (list->data[i] == elem)
		{
			return i;
		}
	}
	return -1;
}

void Printf_list(Sqlist* list)
{
	printf("[");
	for (int i = 0; i < list->length; i++)
	{
		printf("%d", list->data[i]);
		if (i < list->length - 1)
		{
			printf(",");
		}
	}
	printf("]\n");
}

void destory_list(Sqlist* list)
{
	
	free(list->data);
	free(list);
}