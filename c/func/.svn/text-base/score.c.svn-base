#include <stdio.h>
#include <stdlib.h>

#define M		3
#define N		4

void aver(int *p,int n)
{
	float sum = 0;
	int i;
		
	for(i = 0 ; i < n ; i++)
		sum += p[i];

	printf("%f\n",sum/n); 
}

void find_st(int (*p)[N],int no)
{
	int j;
	for(j = 0 ; j < N; j++)
	{
		printf("%d ",p[no][j]);
	}
	printf("\n");
}	

int main()
{
	int a[M][N] = {{87,89,92,45},{67,93,85,96},{67,81,92,85}};
	int no;

	aver(*a,M*N);

	scanf("%d",&no);
	
	if(no >= 0 && no <  M)	
		find_st(a,no);

	exit(0);
}


