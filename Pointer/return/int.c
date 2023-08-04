#include <stdio.h>
#include <stdlib.h>


int* fun()
{
	int *p = (int*)malloc(12);
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	return p;
}

int main()
{
	int *k, i = 0;
	k = fun();
	for(i;i<3;i++)
		printf("%d \n", k[i]);
	free(k);
	return 0;
}

