#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

sqstack *stack_create(void)
{
	sqstack *me;

	me = malloc(sizeof(*me));
	if(me == NULL)
		return NULL;
	me->top = -1;

	return me;
}

int stack_isempty(sqstack *ptr)
{
	if(ptr->top == -1)
		return 0;
	return 1;
}

int stack_isfull(sqstack *ptr)
{
	if(ptr->top == SIZE-1)
		return 0;
	return 1;
}

int stack_push(sqstack *ptr,int x)
{
	if(!stack_isfull(ptr))
		return -1;

	ptr->top ++;
	ptr->data[ptr->top] = x;

	return 0;
}

int stack_pop(sqstack *ptr,int *x)
{
	if(!stack_isempty(ptr))
		return -1;
	
	*x = ptr->data[ptr->top];
	ptr->top --;
	return 0;
}

int stack_top(sqstack *ptr,int *x)
{
	if(!stack_isempty(ptr))
        return -1;

    *x = ptr->data[ptr->top];
    return 0;
}

void stack_display(sqstack *ptr)
{
	int i;

	for(i = 0 ; i <= ptr->top; i++)
		printf("%d ",ptr->data[i]);

	printf("\n");
}

void stack_destroy(sqstack *ptr)
{
	free(ptr);
}


