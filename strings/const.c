#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *p = "Hello";
//	p[3] = 'e';

	printf("%s\n", p);
	printf("%p %p %c\n", &p, p, *p);


	p = (char*)malloc(sizeof(char)*10);
	if(p == NULL)
	{
			printf("Cannot allocate the memory..\n");
			exit(0);
	}
	printf("%p %p\n", &p, p);
	free(p);
	p = NULL;
					return 0;
}

					
