#include <stdio.h>

int main()
{
	int a = 1025;
	int *p = &a;
	printf("size of integer:%d\n", sizeof(int));
	printf("Address  = %x, value = %d\n", p, *p);
//	printf("Address  = %x, value = %d\n", p+1, *(p+1));
	char *p0;
	p0 = p;
	printf("size of integer:%d\n", sizeof(char));
//	printf("Address  = %x, value = %d\n", p0, *p0);
	printf("%d %d %d %d\n",*p0, *(p0+1), *(p0+2), *(p0+3));


	return 0;
}
