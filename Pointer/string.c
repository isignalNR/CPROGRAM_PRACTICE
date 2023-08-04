#include <stdio.h>

int main()
{
	char p[] = "Hello";
	char *p1 = p; 

	printf("%s %s\n", p1, p1+1);
	return 0;
}
