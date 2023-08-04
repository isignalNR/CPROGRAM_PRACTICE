#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int *a;
	a = (int*)malloc(sizeof(int));
	*a = 10;
	a = (int*)malloc(sizeof(int));
	*a = 20;

	printf("a = %d\n", *a);


	free(a);
	return 0;
}	
