#include <stdio.h>

int main()
{
	int *p = NULL;
	p = 0x1234567890a;  // random addressed hard coded
	printf("%u %u\n", p, p+1);
	*p = 30;
	printf("%d %d\n", *p, *(p+1));
	return 0;
}
