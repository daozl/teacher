#include <stdio.h>
#include <stdlib.h>
#include <glob.h>

#define PAT		"/etc/a*.conf"

int err_func(const char *epath, int eerrno)
{
	fprintf(stderr,"%s:%s\n",epath,strerror(eerrno));
	return 0;
}

int main()
{
	glob_t globres;
	int i,err;	

	err = glob(PAT,0,NULL/*err_func*/,&globres);
	if(err)
	{
		fprintf(stderr,"glob():%d\n",err);
		exit(1);
	}

	for(i = 0 ; i < globres.gl_pathc; i++)
		puts(globres.gl_pathv[i]);

	globfree(&globres);

	exit(0);
}




