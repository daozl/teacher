#include <stdio.h>
#include <stdlib.h>

void order_arr(int *a,int n)
{
	int t,i,j;
 	
	i = 0;
    j = n - 1;

    while(i < j)
    {
        t = a[i]; 
        a[i] = a[j];
        a[j] = t;
        i++;
        j--;
    }
}

int main()
{
	int a[10] = {1,1},i,j,t;

	for(i = 2; i < sizeof(a)/sizeof(a[0]); i++)
		a[i] = a[i-1] + a[i-2];

	for(i = 0; i < sizeof(a)/sizeof(a[0]); i++)
		printf("%d ",a[i]);
	printf("\n");


	order_arr(a,sizeof(a)/sizeof(*a));


	for(i = 0; i < sizeof(a)/sizeof(a[0]); i++)
        printf("%d ",a[i]);
    printf("\n");

	exit(0);
}


