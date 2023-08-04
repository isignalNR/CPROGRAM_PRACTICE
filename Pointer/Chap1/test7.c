#include <stdio.h>

int main()
{
	int a = 10;
	int *p = &a;

printf("%d %d\n", *p, a);
int k = printf("helloworld");

printf("%d\n", k);

//	(*p)++;
	printf("%d %d\n", a,++(*p));
	return 0;
}
