#include <stdio.h>

int main()
{
		int a, b;
		printf("Enter the a and b: ");
		scanf("%d %d", &a, &b);
		int x = pow1(a,b);
		printf("Power res: %d\n", x);
		return 0;
}

int pow1(int x, int y)
{
	int res = x, i=1;
for(i;i<y;i++)
	res = x*res;

			printf("res: %d\n", res);
	return res;
}


