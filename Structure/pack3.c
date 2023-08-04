#include <stdio.h>

int main()
{
				struct EMP
				{
						int i;
						double d;
						float f;
						char c;
						short s;
				}e = { 1,1.2,3.4,'l',4};

				printf("Size of struct: %d\n", sizeof(struct EMP));
				printf("%d %lf, %f %c, %d\n", e.i, e.d, e.f, e.c, e.s);
				printf("%x %x, %x %x, %x\n", &e.i, &e.d, &e.f, &e.c, &e.s);
				return 0;
}
				
