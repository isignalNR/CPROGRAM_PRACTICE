#include <stdio.h>

//#pragma warn -rch

int fun()
{
	printf("Hi\n");
}

int main()
{
	int x = fun();
	printf("%d\n", x);
	return 0;
}
