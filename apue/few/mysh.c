#include <stdio.h>
#include <stdlib.h>
#include <glob.h>
#include <unistd.h>
#include <string.h>

#define DELIMS	" \n\t"

struct cmd_st
{
	glob_t globres;
	
};

void prompt(void)
{
	printf("[mysh-0.1]$ ");
}

int parse(char *line,struct cmd_st *res)
{
// "cmd"   opt        arg   opt opt opt-arg arg 
//	ls -l /etc  -i  /etc/a*.conf
//
	char *tok;
	glob_t globres;
	int i = 0;

	while(1)
	{
		tok = strsep(&line,DELIMS);
		if(tok == NULL)
			break;
		if(tok[0] == '\0')
			continue;

		glob(tok,GLOB_NOCHECK|GLOB_APPEND*i,NULL,&res->globres);
		/*if error*/
		i = 1;
	}

	return 0;
	
}


int main()
{	
	char *linebuf = NULL;
	size_t linesize = 0;
	struct cmd_st cmd;
	pid_t pid;

	while(1)
	{
		prompt();
	
		if(getline(&linebuf,&linesize,stdin) < 0)
			break;

		parse(linebuf,&cmd);

		if(0/*内部命令*/)
		{		}
		else	// 外部命令
		{

			pid = fork();
			if(pid < 0)
				exit(2);
			if(pid == 0)
			{
				execvp(cmd.globres.gl_pathv[0],cmd.globres.gl_pathv);
				perror("execvp()");
				exit(1);
			}
			wait(NULL);	
		}	
	}
	
	exit(0);
}


