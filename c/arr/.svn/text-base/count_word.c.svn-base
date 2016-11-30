#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//"    abci     aaaam   bcaba  teacher"

#define BUFSIZE		1024

int main()
{
	char buf[BUFSIZE];
	int count = 0;
	int flag = 0;
	int i;
	
	gets(buf);
	//"  i    am   a   teacher   "
	//"  abci     aaaam   bcaba  teacher"

	for(i = 0 ; i < strlen(buf) ; i++)
	{
		if(buf[i] == ' ')
		{
			flag = 0;
		}
		else	// buf[i] is a char
		{
			if(flag == 0)
			{
				flag = 1;
				count ++;	
			}
		}
	}

	printf("count = %d\n",count);

	exit(0);
}


