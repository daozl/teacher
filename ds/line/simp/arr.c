#include <stdio.h>
#include <stdlib.h>

#include "arr.h"

SQ *sq_create(void)
{
	SQ *l;
	
	l = malloc(sizeof(*l));
	if(l == NULL)
		return NULL;
	
	l->last = -1;

	return l;
}

void sq_create1(SQ **l)
{
	*l = malloc(sizeof(**l));
    if(*l == NULL)
        return ;

	(*l)->last = -1;
	return ;
}

int sq_setemtpy(SQ *l)
{
	l->last = -1;
}

int sq_isempty(SQ *l)	//empty->0  非空为1
{
	if(l->last == -1)
		return 0;
	return 1;
}

int sq_insert(SQ *l,int pos,const int data)
{
	int j;							

	if(l->last == SIZE-1)	
		return -1;		
	
	if(pos < 0 || pos > l->last+1)	
		return -2;

	j = l->last;

	while(pos <= j)
	{
		l->data[j+1] = l->data[j];
		j--;
	}
	
	l->data[pos] = data;
	l->last ++;
	return 0;
}

int sq_delete(SQ *l,int pos)
{
	int j;

	if(!sq_isempty(l))
		return -1;

	if(pos < 0 || pos > l->last)
		return -2;

	j = pos + 1;	
		
	while(j <= l->last)
	{
		l->data[j-1] = l->data[j];
		j++;
	}

	l->last --;
	return 0;
}

int sq_find(SQ *l,const int data)
{
	int i;

	if(!sq_isempty(l))
        return -2;

	for(i = 0 ; i <= l->last; i++)
	{
		if(l->data[i] == data)
			return i;
	}	
	
	return -1;
}

void sq_display(SQ *l)
{
	int i;

	for(i = 0 ; i <= l->last; i++)
		printf("%d ",l->data[i]); 

	printf("\n");
}

void sq_destroy(SQ *l)
{
	free(l);
}



