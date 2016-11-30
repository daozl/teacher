#include <stdio.h>
#include <stdlib.h>


static void func(void)
{
	static int x = 0;
	x++;
	printf("[%p]%d\n",&x,x);
	
}

int main()
{

//	auto int i;
//	resigter int i;

//	printf("[%p]i = %d\n",&i,i);

	func();
	func();
	func();

	exit(0);
}


