#include <stdio.h>

// strcpy: copy t to S; pointer version 2 *1
void strmycpy(char *s, char *t)
{
//				while((*s++ = *t++)!= '\0');
				  while(*s++ = *t++);
}

int main()
{
	char str1[6] = "Hello";
	char str2[7];
	strmycpy(str2, str1);
	printf("%s\n", str2);
	return 0;
}

