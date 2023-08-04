#include <stdio.h>
#include <stdlib.h>


struct sample
{
	int i;
	char j;
	struct abc *p;
}s;

struct abc
{
	int k;
}b={2};

int main()
{
		s.i = 10;
		s.j = 'j';
		s.p = &b;
		printf("%d %c %d\n", s.i, s.j, s.p->k);
		s.p = (struct abc*)malloc(sizeof(struct abc));
		s.p->k = 30;
		printf("%d %c %d\n", s.i, s.j, s.p->k);

		free(s.p);
		return 0;
};
