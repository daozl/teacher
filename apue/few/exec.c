#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*date +%s*/

int main()
{
	puts("Begin!");

	fflush(NULL);

	execl("/home/dao/teacher/apue/few/primer2","./primer2",NULL);	
	perror("execl()");
	exit(1);	

	puts("End!");

	exit(0);
}


