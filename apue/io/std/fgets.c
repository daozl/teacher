#include <stdio.h>
#include <stdlib.h>


int main(int argc,char *argv[])
{
	char str[5];

//	gets(str);
	fgets(str,5,stdin);
//	puts(str);
	fputs(str,stdout);	

	exit(0);
}

