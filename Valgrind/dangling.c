#include <stdio.h>
#include <stdlib.h>

int main()
{
				int *c = malloc(sizeof(int));
				free(c);
				*c = 3; //writing to freed location!
				return 0;
}
