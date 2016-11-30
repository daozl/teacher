#include <stdio.h>
#include <stdlib.h>


int main()
{
	int sum = 0;
	int i;

	printf("Begin!\n");


	for(i = 1,sum = 0; i <= 100 ;i++)
	{
		sum += i;
	}
		
	printf("i = %d\n",i);
	printf("sum = %d\n",sum);

	printf("End!\n");

	exit(0);
}


