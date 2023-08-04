#include <stdio.h>

int main()
{
	char c, *cc;
	int i, *ii;
	float a, *aa;

	c = 'A';
	i = 54;
	a = 3.14;
	cc = &c;
	ii = &i;
	aa = &a;

	printf("Address contained in cc = %u\n", cc);
	printf("Address contained in ii = %u\n", ii);
	printf("Address contained in aa = %u\n", aa);
	printf("Value of c = %c\n", *cc);
	printf("Value of i = %d\n", *ii);
	printf("Value of a = %f\n", *aa);
	return 0;
}
