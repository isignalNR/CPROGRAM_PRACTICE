#include <stdio.h>
#include <stdlib.h>

union YUP {
	int foo;
	double b;
	char x;
}u, *p = NULL;

int main()
{
	u.x = 'a';
	p = &u;
	printf("Size of u: %d\n", sizeof(u));
	printf("%d %f %c\n", u.foo, u.b, u.x);
	printf("%d %f %c\n", (*p).foo, (*p).b, (*p).x);
	p= (union YUP*)malloc(sizeof(union YUP)); 
	p->foo = 65;
	//p->b = 20.32;
	//p->x = 'l';
	printf("%d %f %c\n", (*p).foo, (*p).b, (*p).x);
	return 0;
}

