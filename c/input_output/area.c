#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a,b,c,s,area;

	printf("Please enter:");
	scanf("%f%f%f",&a,&b,&c);

	if(a+b <= c || a+c <= b || b+c <= a)
	{
		printf("Invalid argument\n");
		return -1;
	}

	s = 1.0/2*(a+b+c);	
	area = sqrt(s * (s-a) * (s-b) * (s-c));
	
	printf("area = %f\n",area);	

	exit(0);
}


