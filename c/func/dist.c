#include <stdio.h>
#include <stdlib.h>

int max(int a,int b,int c)
{
	int ret;
	ret = a > b ? a : b;
	return ret > c ? ret : c;
}

int min(int a,int b,int c)
{
	int ret;
	ret = a < b ? a : b;
	return ret < c ? ret : c;
}

int dist(int a,int b,int c)
{

	return (max(a,b,c) - min(a,b,c));
}

int main()
{
	int a,b,c;	
	int ret;

	scanf("%d%d%d",&a,&b,&c);	

	ret = dist(a,b,c);

	printf("ret = %d\n",ret);

	exit(0);
}

