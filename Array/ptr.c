#include <stdio.h>

int main()
{
		int a[5] = {1,2,3,4,5};
		int *p;
		p = &a[0];
		printf("p: %x, *p = %d &a[0]=%x\n", p, *p, &a[0]);
		p = a;
		printf("p: %x, *p = %d &a[0]=%x\n", p, *p, &a[0]);
		p = &a;
		printf("p: %x, *p = %d &a[0]=%x\n", p, *p, &a[0]);
		p++;
		printf("p: %x, *p = %d &a[0]=%x\n", p, *p, &a[0]);
		p++;
		printf("p: %x, *p = %d &a[0]=%x\n", p, *p, &a[0]);
		p = a+1;
		printf("&a : %x\n", p);
		return 0;
}
