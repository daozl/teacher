#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,base;
	int a[64],i;
	
	printf("Please enter for num:");	
	scanf("%d",&num);
	printf("Please enter for base:");
    scanf("%d",&base);

	i = 0;
	
	do
	{
		a[i] = num%base;
		i++;
		num = num/base;
	}while(num != 0);

	i = i-1;

	for( ;i >= 0 ; i--)
	{	
		if(a[i] > 10)
			printf("%c ",a[i]-10+'A');
		else
			printf("%d ",a[i]);
	}
	printf("\n");
	exit(0);
}



