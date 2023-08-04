#include <stdio.h>

int main()
{
	int marks[] = {55,65, 75, 85, 88, 59, 60};
	int i = 0;

	for(i = -2;i<=10;i++)
			printf("%d %u\n", marks[i], &marks[i]);
	return 0;
}

