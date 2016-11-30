#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define KEYSIZE		32
#define DESCSIZE	128

struct node_st
{
	struct node_st *ch[26];
	char desc[DESCSIZE];
};

struct node_st *newnode()
{
	int i;
	struct node_st *node;
	node = malloc(sizeof(*node));
	/*if error*/

	node->desc[0] = '\0';
	for(i = 0 ; i < 26; i++)
		node->ch[i] = NULL;
	return node;
}

int insert(struct node_st **root,char *key,char *desc)
{//"ant" "xxxxxxx"

	if(*root == NULL)
	{
		*root = newnode();
		if(*root == NULL)
			return -1;
	}

	if(*key	== '\0')
	{
		strcpy((*root)->desc,desc);	
		return 0;
	}

	return insert((*root)->ch + (*key-'a'),key+1,desc);
}

char *find(struct node_st *root,const char *key)
{// an 
	if(root == NULL)	
		return NULL;

	if(*key == '\0')
		return root->desc;	

	return find(root->ch[*key-'a'],key+1);
}

int main()
{
	int i;
	struct node_st *tree = NULL;
	char key[][KEYSIZE] = {"ant","butterfly","cobra","donkey"};
	char desc[][DESCSIZE] = {"A small insect that lives in group",\
						"A flying insect with long thin body",\
						"A highly dangerous snake native to Afria",\
						"A animal with short legs and long ears"};

	for(i = 0 ; i < 4; i++)
		insert(&tree,key[i],desc[i]);

	char *datap;
	datap = find(tree,"don");
	if(datap != NULL && datap[0] != '\0')
		puts(datap);

	exit(0);

}
