#include <stdio.h>

int main()
{
	const int a = 10;
	printf("a = %d\n", a);
	const int *p = &a;

	*p = 30;
	printf("a modified via pointer = %d\n", *p, a);
	printf("%d %d\n", *p, a);
	return 0;
}

