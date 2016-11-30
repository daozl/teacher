#include <stdio.h>

char *mystrcpy(char *dest, const char *src)
{
	char *ret = dest;
		
	while(*src != '\0')
		*dest++ = *src++;		
	return ret;
}

int main()
{
	char src[32] = {'\0'};
	char str1[] = "worldabc";

	mystrcpy(src,str1);

	puts(src);

	return 0;
}



