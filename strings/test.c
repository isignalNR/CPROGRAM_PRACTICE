#include <stdio.h>

int main()
{

	char a[6] = {'H','E','L','L','O','\0'};
/*	char *p = (char*)&a;

	printf("%c\n", *a);
	printf("%c\n", *p);
	
	printf("%c\n", *(a+4));*/
	printf("%d\n", a[5]);

	return 0;
}
