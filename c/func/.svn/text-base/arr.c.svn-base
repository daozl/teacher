#include <stdio.h>
#include <stdlib.h>

void print_arr(int p[],int n)
//void print_arr(int *p,int n)
{
	int i;

	printf("sizeof(p) = %d\n",sizeof(p));

	for(i = 0 ; i < n; i++)
		printf("%d ",*(p+i));
	printf("\n");
}

int main()
{
	int a[] = {3,4,5,6,7,8,9};
	
	printf("sizeof(a) = %d\n",sizeof(a));

	print_arr(a,sizeof(a)/sizeof(*a));

	exit(0);
}



