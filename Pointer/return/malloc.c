#include <stdio.h>
#include <stdlib.h>

int main()
{
	 char *p = (char*)malloc(5);
	 char *q = "Hello";
   printf("%s %s %p %p\n", p,q,p,q);
	 p[0] = 'k';
	 p[1] = 'd';
	 p[2] = 'r';
	 p[3] = 't';
	 p[4] = 'u';
	 //p=q;
   printf("%s %s %p %p\n", p,q,p,q);
	 p=q;
   printf("%s %s %p %p\n", p,q,p,q);
//	 p[2] = 'p';
   printf("%s %s %p %p\n", p,q,p,q);
	 return 0;
}
