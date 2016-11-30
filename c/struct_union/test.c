#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAMESIZE	32

typedef struct stu_st
{
	int id;
	char name[NAMESIZE];		// char *name;
	int math;
	int chinese;
}STU;
#if 0
void *init(void)
{
	STU *new;

	new = mallo(sizeof(*new));
	if(new == NULL)
		return NULL;

	return new;
}
#else

void init(STU **q)
{
	*q = malloc(sizeof(STU));
	if(*q == NULL)
		return ;
}

#endif

int insert(STU *ptr)
{
	int ret;

	printf("Please enter : ");
	ret = scanf("%d%s%d%d",&ptr->id,ptr->name,&ptr->math,&ptr->chinese);
	if(ret != 4)
		return -1;
	return 0;
}

void display(STU *ptr)
{
	printf("ID = %d\n",ptr->id);
	printf("NAME = %s\n",ptr->name);
	printf("MATH = %d\n",ptr->math);
	printf("CHINESE = %d\n",ptr->chinese);
}

void changename(STU *ptr,const char *newname)
{
	strcpy(ptr->name,newname);
}

void destroy(STU *p)
{
	free(p);
}

int main()
{
	STU *p = NULL;
	char newname[NAMESIZE];

//	p = init();
	init(&p);
	if(p == NULL)
	{
		printf("init failed.\n");
		exit(1);
	}

	insert(p);
	/*if error*/

	display(p);

	printf("Please enter the new name : ");
	scanf("%s",newname);

	changename(p,newname);

	display(p);

	destroy(p);

	exit(0);
}


