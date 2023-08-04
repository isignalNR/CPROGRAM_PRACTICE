#include <stdio.h>

void fun(int **x, int *y)
{
		*x = y;
}

int main()
{
	int i = 10;
	int *j = &i;
	printf("%x %d\n", j, *j);
	int *k;
	fun(&k, j);
	printf("%x %d\n", k, *k);
	return 0;
}
