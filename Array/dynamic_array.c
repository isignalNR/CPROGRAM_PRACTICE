#include <stdio.h>

int main()
{
	int x,i=0;

	printf("Enter the number of elements: ");
	scanf("%d", &x);
	int a[x];
	printf("%x\n", &x);
	printf("Eneter Array Elements: \n");
	for(i;i<x;i++)
	{
		scanf("%d", &a[i]);
	}

	printf("The Array Elements are: \n");
	for(i=0;i<x;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
