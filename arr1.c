#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *s;// = "Hello";
	char *s1;
  s1	= (char*)malloc(20);
	printf("Enter string s1:\n");
	gets(s1);

	//s1 = "World";
	
//	printf("%s\n", s);

	s = (char*)malloc(20);
	printf("Enter string s:\n");
	gets(s);

//	printf("%s %p\n", s, s);
//	s = "Quora";

	printf("%s\n", s1);

	s = strcat(s, s1);
	printf("%s\n", s);

	return 0;
}
