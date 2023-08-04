#include <stdio.h>

int* ret_ptr(int *a, int i)
{
		a = a +i;
		return a;
}

int main()
{
				int a[] = { 1,2,3,4,5,6,7};
				int i = 4, *ptr;
				ptr = ret_ptr(a, i);
				  printf("Address of arr = %u\n", a);
				printf("\nAfter incrementing arr by 4 \n\n");

				printf("Address of ptr = %u\n\n" , ptr);
				printf("Value at %u is %d\n", ptr, *ptr);

				return 0;
}
	
