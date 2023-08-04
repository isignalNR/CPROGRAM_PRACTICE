#include <stdio.h>
#include <string.h>

int main()
{
	 char str[10];
	 char *ptr = str;
	 printf("Enter string\n");
	 scanf("%s", str);

	 printf("%c\n", ptr[5]);
	 printf("%x\n", &ptr[2]);
	 return 0;
}
