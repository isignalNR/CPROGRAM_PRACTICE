#include <stdio.h>

int main()
{
	register int k = 30;
	printf("%x %d\n", &k, k);
	return 0;
}
