#include <stdio.h>
#include <stdlib.h>

#include "list.h"

struct node_st *list_create()
{
	struct node_st *new;

	new = malloc(sizeof(*new));
	if(new == NULL)
		return NULL;

	new->next = NULL;
	return new;
}

int list_is_epmty(struct node_st *ptr)
{
	if(ptr->next == NULL)
		return 0;
	return 1;
}

int list_order_insert(struct node_st *ptr,int x)
{//head 23,34,45   data = 300
	struct node_st *p = ptr,*q;


	//while(p->next != NULL && p->next->data < x)
	while(p->next && p->next->data < x)
		p = p->next; 	

	q = malloc(sizeof(*q));
	if(q == NULL)
		return -1;

	q->data = x;
	q->next = p->next;
	p->next = q;
	
	return 0;
}

int list_delete_value(struct node_st *ptr,int x)
{// -1  11 22 33 44
	struct node_st *p = ptr,*q;
	
	if(!list_is_epmty(ptr))
		return -1;
	
	while(p->next && p->next->data != x)
		p = p->next;	

	if(p->next == NULL)
		return -2;
	else
	{
		q = p->next;
		p->next = q->next;
		free(q);
		q = NULL;
		return 0;
	}
}

int list_insert_at(struct node_st *ptr,int pos, int x)
{// -1 0 1 2 
	struct node_st *p = ptr,*q;
	int j = 0;

	while(j < pos && p != NULL)
	{
		p = p->next;
		j++;
	}

	if(p != NULL)
	{
		q = malloc(sizeof(*q));
		if(q == NULL)
			return -1;
		q->data = x;
		q->next = NULL;

		q->next = p->next;
		p->next = q;

		return 0;
	}
	else
		return -1;
}

int list_delete_at(struct node_st *ptr,int pos)
{
// -1 0 1 2 
// pos = 3
// j = 0;p->-1;
// 0<3 && 1  -> p->0,j=1;
// 1<3 && 1  -> p->1,j=2;
// 2<3 && 1  -> p->2,j=3;
// 3<3 && 

	int j = 0;
	struct node_st *p = ptr,*q;

	while(j < pos && p)
	{
		p = p->next;
		j++;
	}
	if(p->next)
	{
		q = p->next;
		p->next = q->next;
		free(q);
		q = NULL;

		return 0;
	}
	else
		return -1;
}

void list_display(struct node_st *ptr)
{
	struct node_st *p = ptr->next;
	
	while(p)		//while(p != NULL)
	{
		printf("%d ",p->data);
		p = p->next;
	}
	printf("\n");
}

void list_destroy(struct node_st *ptr)
{//	-1  12  23  34  45
	struct node_st *p = ptr,*q;

	while(p->next != NULL)
	{
		q = p->next;		
		p->next = q->next;
		free(q);
		q = NULL;
	}

	free(ptr);

}





