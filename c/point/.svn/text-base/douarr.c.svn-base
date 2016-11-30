#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[2][3] = {1,2,3,4,5,6};
	int i,j;
	int (*p)[3];
//	int[3]  *p;
//	p+1 -> int[3] -> 12byte;

	p = a;
//	printf("a = %p  p = %p\n",a,p);
//	printf("a+1 = %p  p+1 = %p\n",a+1,p+1);

// a[i][j] -> *(*(a+i)+j)

	for(i = 0 ; i < 2; i++)
	{
		for(j = 0 ; j < 3; j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}
	 

	a++;


/*	
	int *p;
//	p+1 -> 1int -> 4byte
//	a+1 -> int[3] -> 12byte

	p = &a[0][0]; // p = *(a+0);  p = *a;  p = a[0]
	
	for(i = 0 ; i < 2*3; i++)
		printf("%d ",*p++);


	printf("\n");
*/
	exit(0);
}


