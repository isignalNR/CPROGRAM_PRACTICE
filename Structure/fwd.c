#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Addr
{
	int ph;
	char stNo;
};

struct STD
{
	int id;
	char name[5];
	struct Addr *A;
};

//struct Addr

int main()
{
		struct STD x;
		x.id = 15;
		strcpy(x.name, "Hello");
		x.A = (struct Addr*)malloc(10);
		x.A->ph = 10;
		x.A->stNo = 'k';
		printf("%d %s\n", x.id, x.name);
		printf("%d %c\n", x.A->ph,x.A->stNo);
		return 0;
}
	




