#include <stdio.h>

struct foo_s {
	int foo;
	double b;
	char x;
}u= { 3.2};

int main()
{
	u.x = 'a';
	printf("Size of u: %d\n", sizeof(u));
	printf("%d %f %c\n", u.foo, u.b, u.x);
	return 0;
}

