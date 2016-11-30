#include <stdio.h>
#include <stdlib.h>

#define NAMESIZE	32

struct score_st
{
	int id;
	char name[NAMESIZE];
	int math;
	int chinese;
};

struct node_st
{
	struct score_st data;
	struct node_st *next;
};
#if 0
struct node_st *insert(struct node_st *list,struct score_st *datap)
{
	struct node_st *q;

	q = malloc(sizeof(*q));
	if(q == NULL)
		return NULL;

	q->data = *datap;
	q->next = list;
	list = q;

	return list;
}

#else
int insert(struct node_st **list,struct score_st *datap)
{
	struct node_st *q;

    q = malloc(sizeof(*q));
    if(q == NULL)
        return -1;
	
	q->data = *datap;
	
	q->next = *list;
	*list = q;
	
	return 0;
}
#endif

void print_s(struct score_st *p)
{
	printf("%d %s %d %d\n",p->id,p->name,p->math,p->chinese);
}

void display(struct node_st *list)
{
	struct node_st *p = list;

	while(p)
	{
		print_s(&p->data);
		p = p->next;
	}
	printf("\n");
}

void delete(struct node_st **list)
{
	struct node_st *p;

	p = *list;

	*list = (*list)->next;
	
	free(p);
	p = NULL;

}

struct score_st *find_id(struct node_st *list,int id)
{
	struct node_st *p = list;

	for(; p != NULL; p = p->next)
	{
		if(p->data.id == id)
			return &p->data;
	}
	
	return NULL;
}

struct score_st *find_name(struct node_st *list,char *name)
{
	struct node_st *p = list;

    for(; p != NULL; p = p->next)
    {
        if(strcmp(p->data.name,name) == 0)
            return &p->data;
    }
	return NULL;
}

int main()
{
	struct node_st *list = NULL;	
	struct score_st tmp;
	int i;
	
	for(i = 0 ; i < 7 ; i++)
	{
		tmp.id = i;
		sprintf(tmp.name,"stu%d",i);
		tmp.math = 100-i;
		tmp.chinese = 100-i;
	//	list = insert(list,&tmp);
		insert(&list,&tmp);
	}

	display(list);

	

//	delete(&list);
//	display(list);

	struct score_st *ret;

//	ret = find_id(list,14);
	ret = find_name(list,"stu11");
	if(ret)
	{
		print_s(ret);
	}
	else
	{
		printf("Can not find.\n");
	}


	exit(0);
}


