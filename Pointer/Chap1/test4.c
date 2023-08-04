#include <stdio.h>

int main()
{
	float a = 7.99999;
	float *b, *c;
	b = &a;
	c = b;

	int i = 7;
	printf("%f\n", i);

	printf("%u  %u %u\n", &a, b, c);
	printf("%f  %f %f %f\n", a, *(&a), *b, *c);
	return 0;
}
