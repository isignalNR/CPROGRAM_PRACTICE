#include <stdio.h>

int main()
{
		int i = 3;


		printf("Address of i =  %u\n", &i);
		printf("Value of i = %u\n", i);
		printf("Value of i = %u\n", *(&i));
		printf("Value of i = %u\n", *(&i));
//		printf("alue of i = %\n", &(*i));
		return 0;
}

