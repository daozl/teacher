#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int arr[] = {5,6,7,5,6};	// 初始化

	printf("sizeof(arr) = %d\n",sizeof(arr));
	printf("arr = %p\n",arr);

//	for(i = 0 ; i < 5; i++)
//		scanf("%d",&arr[i]);

	for(i = 0 ; i < sizeof(arr)/sizeof(arr[0]); i++)
		printf("%p->%d\n",&arr[i],arr[i]);
	

	printf("\n");

	exit(0);
}


