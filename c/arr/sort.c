#include <stdio.h>
#include <stdlib.h>

#define N	10

void func1(void)
{
	int a[N] = {0,56,89,3,65,43,39,13,29,28};
	int i,j,t;
	
	for(i = 0 ; i <= 8; i++) //控制排序趟数
	{
		
		for(j = 1; j < N-i-1;j++)
		{
			if(a[j] > a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;	
			}
		}
	}

	for(i = 0 ; i < N; i++) 
		printf("%d ",a[i]);
	printf("\n");

	return ;
}

void func2(void)
{
	int a[N] = {0,56,89,3,65,43,39,13,29,28};
    int i,j,t,k;

    for(i = 0 ; i <= 8; i++) //控制排序趟数
	{
		k = i;
		for(j = i+1; j < N ; j++)
		{
			if(a[j] < a[k])
				k = j;
		}
		if(i != k)
		{
			t = a[i];
			a[i] = a[k]; 
			a[k] = t;
		}
	}

	for(i = 0 ; i < N; i++)
        printf("%d ",a[i]);
    printf("\n");

}


int main()
{

//	func1();
	func2();

	exit(0);
}

