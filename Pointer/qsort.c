#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//qsort generic data

int compare(const void *a, const void *b)
{
	int A = *((int *)a); //typecasting tto int and getting the value
	int B = *((int *)b);
	//return abs(A)-abs(B);
	return A-B;
}


int main()
{
	int i, A[] = {-21, 22, -1, 50, -6, 4};
	qsort(A, 6, sizeof(int), compare);
	for(i=0;i<6;i++) printf("%d\n", A[i]);
	return 0;
}
