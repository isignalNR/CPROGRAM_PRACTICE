#include <stdio.h>

int* abc()
{
		int x = 10, *p;
		p = &x;
		return p;
}

int main()
{
	int *p;
	p = abc();
	printf("%x %d\n", p, *p);
	return 0;
}

