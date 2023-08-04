#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char *str;

	str = (char*) calloc(10, sizeof(char));

	if(str == NULL)
	{
			printf("Cannot allocate the memory\n");
			exit(1);
	}

	strcpy(str, "Computer");
	printf("Address of string < %s =  %d >\n", str, str);
	printf("char at 9th loc %c\n", str[2]);

	free(str);
	return 0;
}	
