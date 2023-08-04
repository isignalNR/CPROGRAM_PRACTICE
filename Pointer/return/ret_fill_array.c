/* filling array from the function with pointer and malloc */

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

int* fillArray(int *pa)
{
		//int *p = (int *)malloc(MAX_SIZE*sizeof(int));
		int i = 0;
		for(i;i<MAX_SIZE;i++){
			pa[i] = i+1;}
		//pa = p;
		return pa;
}

int main()
{
	int a[MAX_SIZE];
	int *k;
	int i = 0;

	k = fillArray(a);

	for(i;i<MAX_SIZE;i++)
		printf("k[%d] = %d and a[%d] = %d\n", i, k[i], i, a[i]);

//	free(k);	
	return 0;
}

