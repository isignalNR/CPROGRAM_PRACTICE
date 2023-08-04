#include <stdio.h>

int main()
{
	int i=10, j = 20, diff;
	diff = &j - &i;
	int *p, *q;
	p = &i;
	q = &j;

	printf("address of i = %u address of j = %u\n", &i, &j);
	printf("address of i = %u address of j = %u\n", p, q);
	printf("difference of the addresses of i and j is %d\n", diff);
	printf("difference of the addresses of p and q is %d\n", q-p);
	return 0;
}

