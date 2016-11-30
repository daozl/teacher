#include <stdio.h>
#include <stdlib.h>


int main()
{
	FILE *fp;
	int ch;

//	fp = fopen("tmp","w");
	fp = fopen("tmp","r");
	if(fp == NULL)
		exit(1);

/*
	fputc('a',fp);
	fputc('b',fp);
	fputc(')',fp);
*/

	while((ch = fgetc(fp)) != EOF)	
		printf("%c\n",ch);

	fclose(fp);

	exit(0);
}

