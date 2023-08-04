#include <stdio.h>

#pragma pack(1)
struct sample
{
		int i; // 4
		double d; // 8
		char j; // 1
};


//struct sample eg = { 1, 2, 3};

int main()
{
		struct sample e = { 10, 'f', 30.0032};
		printf("Size of the structure: %ld\n", sizeof(e));

		printf("e %d %c %f\n", e.i, e.j, e.d);
		printf("%p %p %p\n", &e.i, &e.d, &e.j);
//		printf("eg %d %d %d\n", eg.i, eg.j, eg.k);
//		printf("%p %p %p\n", &eg.i,&eg.j, &eg.k);


//		e = eg;
//		printf("e %d %d %d\n", e.i, e.j, e.k);

	//	struct sample e2 = e;
	//	printf("e2 %d %d %d\n", e2.i, e2.j, e2.k);
		return 0;
}

