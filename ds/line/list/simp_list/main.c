#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main()
{
	int a[] = {34,21,7,13,5};
	int i;
	struct node_st *ptr;
	
	ptr = list_create();
	
	for(i = 0 ; i < sizeof(a)/sizeof(*a); i++)
		list_order_insert(ptr,a[i]);
	
	list_display(ptr);

//	list_insert_at(ptr,7,100);	

	int ret;

	ret = list_delete_at(ptr,5);
	printf("ret = %d\n",ret);
	list_display(ptr);




//	list_delete_value(ptr,34);
//	list_display(ptr);

	
//	list_order_insert(ptr,3);
//	list_display(ptr);


	list_destroy(ptr);

	exit(0);
}

