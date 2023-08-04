#include <stdio.h>

struct 
{
		int k;
		int l;
}s1, s2;

int main()
{
	s1.k = 10;
	s1.l = 20;
	printf("s1.k = %d, s1.l = %d\n", s1.k, s1.l);
	return 0;
}
