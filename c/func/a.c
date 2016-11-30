

void fun(void);
int fun(void);
int fun(int); 

int i;
float f;
int a[3]; -> int[3]  a;

int fun(int); -> int(int)  fun;
float fun(float);

指针函数:
int *fun(int);
char *fun(void);
void *fun(int);


函数指针:
int i;
int *p;

float f;
float *p;

char str[10];
char *p = str;

int fun(int); -> int(int)  fun;
int(int) *p; -> int (*p)(int);
	

int(int) *p;

int a[3];  ->    int[3]  a;
				type[N]  name;
		
				char * a[3];

			 int (*)(int) [3]	a;

			-> int (*a[3])(int);



int (*p)(int);
int *p(int);
int (*p[3])(int);	函数指针数组
	






