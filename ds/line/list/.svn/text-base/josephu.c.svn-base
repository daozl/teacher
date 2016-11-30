#include <stdio.h>
#include <stdlib.h>

struct node_st
{
	int data;
	struct node_st *next;
};

struct node_st *jose_create(int m)
{
	struct node_st *l,*p,*q;
	int i = 1;

	l = malloc(sizeof(*l));
	if(l == NULL)
		return NULL;
	l->data = i;
	l->next = l;

	i++;
	p = l;

	while(i <= m)
	{
		q = malloc(sizeof(*q));
		/*if error*/
		q->data = i;
		q->next = l;
		p->next = q;
		p = q;
		i++;
	}

	return l;
}

void jose_display(struct node_st *l)
{
	struct node_st *p = l;

	while(p->next != l)
	{
		printf("%d ",p->data);
		p = p->next;
	}	
	
	printf("%d\n",p->data);

}

void jose_kill(struct node_st **l,int n)
{//	1 2 3 4 5 6 7 8
	struct node_st *p = *l,*q;
	
	int i = 1;

	while(p != p->next)
	{
		while(i < n)
		{
			q = p;
			p = p->next;
			i++;
		}

		q->next = p->next;
		printf("%d ",p->data);
		free(p);
		p = NULL;

		p = q->next;
		i = 1;
	}

	printf("\n");

	*l = p;

}

int main()
{
	struct node_st *l = NULL;
	int m = 8;
	int n = 3;

	l = jose_create(m);

	jose_display(l);

	jose_kill(&l,n);

	jose_display(l);	

	exit(0);
}


