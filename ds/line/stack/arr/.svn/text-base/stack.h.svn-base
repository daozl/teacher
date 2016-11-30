#ifndef STATCK_H__
#define STATCK_H__

#define SIZE	5

typedef struct
{
	int data[SIZE];
	int top;	
}sqstack;

sqstack *stack_create(void);

int stack_isempty(sqstack *);

int stack_isfull(sqstack *);

int stack_push(sqstack *,int x);

int stack_pop(sqstack *,int *x);

int stack_top(sqstack *,int *x);

void stack_display(sqstack *);

void stack_destroy(sqstack *);

#endif


