#include <stdio.h>

int main()
{
	int a = 0x1234;
	char *p;
	p = (char*)&a;

	printf("%d\n", *p);
	return 0;
}
