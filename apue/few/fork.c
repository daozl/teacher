#include <stdio.h>
#include <stdlib.h>

int main()
{
	pid_t pid;

	printf("[%d]:Begin\n",getpid());
	
	fflush(NULL);

	pid = fork();
	if(pid < 0)
	{
		perror("fork()");
		exit(1);
	}	
	if(pid == 0)	// child
	{
		printf("[%d]:Child is working\n",getpid());
	}
	else			// pid > 0 parent
	{
		printf("[%d]:Parent is working\n",getpid());
	}

	printf("[%d]:End\n",getpid());

	sleep(1000);

	exit(0);
}


