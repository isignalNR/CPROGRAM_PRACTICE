#include <stdio.h>

#pragma pack(1)
struct d
{
	int i;
//	char j;
	double d;
};

int main()
{
	struct d *p, a = {1,2.3};
	p = &a;
	printf("Size of struct: %d\n", sizeof(a));
	//printf("%x %x %x\n", &a.i,&a.j,&a.d);
	//printf("%d %c %lf\n", a.i,a.j,a.d);
	//printf("%x %x %x\n", &p->i,&p->j,&p->d);
	printf("%x  %x\n", &a.i,&a.d);
	printf("%d  %lf\n", a.i,a.d);
	printf("%x  %x\n", &p->i,&p->d);
	return 0;
}
