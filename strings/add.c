#include <stdio.h>

int x = 10;
int y = 30;


void add(int x, int y)
{
	int sum = x + y;
	printf("%p %p %p %d\n", &x, &y, &sum, sum);

	printf("%d\n", sum);
}

int main()
{
	printf("%p %p %d %d\n", &x, &y, x, y);
	add(x,y);

	return 0;
}


