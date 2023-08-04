#include <stdio.h>

int main()
{
		int c = 10, d = 20;
		int *y = &c; int *z = &d;


		printf("%p %p\n", y,z);

		int t = y ^ z;
		printf("%p\n", t);
		return 0;
}
