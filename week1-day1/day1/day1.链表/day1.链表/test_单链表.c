#include "day1_单链表.h"
int main()
{
	ListHead head1 = Init_head();
	int elem = 0;

	//头插法-R1
	Insert_head(head1, 4);
	Insert_head(head1, 3);
	Insert_head(head1, 2);
	Insert_head(head1, 1);

	printf("%d\n",List_length(head1));//链表长度——4
	Insert_index(head1, 2, 3);//在第二个节点前插入数据3
	Printf_list(head1);//打印节点

	Delete_node(head1, 2);//删除第二个节点数据-1，2，3，4
	Printf_list(head1);//打印节点

	if (Search_node(head1, 5))//查找结点
	{
		printf("链表存在数据为5的结点\n");
	}
	else
	{
		printf("不存在数据为5的结点\n");
	}
	
	Printf_list(head1);//打印节点

	

	//我的头插法
	ListHead head2 = Init_head();
	Myinsert_head(head2);

	Printf_list(head2);//打印节点

	

	//我的尾插法
	ListHead head3 = Init_head();
	Myinsert_tail(head3);

	Printf_list(head3);//打印节点


	Destory_list(head1);//销毁链表
	Destory_list(head2);//销毁链表
	Destory_list(head3);//销毁链表

	return 0;
}