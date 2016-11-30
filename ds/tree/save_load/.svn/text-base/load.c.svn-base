#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct node_st
{
	char data;
	struct node_st *l,*r;
};


static struct node_st *tree = NULL;


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
	printf("%c\n",root->data);

	draw_(root->l,level+1);	
}

void draw(struct node_st *root)
{
	draw_(root,0);
}

struct node_st *load_(FILE *fp)
{
	int ch;
	struct node_st *node;

	ch = fgetc(fp);
	if(ch != '(')
	{
		printf("load_() failed.\n");
		exit(1);
	}
	
	ch = fgetc(fp);	
	if(ch == ')')
		return NULL;

	node = malloc(sizeof(*node));
	if(node == NULL)
		return NULL;
	node->data = ch;
	node->l = load_(fp);
	node->r = load_(fp);		
	
	fgetc(fp);	// must be ')'

	return node;
}

struct node_st *load(const char *fname)
{
	struct node_st *root;
	FILE *fp;

	fp = fopen(fname,"r");
	if(fp == NULL)
		return ;

	root = load_(fp);	

	fclose(fp);
	return root;
}

int main()
{

	tree = load("tmp");
	
	draw(tree);

	exit(0);
}





