#include <stdio.h> 


int main(void) 
{ 
	int a = 10;
	int *p = &a;
	printf("%x %d %x %d\n", p, *p, &a, a);
	//++*p; // same precendence do right to left
	(*p)++; // same precendence do right to left
	printf("%x %d %x %d\n", p, *p, &a, a);
	return 0; 
} 
