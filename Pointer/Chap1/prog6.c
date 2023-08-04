#include <stdio.h>

int main()
{
	char *ii, *aa;
	int i = 544233;
	float a = 3.14;

	ii = (char*)&i;
	aa = (char*)&a;


	printf("Address contained in ii = %u\n", ii);;
	printf("Address contained in aa = %u\n", aa);
	printf("Value at the address contained in ii = %d\n", *ii);
	printf("Value at the address contained in aa = %d\n", *aa);
	return 0;
}
