#include <stdio.h>

int main()
{
  char p[] = "Hello";
	char a[5] = "Helloworld";
	(*p)++;
	//printf("%c\n: ", *(p+3));
	printf("%d\n ", *(p+4));
//	printf(" %p\n: ", &p);
//	printf(" %p \n: ",p); 

//	scanf("%s", p);
	printf("Entered string is %s\n", a);
	return 0;
}
