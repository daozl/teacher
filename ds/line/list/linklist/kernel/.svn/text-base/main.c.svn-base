#include <stdio.h>
#include <stdlib.h>

#include "list.h"

#define NAMESIZE    32

struct score_st
{
    int id;
    char name[NAMESIZE];
    struct list_head node;
    int math;
};

static void print_s(void *data)
{
    struct score_st *d = data;
    printf("%d %s %d\n",d->id,d->name,d->math);
}


int main()
{// type name = value;

	struct score_st *datap;
	struct list_head *cur;
	int i;

	LIST_HEAD(head);
//	struct list_head head = { &head, &head };

/*
	struct list_head head;
	INIT_LIST_HEAD(&head);
*/

	for(i = 0 ; i < 7 ; i++)
	{
		datap = malloc(sizeof(*datap));
		/*if error*/		

		datap->id = i;
		sprintf(datap->name,"stu%d",i);
		datap->math = 100-i;

		//list_add(&datap->node,&head);
		list_add_tail(&datap->node,&head);
	}


	__list_for_each(cur,&head)
	{
		datap = list_entry(cur,struct score_st,node);
		print_s(datap);
	}

	printf("\n\n");

	__list_for_each(cur,&head)
	{
		datap = list_entry(cur,struct score_st,node);
		if(datap->id == 15)
			break;
	}	
	if(cur == &head)
		printf("Can not find.\n");
	else
		print_s(datap);


	exit(0);
}


