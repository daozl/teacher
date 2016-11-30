#include <stdio.h>
#include <stdlib.h>

union
{
	struct
	{
		unsigned short a;
		unsigned short b;
	}x;
	unsigned int y;
}num;

int main()
{
//	unsigned int i = 0x11223344;
//	printf("%x\n",(i >> 16) + i & 0xFFFF);

	num.y = 0x11223344;

	printf("%x\n",num.x.a + num.x.b);
	
	exit(0);
}


