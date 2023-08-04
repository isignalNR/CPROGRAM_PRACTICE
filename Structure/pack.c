#include <stdio.h>
#include <stdlib.h>


//#pragma pack(1)  // disabling packing

struct Data
{
	char a; // one byte
	char b; // pne byte
	char c; // one byte
	int d;  // 4 bytes
};

struct DATA1
{
	int k;
	struct Data p; // nested Structres
};

typedef struct Data  EMP;

int main()
{
/*	struct Data d = { 'a','b','c',2};*/

	EMP e1;

	struct DATA1 j;
	//struct DATA1
//	int x,y, z;
	e1.a = 'k';
	e1.b = 'd';
	e1.c = 'r';
	e1.d = 10;

//Method 1: Variables Address storing in the pointer
	EMP *p1, *p2;
	p1 = &e1;

//Method 2: Dynamic Memory allocation for the pointer

//	void* malloc(size);

	p2 = (EMP*)malloc(sizeof(EMP));

	if(p2 == NULL)
	{
		printf("Allocation of memory failed\n");
		exit(0);
	}
	
	p2->a = 'g';
	p2->b = 'i';
	p2->c = 'y';
	p2->d = 20;


	printf("size of structure: %d\n", sizeof(EMP));
	//printf("a = %c, b = %c, c = %c , d = %d\n", d.a, d.b, d.c, d.d);
	printf("a = %c, b = %c, c = %c , d = %d\n", p1->a, p1->b, p1->c, p1->d);
	printf("a = %c, b = %c, c = %c , d = %d\n", p2->a, p2->b, p2->c, p2->d);
	printf("a = %c, b = %c, c = %c , d = %d\n", e1.a, e1.b, e1.c, e1.d);
	//printf("&a = %p, &b = %p, &c = %p , &d = %p\n", &d.a, &d.b, &d.c, &d.d);

	free(p2);
	p2=NULL;

	return 0;
}
