#include <stdio.h>
#include <stdlib.h>

#define M	2
#define N	3

void func1(void)
{
	
	int a[M][N] = {1,2,3,4,5,6},b[N][M];
	int i,j;
	
	for(i = 0 ; i < M; i++)
	{	
		for(j = 0 ; j < N; j++)
		{		
			printf("%d ",a[i][j]);
			b[j][i] = a[i][j];
		}
		printf("\n");
	}

	for(i = 0 ; i < N; i++)
    {
        for(j = 0 ; j < M; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }



}

void func2(void)
{
	int a[2][3] = {67,89,34,13,89,5};
	int line,colum,i,j,max;	

	max = a[0][0];	

	for(i = 0 ; i < 2; i++)
	{
		for(j = 0 ; j < 3; j++)	
		{
			if(a[i][j] >= max)
			{
				max = a[i][j];
				line = i;
				colum = j;
			}
		}
	}
	printf("a[%d][%d] = %d\n",line,colum,max);

}

void func3(void)
{
	int a[5][4] = {{2,5,1},{3,6,2},{4,5,6},{4,7,9}};
	int i,j;


    for(i = 0 ; i < 5-1; i++)		// 0 - 3
    {
        for(j = 0 ; j < 4-1; j++)	// 0-2
        {
			a[4][3] += a[i][j];
			a[4][j] += a[i][j];
			a[i][3] += a[i][j];
		}
	}	

	
	for(i = 0 ; i < 5; i++)
	{
		for(j = 0 ; j < 4; j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	func3();

	exit(0);
}





