#include <stdio.h>

int main()
{
	char name[] = "Integer";
	char *ptr;

	ptr = name;
	while(*ptr !='\0')
	{
		printf("%c", *ptr);
		ptr++;
	}
	printf("\n");
	return 0;
}
