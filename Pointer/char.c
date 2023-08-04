#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* fun(char *p)
{
	p = malloc(4);
	strcpy(p, "Hell");
//p = "Hell";
	return p;
}

int main()
{
		char a[4];
		char *p;
		a = (char*)fun(p);

		printf("%s\n", a);
		free(p);
		return 0;
}

