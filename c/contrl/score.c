#include <stdio.h>
#include <stdlib.h>

/*
 *	if(1)
 *		;
 *	else	// 2
 *		;
 *
 *
 *
 *
 *	if(1)
 *		;
 *	else if(2)
 *			;
 *		 else
 *		 	error;
 *
 *
 *
 *
 * */

int main()
{
	int s;

	scanf("%d",&s);

	if(s < 0 || s > 100)
	{
		printf("Error!");
		return -1;
	}
	
	if(s >= 90)
		putchar('A');
	else if(s >= 80)	// s >= 80 && s < 90
			putchar('B');
		 else if(s >= 70)
				putchar('C');	
			  else if(s >= 60)
					putchar('D');
					else
						putchar('E'); 






/*
	if(s <= 100 && s >= 90)
		putchar('A');
	if(s < 90 && s >= 80)
		putchar('B');
	if(s < 80 && s >= 70)
        putchar('C');
	if(s < 70 && s >= 60)
        putchar('D');
	if(s < 60 && s >= 0)
		putchar('E');
	else
		printf("Error!");

*/

	exit(0);
}


