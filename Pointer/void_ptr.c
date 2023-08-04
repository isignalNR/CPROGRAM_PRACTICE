#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p = NULL;
	int *p1 = NULL;
	p = (int*)malloc(100);
	p1 = (int*)malloc(10);

//	int *k;
//	k = p;

	//printf("%p %d\n", p, *p);
	printf("%p\n", p);
	printf("%p\n", p1);

	printf("distance betwee two pointers %d\n",p1-p);

	free(p);
	return 0;
}
