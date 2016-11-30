#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <shadow.h>

int main(int argc,char **argv)
{
	struct spwd *shwline;
	char *key;
	char *crypted_pass;

	if(argc < 2)
	{
		fprintf(stderr,"Usage...\n");
		exit(1);
	}
	
	key = getpass("PASSWD:");
	/*if error*/
	
	shwline = getspnam(argv[1]);
	/*if error*/

	crypted_pass = crypt(key,shwline->sp_pwdp);
	/*if error*/

	if(strcmp(crypted_pass,shwline->sp_pwdp) == 0)
		puts("ok!");
	else
		puts("failed.");



	exit(0);
}


