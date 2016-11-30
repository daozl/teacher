#ifndef ARR_H__
#define ARR_H__

#define SIZE	128

typedef struct 
{
	int data[SIZE];
	int last;
}SQ;

SQ *sq_create(void);
void sq_create1(SQ **);

int sq_setemtpy(SQ *);

int sq_isempty(SQ *);

int sq_insert(SQ *,int pos,const int data);

int sq_delete(SQ *,int pos);

int sq_find(SQ *,const int data);

void sq_display(SQ *);

void sq_destroy(SQ *);

//	sq_order_insert(SQ *,const int data);
//	20 23 43  45 67 89
//	sq_delete_data(SQ *,const int data);

#endif

