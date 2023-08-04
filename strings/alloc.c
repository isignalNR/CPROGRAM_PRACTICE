#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *p = NULL;
	p = (char*)malloc(10);

	strcpy(p, "Hello");
	printf("%s\n", p);
	return 0;
}
