#include <stdio.h>
#include <stdlib.h>

void d(void)
{
    printf("[%s]:Begin.\n",__FUNCTION__);
    printf("[%s]:End.\n",__FUNCTION__);
}

void c(void)
{
    printf("[%s]:Begin.\n",__FUNCTION__);
    printf("[%s]:Call d().\n",__FUNCTION__);
    d();
    printf("[%s]:d() returned.\n",__FUNCTION__);
    printf("[%s]:End.\n",__FUNCTION__);
}

void b(void)
{
    printf("[%s]:Begin.\n",__FUNCTION__);
    printf("[%s]:Call c().\n",__FUNCTION__);
    c();
    printf("[%s]:c() returned.\n",__FUNCTION__);
    printf("[%s]:End.\n",__FUNCTION__);
}


void a(void)
{
	printf("[%s]:Begin.\n",__FUNCTION__);
    printf("[%s]:Call b().\n",__FUNCTION__);
    b();
    printf("[%s]:b() returned.\n",__FUNCTION__);
    printf("[%s]:End.\n",__FUNCTION__);
}

int main()
{
	printf("[%s]:Begin.\n",__FUNCTION__);
	printf("[%s]:Call a().\n",__FUNCTION__);
	a();
	printf("[%s]:a() returned.\n",__FUNCTION__);
	printf("[%s]:End.\n",__FUNCTION__);

	exit(0);
}


