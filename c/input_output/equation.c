#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a,b,c,tmp,p,q;
	float x1,x2;

	printf("Please enter:");
	scanf("%f%f%f",&a,&b,&c);

	tmp = b*b - 4*a*c;
	if(tmp < 0)
		return -1;
	
	p = -b/(2*a);
	q = sqrt(tmp)/(2*a);

	x1 = p + q;
	x2 = p - q;
	
	printf("x1 = %f\nx2 = %f\n",x1,x2);

	exit(0);
}


