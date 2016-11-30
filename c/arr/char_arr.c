#include <stdio.h>
#include <stdlib.h>

int main()
{
//	char str[] = {'h','e','l','l','o'};
	char s[2][10] = {{'h','e','l','l','o'},{'h','e','l','l'}};
	int i;
	char str[] = "hello";

	printf("%d\n",sizeof(str));

	printf("%s\n",str);

	exit(0);
}


