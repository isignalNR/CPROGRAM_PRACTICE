#include <stdio.h>

int main()
{
//	char *p = "Hello";
//	printf("%p %p %c\n", p, &p, *p);

//	*p = 'K';
//	printf("%p %p %c\n", p, &p, *p);

		char name[5] = "Hellosa";
		printf("pplane %s\n", name);
		printf("Hello %s\n", name);
		printf("Enter name\n");
		scanf("%s", name);
		printf("Hello %s\n", name);
		return 0;
}
