#include <stdio.h>
#include <stdlib.h>


struct Data
{
	char a; // one byte
	char b; // pne byte
	char c; // one byte
	int d;  // 4 bytes
};

typedef struct Data  EMP;

int main()
{

	EMP d;

	d.a = 'd';
	//e1.c = 'r';
	//e1.d = 10;

	printf("size of structure: %d\n", sizeof(EMP));
	printf("a = %c, b = %c, c = %c , d = %d\n", d.a, d.b, d.c, d.d);
  printf("&a = %p, &b = %p, &c = %p , &d = %p\n", &d.a, &d.b, &d.c, &d.d);
	printf("&a = %p, &b = %p, &c = %p , &d = %p\n", &d.a, &d.b, &d.c, &d.d);

	return 0;
}
