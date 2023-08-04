#include <stdio.h>

int main()
{
	int a[4] = {1,2,3,4};
	printf("%d %d %d %d %d\n", a, &a, a[0], &a[0], *a);
	return 0;
}
