#include <stdio.h>

int add(int , int ); // function prototype

int main()
{
	int  k, j;
	int sum;
	printf("Enter the value of k, j: \n");
	scanf("%d %d", &k, &j);
	sum = add(k, j); // function calling
	printf("Sum of k and j is: %d\n", sum);
	return 0;
}

int add(int x, int y) //  function definition
{
		int total;
		total = x + y;
		return 0;
}
