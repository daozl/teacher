#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strcpy,strlen,strcat,strcmp
// strncpy,strncat,strncmp

#define STRSIZE		10
#define STRSIZE1	20


int main()
{
	char dest[128] = {'\0'};
	char str[STRSIZE] = "daaa";
	char del[] = " ";		
	char str1[STRSIZE1] = "abcd";

	
	//printf("%d\n",strcmp(str,str1));
	printf("%d\n",strncmp(str,str1,4));


		
//	printf("%d\n",strlen(str));
//	printf("%d\n",sizeof(str));

/*
	strcat(dest,str);
	strcat(dest,del);
	strcat(dest,str1);

	strncat(dest,str,128);
    strncat(dest,del,128);
    strncat(dest,str1,128);

	
	puts(dest);
*/
//	strcpy(str,str1);
//	strncpy(str,str1,STRSIZE);

//	puts(str);

	exit(0);
}

