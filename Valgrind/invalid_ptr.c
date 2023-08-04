#include <stdlib.h>
#include <stdio.h>

int main()
{
				    char *x = malloc(10);
						    x[13] = 'a';
								printf("%c\n", x[13]);
								    return 0;
}
