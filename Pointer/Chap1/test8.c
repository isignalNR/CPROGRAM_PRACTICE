#include <stdio.h>
void fun(int **k);

int main()
{
	int *j;
	fun(&j);
	printf("%u \n", j);
	return 0;
}

void fun(int **k)
{
	int a = 20;
	printf("%u \n", &a);
	*k = &a;
}
