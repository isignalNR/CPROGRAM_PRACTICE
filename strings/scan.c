#include <stdio.h>

int main()
{
	char name[50];
	printf("Enter your full name: ");
	scanf("%[^\n]s",name);

	printf("Entered string: %s\n",name);

	return 0;
}

