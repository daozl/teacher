#include <stdio.h>
#include <stdlib.h>


int main()
{
	int sum = 0;
	int i;

	i = 1;

// if + goto 	

loop:
	sum += i;
	i++;
	if(i <= 100)
		goto loop;


/*	
	do
	{
		sum += i;
		i++;
	}while(i <= 100);
*/

/*
	i = 1;
	while(i <= 100)
	{	
		sum += i;
		i ++;
	}
*/


/*
	for(i = 1,sum = 0; i <= 100 ;i++)
	{
		sum += i;
	}
*/
		
	printf("i = %d\n",i);
	printf("sum = %d\n",sum);

	exit(0);
}


