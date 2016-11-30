#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

/*
 *	缓冲区：大多数情况下，缓冲区的存在是件好事，作用是合并系统调用。
 *
 *	行缓冲：满了的时候刷新，换行的时候刷新，强制刷新。（stdout是这种缓冲模式，因为涉及到了终端设备）
 *
 *	全缓冲：满了的时候刷新，强制刷新。（默认使用全缓冲，只要不是终端设备）
 *
 *	无缓冲：stderr,需要立即输出 
 *
 * */

int main()
{

	int i;

	for(i = 0 ; i < 5; i++)
	{
		putchar('x');
		fflush(NULL);
		sleep(1);
	}

	
	putchar('\n');


/*

	int i;
	i = 1;

	printf("before while()");
	fflush(NULL);
	
	while(1);
	{

	}

	printf("after while()");
	fflush(NULL);

	printf("ok!\n");
*/
	exit(0);
}

