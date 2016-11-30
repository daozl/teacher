#include <stdio.h>
#include <stdlib.h>

#include "stack.h"
#include "queue.h"

int check(sequeue *qu)
{// 1 2 3 4 5 6 7
	int i;
	i = (qu->front+1)%MAXSIZE;
	
	while(i != qu->tail)
	{
		if(qu->data[i] > qu->data[(i+1)%MAXSIZE])
			return 0;
		i = (i+1)%MAXSIZE;
	}
	return 1;
}

int main()
{
	sequeue *qu;
	int i,ball,tmp;
	int time = 0;
	sqstack *st_min,*st_fivemin,*st_hour;
		
	st_min = stack_create();
	st_fivemin = stack_create();
	st_hour = stack_create();

	qu = queue_create();
	
	for(i = 0 ; i < 27; i++)
	{
		queue_enqueue(qu,i+1);	
	}
	
	queue_display(qu);

	
	while(1)
	{
		queue_dequeue(qu,&ball);
		time++;

		if(st_min->top != 3)
		{
			stack_push(st_min,ball);
		} 
		else
		{
			while(stack_isempty(st_min))
			{
				stack_pop(st_min,&tmp);
				queue_enqueue(qu,tmp);
			}

			if(st_fivemin->top != 10)
			{
				stack_push(st_fivemin,ball);
			}	
			else
			{
				while(stack_isempty(st_fivemin))
				{
					stack_pop(st_fivemin,&tmp);
					queue_enqueue(qu,tmp);
				}
				
				if(st_hour->top != 10)
					stack_push(st_hour,ball);
				else
				{
					while(stack_isempty(st_hour))
					{
						stack_pop(st_hour,&tmp);
						queue_enqueue(qu,tmp);
					}

					queue_enqueue(qu,ball);
				
					if(check(qu))
						break;
				}
			}
		}	

	}	

	printf("time = %d\n",time);

	queue_display(qu);

	stack_destroy(st_min);
	stack_destroy(st_fivemin);
	stack_destroy(st_hour);

	queue_destroy(qu);

	exit(0);
}


