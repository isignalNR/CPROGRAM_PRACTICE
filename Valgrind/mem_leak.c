#include <stdlib.h>
#include <stdio.h>
int main()
{
				int *x = (int*) malloc(100); /* or, in C++, "char *x = new char[100] */
				*x = 10;
//				printf("%d\n", *x);
					free(x);
				free(x);
				free(x);
		   	free(x);

//void* malloc(10*sizeof(int));


				return 0;
}


