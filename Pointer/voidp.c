#include <stdio.h>

int main()
{
		int a = 1025;
		int *p;
		p = &a;
		void *p0;
		p0 = p;
		printf("Address = %p %p\n",p0, p);
		printf("Address = %d %d\n",*p0, *p);
	 return 0;
}	 
