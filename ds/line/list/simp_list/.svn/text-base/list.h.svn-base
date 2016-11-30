#ifndef LIST_H__
#define LIST_H__

struct node_st
{
	int data;
	struct node_st *next;
};

struct node_st *list_create();

int list_is_epmty(struct node_st *);

int list_order_insert(struct node_st *,int x);
int list_delete_value(struct node_st *,int x);

int list_insert_at(struct node_st *,int pos, int x);
int list_delete_at(struct node_st *,int pos);

void list_display(struct node_st *);

void list_destroy(struct node_st *);

#endif


