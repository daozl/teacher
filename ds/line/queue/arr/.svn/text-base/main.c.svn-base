#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

int main()
{
	sequeue *qu;
	int i;
	int arr[] = {12,78,45,32};

	qu = queue_create();
	if(qu == NULL)
		exit(1);

	for(i = 0 ; i < sizeof(arr)/sizeof(*arr); i++)
		queue_enqueue(qu,arr[i]);

	queue_display(qu);

	queue_dequeue(qu,&i);
	printf("De:%d\n",i);
	queue_display(qu);

	queue_destroy(qu);

	exit(0);
}


