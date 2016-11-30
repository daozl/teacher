#include <stdio.h>
#include <stdlib.h>

struct node_st
{
    int i;
    char ch[9];
    float f;
}a;

/*
struct node_st  a;
struct node_st arr[5];
struct node_st *p = &a;
struct node_st *q = arr;

struct node_st a, struct node_st *, struct node_st *, struct node_st
 a ,     &a,       arr+3,     arr[2] ,    

struct node_st  , char *, float *, struct node_st *,struct node_st
*p   ,     p->ch   ,   &p->f,   q   ,     *q

*/



int main()
{
	
	printf("%d\n",sizeof(a));

	exit(0);
}



/*
 *
struct node_st
{
	int i;
	char ch;
	float f;
};

int main()
{
	struct node_st a = {.ch = 'x',.f = 3.14};
	struct node_st *p = &a;
	struct node_st arr[3] = {{3,'a',4.3},{6,'x',8.9},{12,'e',1.3}};
	int i;
	
	p = arr;


//	printf("%d %c %f\n",a.i,a.ch,a.f);

	for(i = 0 ; i < sizeof(arr)/sizeof(*arr); i++,p++)
		printf("%d %c %f\n",p->i,p->ch,p->f);

	exit(0);
}

*/






/*

struct bithday_st
{	
	int year;
    int month;
    int day;
};

struct	student_st 
{
	int id;
	char name[32];
	struct bithday_st bith;
	int math;
	int chinese;
};


int main()
{// type name = value
	
	struct  student_st  s = {10011,"Alan",{2016,7,26},98,89};

	printf("%d %s\n%d-%d-%d\n%d %d\n",s.id,s.name,s.bith.year,s.bith.month,s.bith.day,s.math,s.chinese);

	exit(0);
}

*/
