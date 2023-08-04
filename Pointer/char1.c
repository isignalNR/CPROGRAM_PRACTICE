#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *p = "Hello";
	printf("%s  %p %p\n", p, p, &p);
	p = "Tvamev";
	printf("%s  %p %p\n", p, p, &p);
	p = (char *)malloc(5);
	*p = 'K';
	printf("%s  %p %p\n", p, p, &p);
	free(p);
	p = "jeb";
	printf("%s  %p %p\n", p, p, &p);
	return 0;
}
