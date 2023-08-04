#include <stdio.h>

int main()
{
	int a = 20;
	int *p;
	char c = 'f';
	p = &a;

	printf("%p %p\n", &a, p);
	printf("%d %d\n", a, *p);

	*p = 30;

	printf("%d %d\n", a, *p);

	p = (int*)&c;
	printf("%c %c\n", c, *p);


	return 0;
}


