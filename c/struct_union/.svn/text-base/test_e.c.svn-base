#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAMEMAX		1024

typedef struct stu_st
{
	int id;
	char *name;
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

	new->name = NULL;
	
	return new;
}
#else

void init(STU **q)
{
	*q = malloc(sizeof(STU));
	if(*q == NULL)
		return ;
	
	(*q)->name = NULL;
	return ;
}

#endif

int insert(STU *ptr)
{
	int ret;
	char tmpnam[NAMEMAX];

	printf("Please enter : ");
	ret = scanf("%d%s%d%d",&ptr->id,tmpnam,&ptr->math,&ptr->chinese);
	if(ret != 4)
		return -1;
	
	ptr->name = malloc(strlen(tmpnam)+1);
	if(ptr->name == NULL)
		return -2;	

	strcpy(ptr->name,tmpnam);

	return 0;
}

void display(STU *ptr)
{
	printf("ID = %d\n",ptr->id);
	printf("NAME = %s\n",ptr->name);
	printf("MATH = %d\n",ptr->math);
	printf("CHINESE = %d\n",ptr->chinese);
}

int changename(STU *ptr,const char *newname)
{// Alan  adfadsf

	free(ptr->name);
	ptr->name = malloc(strlen(newname)+1);
	if(ptr->name == NULL)
		return -1;
	strcpy(ptr->name,newname);
	return 0;
}

void destroy(STU *p)
{
	free(p->name);
	free(p);
}

int main()
{
	STU *p = NULL;
	char newname[NAMEMAX];

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


