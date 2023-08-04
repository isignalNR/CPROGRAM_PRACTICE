#include <stdio.h>


int main()
{
	//int a[4]; // no initialization so junk values
	int a[4] = {0}; // no initialization so junk values
	int i = 0;
	for(;i<4;i++)
		printf("%d ", a[i]);
	return 0;
}
