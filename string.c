#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *s1 = "Hello, ";
		char *s2 = "world!";
			char *s3 = (char*)malloc(15);
		 	s3= strcat(s1, s2);
			printf("%s\n", s3);
			return 0;
}
