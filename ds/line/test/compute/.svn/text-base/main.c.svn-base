#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int get_pri(int op)
{
	switch(op)
	{
		case '(':
			return 0;
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
	}

}

void compute(sqstack *snum,int op)
{
	int n,n1,n2;
	
	stack_pop(snum,&n2);
	stack_pop(snum,&n1);
	
	switch(op)
	{
		case '+':	
			n = n1 + n2;
			break;
		case '-':	
			n = n1 - n2;
			break;
		case '*':	
			n = n1 * n2;
			break;
		case '/':	
			n = n1 / n2;
			break;
		default:
			abort();
	}

	stack_push(snum,n);
}

void deal_bracket(sqstack *snum,sqstack *sop)
{
	int old_op;

	stack_top(sop,&old_op);
	
	while(old_op != '(')
	{
		stack_pop(sop,&old_op);
		compute(snum,old_op);
		stack_top(sop,&old_op);
	}
	
	stack_pop(sop,&old_op);

	return ;
}

void deal_op(sqstack *snum,sqstack *sop,int op)
{
	int old_op;

	if(!stack_isempty(sop) || op == '(')
	{
		stack_push(sop,op);
		return ;
	}

	stack_top(sop,&old_op);	
	
	if(get_pri(op) > get_pri(old_op))
	{
		stack_push(sop,op);	
		return ;
	}

	// op < old_op
	
	while(get_pri(op) <= get_pri(old_op))
	{
		stack_pop(sop,&old_op);
		compute(snum,old_op);
		if(!stack_isempty(sop))
			break;	
		stack_top(sop,&old_op);
	}

	stack_push(sop,op);

}

int main()
{
	char str[] = "12+(1+3)*2-8";
	int i;
	sqstack *snum,*sop;
	int value = 0;
	int flag = 0;	
	int old_op;

	snum = stack_create();
	/*if error*/
	sop = stack_create();
	/*if error*/

	for(i = 0 ; str[i] != '\0'; i++)
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			value = str[i] - '0' + value * 10;
			flag = 1;
		}
		else 	//str[i] is a op;
		{
			if(flag)
			{
				stack_push(snum,value);
				flag = 0;
				value = 0;
			}
			
			if(str[i] == ')')
			{
				deal_bracket(snum,sop);
			}
			else // ( + - * /
			{
				deal_op(snum,sop,str[i]);
			}

		}
	}

	if(flag)
	{
		stack_push(snum,value);
	}


	while(stack_isempty(sop))
	{
		stack_pop(sop,&old_op);
		compute(snum,old_op);
	}

	stack_pop(snum,&value);	

	printf("%s = %d\n",str,value);

	stack_destroy(snum);
	stack_destroy(sop);


	exit(0);
}


