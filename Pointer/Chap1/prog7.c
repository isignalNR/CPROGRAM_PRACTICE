/* Pass by Value and Pass by Af=ddress Demo */

#include <stdio.h>
void swapv(int, int);

int main()
{
	int a = 10, b = 20;
	swapv(a, b);
	printf("a %p %p %d %d\n", &a, &b, a, b);
	return 0;
}

void swapv(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y= temp;
	printf("%p %p %d %d\n", &x, &y, x, y);
}

