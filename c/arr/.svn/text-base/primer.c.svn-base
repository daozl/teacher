#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a[1001] = {0}; 	// a[2] ~ a[1000] 
	int i,j;

	for(i = 2; i < 1001; i++)
	{
		if(a[i] == 0)
		{
			for(j = i+i ;j < 1001 ; j+=i)
				a[j] = 1;
		}
	}

	for(i = 2; i < 1001; i++)
	{	
		if(a[i] == 0)
			printf("%d ",i);
	}

	printf("\n");

	exit(0);
}

