#include <stdio.h>

// Will occupy memory at compile time
// Global scope allocation
int a;

void foo()
{
				// Will occupy memory at compile time
				// static allocation
				static int c = 10;

				c++;

				printf("c = %d\n", c);
}


int main()
{
				// Will occupy the memory at compile time
				// Automatic allocation
				int b; 

				// assigning value to test/print
				a=10;
				b=20;

				// Print values
				printf("a = %d\n", a);
				printf("b = %d\n", b);

				foo();
				foo();
				//printf("c1 = %d\n", c);

				return 0;
}
