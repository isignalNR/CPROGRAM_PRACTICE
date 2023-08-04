#include <stdio.h>

const char* fun()
{
		static const char *j = "Hello";

//		*j = 'k';
		return j;
}

int main()
{
	const char *p = fun();
	printf("%s\n", p);
	p++;
	printf("%s\n", p);
/*	*p = 'k'; // address can be changed, but not the content
	printf("%s\n", p);*/
	char const *p1 = fun();
	printf("%s\n", p1);
	p1++;
//	printf("%s\n", p1);
//	*p1 = 'k'; // address can be changed, but not the content
	printf("%s\n", p1);
	return 0;
}
	
