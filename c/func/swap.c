#include <stdio.h>
#include <stdlib.h>
#if 0
void swap(int *p,int *q)
{
	int tmp;
	
	tmp = *p;
	*p = *q;
	*q = tmp;

	return ;
}

#else
void swap(int **p,int **q)
{
	int **tmp;

	**tmp = **p;
	**p = **q;
	**q = **tmp;
    return ;
}

#endif

int main()
{
	int a = 3,b = 5;
	int *p = &a,*q = &b;

	printf("a = %d b = %d\n",a,b);
	swap(&p,&q);	
	printf("a = %d b = %d\n",a,b);

	exit(0);
}


