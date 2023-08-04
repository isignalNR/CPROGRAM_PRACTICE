#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *p1, *p;
	p1 = "Heai";
	p = (char*)malloc(10);
	p = "Hello";
	printf("%s %s\n", p, p1);
	return 0;
}
