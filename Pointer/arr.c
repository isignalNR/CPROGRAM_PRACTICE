#include <stdio.h>

int main()
{
	int a[4] = { 1,2,3,4};
	char *p = (char*)a;

	printf("%d\n", p[2]);
	return 0;}
