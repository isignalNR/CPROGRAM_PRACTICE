#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char *str;

	str = (char*) malloc(10);

	strcpy(str, "Computer");
	printf("Address of string < %s =  %d >\n", str, str);

	str = (char*)realloc(str, 40);
	strcpy(str, "Computer Science Engineering");
	printf("Address of string < %s =  %d >\n", str, str);

	free(str);
	return 0;
}	
