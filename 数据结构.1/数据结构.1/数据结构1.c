#include"数据结构1.h"
List Create_List(List* L)//头插法创建链表
{
	*L = (List)malloc(sizeof(List_node));
	if (NULL == *L)
	{
		perror("L");
		return NULL;
	}
	else
	{
		(*L)->next = NULL;//初始化!!!很重要
		printf("头插法创建单链表\n");
		int i = 0;
		printf("请设置创建的链表长度\n");
		scanf("%d", &i);
		printf("输入结点数据\n");
		for (int j = 0; j < i; j++)
		{
			List_node* node = (List_node*)malloc(sizeof(List_node));
			if (NULL == node)
			{
				perror("node");
				return NULL;
			}
			else
			{
				scanf("%d %d", &node->items, &node->opers);
				node->next = (*L)->next;
				(*L)->next = node;
			}
		}
		return (*L);
	}
}

void free_list(List L)
{
	List_node* p = L;
	if (NULL == p)
	{
		perror("free_list");
	}
	else
	{
		while (p)
		{
			L = L->next;
			free(p);
			p = L;
		}
	}
}

void show_list(List L)
{
	List_node* p = L->next;
	while (p)
	{
		if ((p->items) > 0)
		{
			printf("+%dx^%d ", p->items, p->opers);
		}
		else
		{
			printf("%dx^%d", p->items, p->opers);
		}
		p = p->next;
	}
	printf("\n");
}

//List combine_list(List* L1, List* L2)
//{
//	List_node* p = (*L1)->next;
//	List_node* q = (*L2)->next;
//	List s = *L1;
//	   
//	while (p && q)//短的表先加入到新链表中
//	{
//		if (p->opers < q->opers)
//		{
//			s->next = p;
//			s = s->next;
//			p = p->next;
//
//		}
//		else if (p->opers > q->opers)
//		{
//			s->next = q;
//			s = s->next;
//			q = q->next;
//		}
//		else if (p->opers == q->opers)
//		{
//			if (p->items + q->items)//当结果不为0
//			{
//				p->items = p->items + q->items;
//				List_node* tmp3 = q;
//				p = p->next;
//				q = q->next;
//				free(tmp3);
//				s = s->next;
//			}
//			else//删除结点
//			{
//				List_node* tmp1 = p;
//				List_node* tmp2 = q;
//
//				p = p->next;
//				q = q->next;
//				free(tmp1);
//				free(tmp2);
//			}
//		}
//	}
//	s->next = q ? q : p;
//	free(*L2);
//	return *L1;
//}

List combine_list(List L1, List L2)
{
	List_node* p = L1->next;
	List_node* q = L2->next;
	List s = L1;

	while (p && q)//短的表先加入到新链表中
	{
		if (p->opers < q->opers)
		{
			s->next = p;
			s = s->next;
			p = p->next;

		}
		else if (p->opers > q->opers)
		{
			s->next = q;
			s = s->next;
			q = q->next;
		}
		else if (p->opers == q->opers)
		{
			if (p->items + q->items)//当结果不为0
			{
				p->items = p->items + q->items;
				List_node* tmp3 = q;
				p = p->next;
				q = q->next;
				free(tmp3);//注意free函数的使用，不然容易出现未初始化内存的情况
				s = s->next;
			}
			else//删除结点
			{
				List_node* tmp1 = p;
				List_node* tmp2 = q;

				p = p->next;
				q = q->next;
				free(tmp1);
				free(tmp2);
			}
		}
	}
	s->next = q ? q : p;
	free(L2);
	return L1;
}