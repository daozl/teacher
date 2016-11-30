#include <stdio.h>
#include <stdlib.h>

/*
自增，自减：先看见变量则先用变量的值，后自增／减
            先看见运算符，则先做自增／减，后用变量的值
++i,i++ -> i = i+1;
--i,i-- -> i = i-1;
*/

uint32_t func(uint32_t a,uint32_t b)
{
// 抽象一个函数，比较两个数，找出最大的一个，不许用关系和判断
// 置1:value = value | 1 << bitnum
// 清0:value = value & ~(1 << bitnum)
// 判断某位的真假:if(value & 1 << bitnum)

	int64_t dis;
	uint32_t t;

	dis = a - b;
		
	t = (dis >> 63) & 1;
	// t 0/1
	
	return a * !t + b * t;

}

int main()
{

	int m ;

	m = a > b ? a : b;

	if(a > b)
		m = a;
	else
		m = b;




/*
	int a = 6;

	a += a-= a*= a/= 6;	
*/


//	int i = 4; ->   100

/*
	//短路特性
	int a = 1,b = 2,c = 3,d = 4;
	int m = 10,n = 10;

	(n = a > b) && (m = c > d);
	

	printf("m = %d\nn = %d\n",m,n);

*/


/*
	int a = 3,b = 5;
	int i = 1;
	int j;

//	j = i++ + ++i - --i + i--;

	j = ++i; 		// i = i+1; j = i;

	printf("i = %d\nj = %d\n",i,j);

*/

	exit(0);
}




