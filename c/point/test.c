
int main()
{
	int i = 1,j = 10;
	int *p = &i;
	int *q = &j;

	int **m = &p;
	int **n = &q;

	p = &j;
	
	**m = 100;

	*n = &i;

	m = &q;


	exit(0);
}


