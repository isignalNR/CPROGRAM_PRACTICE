#include <stdio.h>

// An example of tail recursive function 
void print(int n) 
{ 
				printf("Call %d\n", n);
				if (n < 0)  return; 
				printf(" %d\n", n); 

				// The last executed statement is recursive call 
				print(n-1); 
}

int main()
{
	print(5);
	return 0;
}
