#include <stdio.h>
#include <stdlib.h>

int fun(int x, int y)
{
	int a, b;
	a = add(x,y);
	b = sub(x,y);
	int c = mul(a,b);
	return c;
}

int add(int x, int y)
{
	return x+y;
}

int sub(int x, int y)
{
	return x-y;
}

int mul(int x, int y)
{
	return x*y;
}

int main()
{
		int a = 20, b = 10;
		int res;
		res = fun(a,b);

		printf("Res: %d\n", res);
		
		return 0;
}

