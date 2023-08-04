#include <stdio.h>



int main()
{
	
	union a
	{
		int i;
		char c[2];
	};

	union a z = {512};
	printf("%d %d\n", z.c[0],z.c[1]);
}
