/* Function returning Pointer Demo */

#include <stdio.h>

int * fun();

int main()
{
		int *p;
		p = fun();
		printf("%u\n", p);
		printf("%d\n", *p);
		return 0;
}

int *fun()
{
	static int i = 20;
	printf("Indide fun i address: %u, i value %d\n", &i, i);
	return (&i);
}


