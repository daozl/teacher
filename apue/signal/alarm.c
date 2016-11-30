#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void alrm_handler(int s)
{
	write(1,"!",1);
}

int main()
{
/*
	alarm(1);
	alarm(15);
	alarm(10);
	alarm(3);
*/
	signal(SIGALRM,alrm_handler);

	alarm(2);

	while(1);
	exit(0);
}


