#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p = (int*)malloc(4*sizeof(int));

	printf("%p %p\n", &p[0], p);
	printf("%p\n", &p[1]);
	printf("%p\n", &p[2]);
	printf("%p\n", &p[3]);

	return 0;
}


