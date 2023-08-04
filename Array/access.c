#include <stdio.h>

int main()
{
	int a[4] = {1,2,3};
	int *p = &a;
	printf("%d %d\n", a[5], *p);
	return 0;
}
