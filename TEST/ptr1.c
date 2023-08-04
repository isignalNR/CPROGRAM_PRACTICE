#include <stdio.h>
void fun()
{
	printf("Hai\n");
}

int main()
{
	int (*fp)() = &fun;
	(*fp)();
	return 0;
}
