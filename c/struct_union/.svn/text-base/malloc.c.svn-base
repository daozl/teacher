#include <stdio.h>
#include <stdlib.h>

/*	struct student_st arr[10];
 *
 *	typedef struct student_st
 *	{
 *		int id;
 *		char name[32];
 *		int math;
 *	}A;
 *
 * 	A *p = calloc(sizeof(A),10);
 *	A *p = malloc(sizeof(A)*10);
 *
 *	p = realloc(p,sizeof(A)*20);
 *
 * 	A *q = NULL;
 *	q = realloc(q,sizeof(A)*20); -> q = malloc(sizeof(A)*20)
 *
 *
 * */

int main()
{
	int *p = NULL;
	
	p = malloc(sizeof(int));
	if(p == NULL)
	{
		printf("malloc error\n");
		return -1;
	}

	*p = 100;
	printf("%p -> %d\n",p,*p);

	free(p);
	p = NULL;
	
	*p = 1;
	printf("%p -> %d\n",p,*p);

	return 0;
}


