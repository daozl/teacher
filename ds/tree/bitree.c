#include <stdio.h>
#include <stdlib.h>

#include <queue.h>

#define NAMESIZE	32

struct score_st
{
	int id;
	char name[NAMESIZE];
	int math;
};

struct node_st
{
	struct score_st data;
	struct node_st *l,*r;
};


static struct node_st *tree = NULL;


static void print_s(void *data)
{
    struct score_st *d = data;
    printf("%d %s %d\n",d->id,d->name,d->math);
}

int insert(struct node_st **root,struct score_st *data)
{// 1 2 3     data->id = 7;
	struct node_st *node;

	if(*root == NULL)
	{
		node = malloc(sizeof(*node));
		if(node == NULL)
			return -1;
		node->data = *data;
		node->l = node->r = NULL;
		*root = node;
		return 0;
	}
	
	if(data->id <= (*root)->data.id)
		return insert(&(*root)->l,data);
	else
		return insert(&(*root)->r,data);
}

void draw_(struct node_st *root,int level)
{
	int i;
	if(root == NULL)
		return;

	draw_(root->r,level+1);

	for(i = 0 ; i < level; i++)
	{
		printf("    ");
	}
	print_s(&root->data);

	draw_(root->l,level+1);	
}

void draw(struct node_st *root)
{
	draw_(root,0);
//	printf("\n");

//	getchar();
}

struct score_st *find(struct node_st *root,int id)
{
	if(root == NULL)
		return NULL;
	if(root->data.id == id)
		return &root->data;	
	if(id < root->data.id)
		return find(root->l,id);
	else
		return find(root->r,id);	
}

int get_num(struct node_st *root)
{
	if(root == NULL)
		return 0;	

	return get_num(root->l) + 1 + get_num(root->r);
}

struct node_st *find_min(struct node_st *root)
{
	if(root->l == NULL)
		return root;
	return find_min(root->l);
}

struct node_st *find_max(struct node_st *root)
{
    if(root->r == NULL)
        return root;
    return find_max(root->r);
}

void turn_left(struct node_st **root)
{
	struct node_st *cur = *root;	

	*root = cur->r;
	cur->r = NULL;
	find_min(*root)->l = cur;
	
//	draw(tree);

}

void turn_right(struct node_st **root)
{
	struct node_st *cur = *root;
	*root = cur->l;
	cur->l = NULL;
	find_max(*root)->r = cur;

//	draw(tree);

}

void balance(struct node_st **root)
{
	int sub;
	
	if(*root == NULL)
		return ;

	while(1)
	{
		sub = get_num((*root)->l) - get_num((*root)->r);
		if(sub >=-1 && sub <= 1)
			break;

		if(sub < -1)
			turn_left(root);
		else 	// sub > 1
			turn_right(root);

	}

	balance(&(*root)->l);
	balance(&(*root)->r);

}

#if 0
void travel(struct node_st *root)
{
	if(root == NULL)
		return ;
	travel(root->l);
	travel(root->r);
	print_s(&root->data);
}

#else

void travel(struct node_st *root)
{
	QUEUE *qu;
	struct node_st *cur;
	int ret;
	
	qu = queue_create(sizeof(struct node_st *));
	if(qu == NULL)
		return ;

	queue_en(qu,&root);
	/*if error*/

	while(1)
	{
		ret = queue_de(qu,&cur);	
		if(ret != 0)
			break;
		print_s(&cur->data);
		if(cur->l != NULL)
			queue_en(qu,&cur->l);
		if(cur->r != NULL)
			queue_en(qu,&cur->r);
	}
	
	queue_destroy(qu);
}

#endif

int main()
{
	int arr[] = {1,2,3,7,6,5,9,8,4};
	struct score_st tmp,*datap;
	int i;
	
	for(i = 0 ; i < sizeof(arr)/sizeof(*arr); i++)
	{	
		tmp.id = arr[i];
		tmp.math = 100-arr[i];
		sprintf(tmp.name,"stu%d",arr[i]);

		insert(&tree,&tmp);
	}

	draw(tree);
	printf("\n");

	
	balance(&tree);


	draw(tree);


	travel(tree);




/*
	int id = 14;
	datap = find(tree,id);
	if(datap != NULL)
		print_s(datap);		
*/

	exit(0);
}





