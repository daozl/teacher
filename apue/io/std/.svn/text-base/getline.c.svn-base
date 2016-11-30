#include <stdio.h>
#include <stdlib.h>
#include <string.h>

ssize_t mygetline(char **lineptr, size_t *n, FILE *stream)
{

}

int main(int argc,char *argv[])
{
	FILE *fp;
	char *line = NULL;
	size_t line_size = 0;

	if(argc < 2)
	{
		fprintf(stderr,"Usage....\n");
		exit(1);
	}

	fp = fopen(argv[1],"r");
	if(fp = NULL)
	{
		perror("fopen()");
		exit(1);
	}

	while(1)
	{
		if(mygetline(&line,&line_size,fp) < 0)
			break;
		printf("line_size = %d\n",line_size);
		printf("%d\n",strlen(line));
	}
	
	fclose(fp);
	free(line);

	exit(0);
}

