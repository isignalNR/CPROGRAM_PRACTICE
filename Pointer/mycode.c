/* Demo for function pointer mycodeschool */
#include <stdio.h>
void A()
{
	printf("Hello\n");
}

void B(void (*ptr)())
{
	ptr();
}

int main()
{
/*	void (*p)() = A;
	B(p); */

					//or
			B(A); // A is called back by B through function pointer
		return 0;
}

