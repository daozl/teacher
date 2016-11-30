#include <stdio.h>
#include <stdlib.h>

struct node_st
{
	int coef;
	int exp;
	struct node_st *next;
};

struct node_st *poly_create(int (*a)[2],int n,int m)
{
//	-1  5,0  2,1  8,8  3,16

	struct node_st *ptr,*p,*q;
	int i;

	ptr = malloc(sizeof(*ptr));
	if(ptr == NULL)
		return NULL;

	ptr->next = NULL;
	
	p = ptr;	
	
	for(i = 0 ; i < n; i++)
	{
		q = malloc(sizeof(*q));
		if(q == NULL)
			return NULL;
		q->coef = a[i][0];
		q->exp = a[i][1];
		q->next = NULL;
	
		p->next = q;
		p = q;
	}	

	return ptr;
}

void poly_display(struct node_st *ptr)
{
	struct node_st *p = ptr->next;

	while(p)
	{
		printf("[%d %d] ",p->coef,p->exp);
		p = p->next;
	}
	printf("\n");
}

void poly_add(struct node_st *p1,struct node_st *p2)
{
	struct node_st *p = p1->next;
	struct node_st *q = p2->next;
	struct node_st *t = p1;

	while(p && q)
	{
		if(p->exp < q->exp)
		{
			t->next = p;
			t = p;
			p = p->next;
		}
		else if(p->exp > q->exp)
		{
			t->next = q;
			t = q;
			q = q->next;
		}
		else // p->exp == q->exp;
		{
			p->coef += q->coef;
			if(p->coef)
			{
				t->next = p;
				t = p;
			}
			p = p->next;
			q = q->next;
		}

	}	

	if(p == NULL)
		t->next = q;
	else
		t->next = p;
}

int main()
{// p1 = 5 + 2x + 8x8 + 3x16
//	p2 = 6x + 23x6 - 8x8

	struct node_st *p1,*p2;	
	int a[][2] = {{5,0},{2,1},{8,8},{3,16}};
	int b[][2] = {{6,1},{23,6},{-8,8}};

	p1 = poly_create(a,4,2);
	p2 = poly_create(b,3,2);

	poly_display(p1);
	poly_display(p2);

	poly_add(p1,p2);

	poly_display(p1);

	exit(0);
}


