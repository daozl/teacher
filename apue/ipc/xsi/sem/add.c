#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>

#define PROCNUM		20
#define FNAME		"/tmp/out"
#define BUFSIZE		1024

static int semid;

static void P(void)
{
	struct sembuf op;

	op.sem_num = 0;
	op.sem_op = -1;
	op.sem_flg = 0;
	while(semop(semid,&op,1) < 0)
	{
		if(errno == EINTR)
			continue;
		perror("semop()");
		exit(1);
	}
}

static void V(void)
{
	struct sembuf op;

    op.sem_num = 0;
    op.sem_op = 1;
    op.sem_flg = 0;
    while(semop(semid,&op,1) < 0)
    {
        if(errno == EINTR)
            continue;
        perror("semop()");
        exit(1);
    }
}

static void func_add(void)
{
	FILE *fp;
	char buf[BUFSIZE];
	int fd;

	fp = fopen(FNAME,"r+");
	if(fp == NULL)
	{
		perror("fopen()");
		exit(1);
	}

	//sub  lock
	P();
	
	fgets(buf,BUFSIZE,fp);
//	sleep(1);
	fseek(fp,0,SEEK_SET);
	fprintf(fp,"%d\n",atoi(buf)+1);
	fflush(fp);

	//add  unlock
	V();

	fclose(fp);	

	return ;
}

int main()
{
	int i,err;
	pid_t pid;
	int top = 1;

	semid = semget(IPC_PRIVATE,1,0600);
	if(semid < 0)
	{
		perror("semget()");
		exit(1);
	}

	if(semctl(semid,0,SETVAL,top) < 0)
	{
		perror("semctl()");
		exit(1);
	}

	for(i = 0; i < PROCNUM ;i++)
	{	
		pid = fork();
		if(pid < 0)
		{
			perror("fork()");
			exit(1);
		}
		if(pid == 0) // child
		{
			func_add();
			exit(0);
		}
	}
	
	for(i = 0; i < PROCNUM ;i++)
		wait(NULL);

	semctl(semid,0,IPC_RMID);

	exit(0);
}


