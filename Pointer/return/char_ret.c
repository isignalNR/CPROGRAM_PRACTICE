/* Demo for returning a charector with the help of pointer */

#include <stdio.h>
#include <stdlib.h>

const char* fun()
{
	char *p = (char*)malloc(6);
	printf("inside fun1: %s %p\n", p, p);
	free(p);
	p = "Hello1";
//const char *p = "Mello";
//char *const p = "Mello";
	//p = "Hello";  for this free won't work even outside the function => abort at ./a.out
//	p[0] = 'H';p[1]= 'e';p[2] = 'l'; p[3] = 'l';p[4] = 'o';p[5] = '\0';
	printf("inside fun2: %s %p\n", p, p);
	return p;
}

int main()
{
	char *s = NULL;
	s = fun();
	printf("inside main1 s contents: %s %p\n", s, s);
	s = "World";
	printf("inside main2 s contents: %s %p\n", s, s);
	//free(s);
	//s = NULL;
	return 0;
}
