#include "day1_单链表.h"
ListHead Init_head()//创建头节点
{
	ListHead head = (ListHead)malloc(sizeof(ListNode));
	head->next = NULL;
	return head;
}

void Insert_head(ListHead head, int elem)//R1，一次插入一个数据
{
	ListNode* Newnode = (ListNode*)malloc(sizeof(ListNode));
	Newnode->next = head->next;
	head->next = Newnode;
	Newnode->data = elem;
}

void Insert_tail(ListHead head, int elem)//R1，一次插入一个数据
{
	ListNode* Newnode = (ListNode*)malloc(sizeof(ListNode));
	ListNode* r = head;
	while (r->next)
	{
		r = r->next;
	}
	Newnode->next = r->next;
	r->next = Newnode;
	Newnode->data = elem;
}

void Myinsert_head(ListHead head)//我的头插法，一次插入多个数据
{
	int length = 0;
	printf("请输入要创建链表的长度：");
	scanf("%d", &length);

	for (int i = 0; i < length; i++)
	{
		ListNode* Newnode = (ListNode*)malloc(sizeof(ListNode));
		int elem = 0;
		printf("请输入数据（倒序输入）：");
		scanf("%d", &elem);
      Insert_head(head, elem);
	}
}

void Myinsert_tail(ListHead head)//我的尾插法，一次插入多个数据
{
	int length = 0;
	printf("请输入要创建链表的长度：");
	scanf("%d", &length);
	ListNode* r = head;
	for (int i = 0; i < length; i++)
	{
		ListNode* Newnode = (ListNode*)malloc(sizeof(ListNode));
		int elem = 0;
		printf("请输入数据（正序输入）：");
		scanf("%d", &elem);
      Insert_tail( head,elem);
	}
}

int Insert_index(ListHead head, int index, int elem)//找到第index-1个结点并在其与第index个结点间插入一个新结点
{                                                   
	ListNode* r = head;
	if (index < 0 || index > List_length(head)+1)//List_length用于计算并返回表长
	{
		return 0;
	}
	for (int i = 0; i < index - 1; i++)//r移动到第index-1个结点
	{
		r = r->next;
	}
	ListNode* Newnode = (ListNode*)malloc(sizeof(ListNode));
	Newnode->next = r->next;
	r->next = Newnode;
	Newnode->data = elem;
	return 1;
}

int List_length(ListHead head)//头节点不算入链表长度
{
	ListNode* r = head;
	int count = 0;
	while (r->next)
	{
		r = r->next;
		count++;
	}
	return count;
}


//设计内存的释放，care!
int Delete_node(ListHead head, int index)//删除第index个节点的数据,1-n
{
	if (index < 1 || index >  List_length(head))
	{
		return 0;
	}
	
	ListNode* r = head;
	for (int i = 0; i < index - 1;i++)//r移动到第index-1个结点
	{
		r = r->next;
	}
	ListNode* temp = r->next;
	r->next = temp->next;//为何不允许r->next = r->next->next的操作？
	free(temp); 
	return 1;
}

ListNode* Search_node(ListHead head, int elem)
{
	ListNode* r = head;
	if (!r->next)//先判断表空
	{
		return NULL;
	}
	while (r)
	{
		if (r->data != elem)
		{
			r = r->next;
		}
		else
		{
			return r;
		}
	}
	return NULL;
}

void Printf_list(ListHead head)
{
	ListNode* r = head;
	printf("head->");
	
	while (r->next)
	{
		r = r->next;
		printf("%d->", r->data);
	}
	printf("NULL\n");
}

void Destory_list(ListHead head)
{
	ListNode* r = head;
	while (r)//while语句中是要r->next还是r取决于r能不能到NULL;
	{
		ListNode* temp = r;
		r = r->next;
		free(temp);
	}
}
