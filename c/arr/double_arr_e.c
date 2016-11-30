#include <stdio.h>
#include <stdlib.h>
/*
 * 	TYPE NAME;
 *
 * 	int a[3]; -> int[3]  a;
 * 	a+1 -> int
 *
 *	int a[2][3]; ->  int[3]    a[2];   ->  int[2][3]   a;
 * */

// a[i][j] -> *(*(a+i)+j)
// &a[i][j] -> *(a+i)+j

int main()
{
	int arr[2][3] = {0,1,2,3,4,5};
	int i,j;
	
	printf("arr = %p\n",arr);
	printf("arr+1 = %p\n",arr+1);

	for(i = 0 ; i < 2; i++)
	{
		for(j = 0 ; j < 3; j++)
		{
			//printf("%p -> %d\n",&arr[i][j],arr[i][j]);
			printf("%p -> %d\n",*(arr+i)+j,*(*(arr+i)+j));
		}
		printf("\n");
	}


	exit(0);
}


