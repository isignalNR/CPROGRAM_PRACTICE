#include <stdio.h>

void A()
{
	printf("Hello\n");
}

void B(void (*ptr)()) // function pointer as argument
{
		ptr = A;  // call back function that ptr points to - Compiler Understanding
}

int main()
{
		void (*p)() = A;
		B(p);
		return 0;
}


