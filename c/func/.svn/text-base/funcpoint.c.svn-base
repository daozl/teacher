#include <stdio.h>
#include <stdlib.h>
/*
char str1[] = "hello";
char str2[] = "No";

void *func(int flag)
{

	if(flag)
		return str1;
	else
		return str2;
}
*/

int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int main()
{
//	int flag = 1;
//	puts(func(flag));


	int ret,i;
	int a = 3,b = 5;
	int (*p[2])(int,int) = {add,sub};
	
	// p[0] = add;
	// p[1] = sub;


//	ret = add(a,b);
	
	for(i = 0 ; i < 2; i++)
	{
		ret = p[i](a,b);
		printf("%d\n",ret);
	}


	exit(0);
}


