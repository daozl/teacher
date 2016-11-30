#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

sequeue *queue_create()
{
	sequeue *me;

	me = malloc(sizeof(*me));
	if(me == NULL)
		return NULL;

	me->front = me->tail = 0;
	return me;
}

int queue_isempty(sequeue *ptr)
{
	if(ptr->front == ptr->tail)
		return 1;
	return 0;
}

int queue_isfull(sequeue *ptr)
{
	if((ptr->tail + 1)%SIZE == ptr->front)
		return 1;
	return 0;
}

int queue_enqueue(sequeue *ptr,int x)
{
	if(queue_isfull(ptr))
		return -1;

	ptr->tail = (ptr->tail+1)%SIZE;
	ptr->data[ptr->tail] = x;	

	return 0;
}

int queue_dequeue(sequeue *ptr,int *x)
{
	if(queue_isempty(ptr))
		return -1;
	
	ptr->front = (ptr->front+1)%SIZE;
	*x = ptr->data[ptr->front];
	return 0;
}

void queue_display(sequeue *ptr)
{
	int i;

	if(queue_isempty(ptr))
		return ;

	i = (ptr->front+1)%SIZE;	

	while(i != ptr->tail)
	{
		printf("%d ",ptr->data[i]);
		i = (i+1)%SIZE;
	}

	printf("%d\n",ptr->data[i]);
	return ;
}

void queue_destroy(sequeue *ptr)
{
	free(ptr);
}

