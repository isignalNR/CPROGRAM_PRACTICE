#include<stdio.h>

int main()
{
				int a[] = {1, 2, 3, 4, 5, 6};
/*				int *ptr = (int*)(&a+1); //NOT CLEAR
				printf("%d ", *(ptr-1) );
				getchar();*/
				printf("%x %d %x\n", a, *a, &a);
				printf("%x %d %x\n", (&a+1), *a, &a);

				return 0;
} 
