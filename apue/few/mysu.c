#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
	pid_t pid;

	if(argc < 3)
	{
		fprintf(stderr,"Usage...\n");
		exit(1);
	}
	
	pid = fork();
	if(pid < 0)
	{
		perror("fork()");
		exit(1);
	}
	if(pid == 0)
	{
		if(setuid(atoi(argv[1])) < 0)
		{
			perror("setuid()");
			exit(1);
		}

		execvp(argv[2],argv+2);
		perror("execvp()");
		exit(1);
	}

	wait(NULL);

	exit(0);
}


