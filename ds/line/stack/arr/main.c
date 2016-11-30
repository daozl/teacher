#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int main()
{
	sqstack *st;
	int arr[] = {56,78,45,23};
	int i,tmp;

	st = stack_create();
	if(st == NULL)
		exit(1);

	for(i = 0 ; i < sizeof(arr)/sizeof(*arr); i++)
		stack_push(st,arr[i]);

	stack_display(st);

	while(!stack_pop(st,&tmp))
		printf("%d\n",tmp);


	stack_destroy(st);
	
	exit(0);
}

