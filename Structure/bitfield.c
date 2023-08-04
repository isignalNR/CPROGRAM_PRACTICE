#include <stdio.h>

struct sample
{
		int i;
		int j;
		int k;
};

struct sample1
{
		unsigned char i:1;
		unsigned char j:2;
		unsigned char k:3;
};


struct sample1 s={1,2,2}, *p= NULL;


struct sample eg = { 1, 2, 3};

int main()
{
		struct sample e = { 10, 20, 30};

		printf("e %d %d %d\n", e.i, e.j, e.k);
		printf("%p %p %p\n", &e.i, &e.j, &e.k);
		printf("eg %d %d %d\n", eg.i, eg.j, eg.k);
		printf("%p %p %p\n", &eg.i,&eg.j, &eg.k);


		e = eg;
		printf("e %d %d %d\n", e.i, e.j, e.k);

		struct sample e2 = e;
		printf("e2 %d %d %d\n", e2.i, e2.j, e2.k);

		printf("Size of : sample 1: %d\n", sizeof(s));

		printf("s %d %d %d\n", s.i, s.j, s.k);
		p = &s;
		printf("p %d %d %d\n", p->i, p->j, p->k);

		return 0;
}

