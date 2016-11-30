#include <stdio.h>
#include <stdlib.h>


static int *func(void)
{
	int i = 1;
	return &i;	
}

int main()
{

	int *p;
	p = func();

	exit(0);
}


