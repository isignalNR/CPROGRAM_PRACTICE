#include <stdio.h>
typedef int (*FUNC_PTR)(int, float);
void executor(FUNC_PTR func)
{ 
				   func(1, 1.0);
}

int silly_func(int a, float b)
{ 
				  //do some stuff
				printf(" %d %f\n", a, b);
}

int main()
{
				FUNC_PTR ptr;
				ptr = silly_func;
				executor(ptr); 
				/* this should also wotk */
				executor(silly_func);
				return 0;
}
