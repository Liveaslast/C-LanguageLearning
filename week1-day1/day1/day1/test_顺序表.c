#include "test_顺序表.h"
int main()
{
	//我的初始化
	//Sqlist list;
	//Init_list(&list);
	int index = 0;
	int elem = 0;
	
	//R1的初始化
	Sqlist* list = Init_list_r1();

	printf("填充表\n");
	stuff_list(list);
	printf("显示顺序表\n");
	Printf_list(list);

	printf("插入元素：下标 数据\n");
	scanf("%d %d", &index, &elem);
	List_insert( list,  index,  elem);

	printf("显示顺序表\n");
	Printf_list(list);

	printf("删除元素：下标\n");
	scanf("%d", &index);
	List_delete(list, index);

	printf("显示顺序表\n");
	Printf_list(list);

	printf("查找元素: 数据\n");
	scanf("%d", &elem);
	int ret = Find_list_name(list, elem);
	printf("下标为%d", ret);

	printf("清空顺序表\n");
	destory_list(list);

	return 0;
}