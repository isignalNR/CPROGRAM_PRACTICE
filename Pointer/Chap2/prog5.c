#include <stdio.h>

int main()
{
	int a[5] = { 1,2,3,4,5};

	int *j;
	j = &a[0]; // assign the address of the oth element 

	int i = 0;

	printf("accessing the array elements using index\n");
	for(i;i<5;i++)
		printf("%u %d\n", &a[i], a[i]);
	i = 0;

	printf("accessing the array elements using pointer\n");
	while( i<5)
	{
			printf("address = %u\t", &a[i]);
			printf("element = %d\n", *j);
			i++;
			j++;
	}

	return 0;
}
