#include <stdio.h>

int main()
{
	int a = 10;
	int* p = &a;

	printf("%x %d %x %d\n", p, *p, &a, a);
	*(p++);
	printf("%x %d %x %d\n", p, *p, &a, a);

	return 0;
}
