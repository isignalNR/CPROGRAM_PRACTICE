#include <stdio.h>

int main()
{
	//char *const t = "Hello";
	//char const *t = "Hello";
//	const char *t = "Hello";
				char *t = "Hello";
	*t = 'A';
	//t = "Bye";
	printf("%s\n", t);
	return 0;
}
