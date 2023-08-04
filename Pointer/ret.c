#include <stdio.h>

int* fun(int k)
{
		printf("Address of j %u\n", &k);
		int *p = &k;
		return p;
}

int main()
{
		int j = 10;
		int *k = fun(j);
		printf("Address of j %u, value of k: %d\n", k, *k);
		printf("Address of j %u\n", &j);
		return 0;
}

