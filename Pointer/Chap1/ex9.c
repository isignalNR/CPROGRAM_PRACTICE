#include <stdio.h>

int main()
{
	int i = 10;
	printf("value of i = %d address of i = %u\n", i, &i);
	&i= 7200; // lvalue reqired as left operand of the assignment
	printf("value of i = %d address of i = %u\n", i, &i);
	return 0;
}

