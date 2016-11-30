#include <stdio.h>
#include <stdlib.h>

#define WEIGHT	3.0e-23
#define WEIPK	950

int main()
{
	float num;	
	float total;
	
	printf("Please input:");	
	scanf("%f",&num);

	total = num * WEIPK / WEIGHT;
	printf("total is %e\n",total);

	exit(0);
}


