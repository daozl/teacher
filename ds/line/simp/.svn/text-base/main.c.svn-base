#include <stdio.h>
#include <stdlib.h>

#include "arr.h"


int main()
{
	SQ *l;
	int ret,i;
	int a[] = {12,56,87,34,76,35};

	l = sq_create();
	if(l == NULL)
	{
		printf("sq_create() failed.\n");
		exit(1);
	}

	for(i = 0 ; i < sizeof(a)/sizeof(*a); i++)
		sq_insert(l,0,a[i]);

	

/*
	ret = sq_insert(l,10,200);
	if(ret != 0)
	{
		printf("sq_insert():error! %d\n",ret);
		exit(1);
	}		
*/
	sq_display(l);

#if 0
	sq_insert(l,3,100);
	/*if error*/
	
	sq_display(l);

	sq_delete(l,0);
	/*if error*/
	sq_display(l);

#endif


	ret = sq_find(l,2);
	if(ret < 0)
	{
		printf("ERROR OR NOT FIND.\n");
	}
	else
		printf("sq_find:%d\n",ret);





	sq_destroy(l);

	exit(0);
}


