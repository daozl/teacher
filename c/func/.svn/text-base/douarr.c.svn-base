#include <stdio.h>
#include <stdlib.h>

#if 1 
//void printf_arr(int (*p)[3],int n,int m)
void printf_arr(int p[][3],int n,int m)
{
	int i,j;
	
	printf("sizeof(p) = %d\n",sizeof(p));

	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < m ; j++)
			printf("%d ",*(*(p+i)+j));
		printf("\n");
	}

}
#else

void printf_arr(int *p,int n)
{
	int i;
	for(i = 0 ; i < n ; i++)
		printf("%d ",p[i]);
	printf("\n");
}

#endif

int main()
{
	int a[2][3] = {3,4,5,6,7,8};

	printf("sizeof(a) = %d\n",sizeof(a));

	printf_arr(a,2,3);
//	printf_arr(*a,2*3);
	
	exit(0);
}



