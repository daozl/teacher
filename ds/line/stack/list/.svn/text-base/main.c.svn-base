#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

#define NAMESIZE	32

struct score_st
{
	int id;
	char name[NAMESIZE];
	int math;
};

static void print_s(void *data)
{
	struct score_st *d = data;
	printf("%d %s %d\n",d->id,d->name,d->math);
}

int main()
{	
	STACK *st;	
	int i,ret;
	struct score_st tmp;

	st = stack_create(sizeof(struct score_st));
	if(st == NULL)	
	{
		exit(1);
	}

	for(i = 0 ; i < 7; i++)
	{
		tmp.id = i;
		sprintf(tmp.name,"stu%d",i);
		tmp.math = 100 - i;
		stack_push(st,&tmp);
	}
	
	while(1)
	{
		ret = stack_pop(st,&tmp);
		if(ret != 0)
			break;
		print_s(&tmp);
	}

	stack_destroy(st);

	exit(0);
}


