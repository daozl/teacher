#include <stdio.h>
#include <stdlib.h>

#define INIT	100
#define SIMP	0.10
#define COMP	0.05

void func1(void)
{
	double d1 = INIT,d2 = INIT;		
	int year = 0;	

	while(d2 <= d1)
	{	
		d1 += INIT * SIMP;
		d2 += d2 * COMP;
		year++;
	}

	printf("year = %d\n",year);
	printf("d1 = %lf\n",d1);
	printf("d2 = %lf\n",d2);
}

void func2(void)
{
	int count_odd = 0,count_even = 0;
	float sum_odd = 0,sum_even = 0;
	int n;
	
	while(scanf("%d",&n) == 1 && n != 0)
	{
		if(n%2 == 1)
		{
			count_odd ++;
			sum_odd += n;
		}
		else
		{
			count_even ++;
			sum_even += n;
		}	
	}

	printf("ODD:%d\tAVE:%f\n",count_odd,sum_odd/count_odd);
	printf("EVEN:%d\tAVE:%f\n",count_even,sum_even/count_even);

}

void func4(void )
{// 1   1   2      3     5   8   13   21....
 // f1  f2 f1+f2  
 //        f1    f1+f2	
 //        		   f2    f1+f2	
	long int f1 = 1,f2 = 1;
	int i;

	for(i = 1 ; i <= 20; i++)
	{	
		printf("%12ld %12ld ",f1,f2);
		if(i % 2 == 0)
			printf("\n");

		f1 += f2;
		f2 += f1;	
		
	}
	printf("\n");
}

void func5(void)
{
	int i,j;
	
	for(i = 1; i < 10; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("%4d",i*j);
//			printf((j == i) ? "%4d\n" : "%4d",i*j);
		}	
		printf("\n");
	}
}

void func6(void)
{
	int x,y,z;
	
	for(x = 0 ; x < 20 ; x++)
	{
		for(y = 0 ; y < 33; y++)
		{
			z = 100 - x - y;
			if(z % 3 == 0 && x * 5 + y * 3 + z / 3 == 100)	
				printf("%d %d %d\n",x,y,z);
		}
	}
}

void func7(void)
{//	456
	int i;
	int x,y,z;

	for(i = 100; i < 1000; i++)
	{
		x = i / 100;	
		y = i % 100 / 10;
		z = i % 10;
		if(x*x*x + y*y*y + z*z*z == i)
			printf("%d ",i);
	}
	printf("\n");

}

#define LINE	6

void func9(void)
{
	int i,j;
	char ch;
	
	for(i = 0 ; i < LINE; i++)
	{
		for(j = 0;  j < i ; j++ )
			printf("_");

		for(ch = 'F',j = 0; j <= i ;j++,ch--)
		{
			printf("%c",ch);
		}

		printf("\n");
	}
}

#define LEFT	30000000
#define RIGHT	30000200

void func_primer(void)
{
	int i,j,mark;

	for(i = LEFT; i <= RIGHT ;i++)
	{	
		mark = 1;	
		for(j = 2 ; j <= i/2; j++)
		{
			if(i % j == 0)
			{
				mark = 0;
				break;
			}	
		}	
		if(mark)
			printf("%d is a primer.\n",i);
	}
}

#define MIN		0
#define MAX		100

void func_score(void)
{
	int min = MAX,max = MIN;
	int score;
	
	printf("Please enter(q for quit):");

	while(scanf("%d",&score) == 1)
	{
		if(score < MIN || score > MAX)
			continue;
		
		min = score < min ? score : min;
		max = score > max ? score : max;	
	}
	printf("min = %d\nmax = %d\n",min,max);
}

int main()
{
		
	func_score();


	exit(0);
}


