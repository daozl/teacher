#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i;
    int arr[] = {5,6,7,5,6};    // 初始化
	int *p;

//	p+1 -> 1int -> 4byte
//	arr+1 -> 1int -> 4byte

// arr[i] ->  *(arr+i)
//
	p = arr;	// p = &arr[0];		

// 	p++ -> p = p+1;
    for(i = 0 ; i < sizeof(arr)/sizeof(arr[0]); i++)
        printf("%d\n",p[i]);


	exit(0);
}


