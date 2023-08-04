#include <stdio.h>

float *fun(float *r)
{
		r = r+1;
		return (r);
}

int main()
{
	float p= 23.5, *q;
	q =  &p;
	printf("q before function call = %u\n", q);
	q = fun(&p);
	printf("q after function call = %u\n", q);

	return 0;
}

