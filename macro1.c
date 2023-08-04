#include <stdio.h>

#define STRING2(x) #x


int main()
{
	printf("%d\n", STRING2(1));
	return 0;
}

