#include <stdio.h>
#include <stdlib.h>
/*
 *	type name = value;
 *
 *	int i = 1;
 *	float f = 3.12;
 *	int a[5] = {5,6,7,5,6};
 *
 *	->  int[5]  a;
 *		float[10] arr;
 *
 * */



int main()
{
	int i;
	int arr[] = {5,6,7,5,6};

	printf("arr = %p\n",arr);
	printf("arr+1 = %p\n",arr+1);

//F
//	arr[100] = 10;	-> *(arr + 100) = 10;
//	printf("arr[100] = %d\n",arr[100]);
					
								
//	for(i = 0 ; i < sizeof(arr)/sizeof(arr[0]); i++)
	for(i = 0 ; i < sizeof(arr)/sizeof(*arr); i++)
		printf("%p->%d\n",arr+i,*(arr+i));
		//printf("%p->%d\n",&arr[i],arr[i]);
	
// *(arr+i) -> a[i]  
// &arr[i] -> arr+i;

	printf("\n");

	exit(0);
}


