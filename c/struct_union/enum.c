#include <stdio.h>
#include <stdlib.h>
/*
#define STATE_R		1
#define STATE_W		2
#define STATE_Ex	3
#define STATE_T		4
*/

enum
{
	STATE_R=1,
	STATE_W,
	STATE_Ex=10,
	STATE_T
};

int main()
{
	int state;

	if(state == STATE_R)
		;
	if(state == STATE_W)
		;
	if(state == STATE_Ex)
		;
	if(state == STATE_T)
		;

	printf("%d %d %d %d\n",STATE_R,STATE_W,STATE_Ex,STATE_T);

	exit(0);
}


