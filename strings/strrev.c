#include <stdio.h>
#include <string.h>
int main(void)
{
				//variable
				char str[100], tmp;
				int i, len, mid;

				//input
				printf("Enter a string: ");
				gets(str);

				//find number of characters
				len = strlen(str);
				mid = len/2;

				//reverse
				for (i = 0; i < mid; i++) {
								tmp = str[len - 1 - i];
								str[len - 1 - i] = str[i];
								str[i] = tmp;
				}

				//output
				printf("Reversed string: %s\n", str);
				char *ptr = strupr(str);
				printf("Upper string: %s\n", ptr);

				printf("End of code\n");
				return 0;
}
