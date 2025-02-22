#include"数据结构1.h"



int main()
{
	//生成两个单链表（头插法）

	List L1 = Create_List(&L1);
	printf("%p\n", &L1);
	if (L1)
	{
		printf("已生成一个链表，头插法\n");
	}
	else
	{
		printf("error:L1\n");
	}

	List L2 = Create_List(&L2);
	printf("%p\n", &L2);
	if (L2)
	{
		printf("已生成一个链表，头插法\n");
	}
	else
	{
		printf("error:L2\n");
	}

	//打印链表
	printf("链表L1是：");
	show_list(L1);
	printf("链表L2是：");
	show_list(L2);
	//合并链表
	//List head = combine_list(&L1, &L2);

	//用不用指针都无所谓
	List head = combine_list(L1, L2);

	printf("1\n");
	show_list(head);
	printf("2\n");

	show_list(L1);

	free_list(head);
	return 0;
}