#include <stdio.h>

int main()
{
	extern int i;
	//int *p = &i;
	printf("%d %x\n",i, p);
	return 0;
}
	i = 33;
