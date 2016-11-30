#include <stdio.h>
#include <stdlib.h>

#include "llist.h"

#define NAMESIZE	32

struct score_st
{
	int id;
	char name[NAMESIZE];
	int math;
//	.....
};

static void print_s(void *data)
{
	struct score_st *d = data;
	printf("%d %s %d\n",d->id,d->name,d->math);
}

static int id_cmp(const void *key,const void *data)
{
	const struct score_st *d = data;
	const int *k = key;
	
	return (*k - d->id);
}

static int name_cmp(const void *key,const void *data)
{
	const struct score_st *d = data;
	const char *k = key;

	return strcmp(k,d->name);
}

int main()
{
	LLIST *handler;
	struct score_st tmp;
	int i;
	
	handler = llist_create(sizeof(struct score_st));	
	if(handler == NULL)
	{
		printf("llist_create() failed.\n");
		exit(1);
	}

	for(i = 0 ; i < 7; i++)
	{
		tmp.id = i;
		sprintf(tmp.name,"stu%d",i);
		tmp.math = 100 - i;
		handler->insert(handler,&tmp,LLIST_BACKWARD);
	}
	
	handler->travel(handler,print_s);
	printf("\n");

	int id = 1;
	int ret;

	ret = handler->fetch(handler,&id,id_cmp,&tmp);	
	if(ret == 0)
		print_s(&tmp);
	printf("\n");

	handler->travel(handler,print_s);
    printf("\n");



/*
	ret = llist_delete(handler,&id,id_cmp);
	if(ret != 0)
		printf("llist_delete() failed.\n");
	llist_travel(handler,print_s);
    printf("\n\n");
*/



/*
	int id = 40;
	struct score_st *datap;
	
	datap = llist_find(handler,&id,id_cmp);
	if(datap != NULL)	
		print_s(datap);
	else
		printf("Can not find.\n");
*/
/*
	char *n = "stu21";
	struct score_st *datap;
	
	datap = llist_find(handler,n,name_cmp);
	if(datap != NULL)   
        print_s(datap);
    else
        printf("Can not find.\n");
*/

	llist_destroy(handler);

	exit(0);
}


