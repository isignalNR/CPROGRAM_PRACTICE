#include <stdio.h>

int main()
{
	char *p = "Hello";
	char a[] = "Hello";
	printf("%s %p %s %p\n", p,&p, a, p);
	printf("size of p: %d\n", sizeof(p));
	p = "Bye";
	printf("%s %p %s %p\n", p,&p, a, p);
	//a = "Bye";
	//printf("%s %p %s \n", p,&p, a);

	//*p = 'K';
	//printf("%s %p \n", p,&p);
	*(p+2) = 'a';
	printf("%s %p \n", p,&p);
	p = 0x400704
		

	return 0;
}
