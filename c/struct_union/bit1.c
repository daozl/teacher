#include <stdio.h>
#include <stdlib.h>

union 
{
	struct 
	{
		char a:1;
		char b:2;
		char c:1;
	} s;
	char d;
}u;

int main()
{
	u.d = 6;
	printf("%d\n", u.s.b);

//	printf("%d\n",sizeof(u));

	exit(0);
}





