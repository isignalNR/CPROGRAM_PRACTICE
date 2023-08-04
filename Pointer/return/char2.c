#include <stdio.h>

int main()
{
	char *p = "Jumbo";
	printf("%s %p\n", p, p);
	p ="Hello";

	printf("%s %p\n", p, p);
	return 0;
}
