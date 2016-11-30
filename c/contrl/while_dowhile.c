#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,sum = 0;

	scanf("%d",&i);

	do
    {
        sum += i;
        i ++;
    }while(i <= 10);


/*
	while(i <= 10)
	{
		sum += i;
		i ++;
	}

*/
	printf("i = %d\nsum = %d\n",i,sum);

	exit(0);
}


