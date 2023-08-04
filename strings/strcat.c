#include <stdio.h>
#include <string.h>

int main () {
				char src[50], dest[50];
				char *str;

				strcpy(src,  "This is source");
				strcpy(dest, "This is destination");

str = 				strcat(dest, src);

				printf("Final destination string : |%s|\n", dest);
				printf("Final destination string : |%s|\n", str);

				return(0);
}
