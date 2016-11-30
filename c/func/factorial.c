#include <stdio.h>
#include <stdlib.h>

// n! = n * (n-1)! 
// 0! = 1   1!= 1

int fac(int n)
{
	if(n < 0)
		return -1;

	if(n == 0 || n == 1)
		return 1;

	return n * fac(n-1);
}

int main()
{
	int n = 3;	
	
	printf("%d\n",fac(n));

	exit(0);
}

