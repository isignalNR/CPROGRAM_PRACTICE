#include <stdio.h>


void areaperi(int r, float *a, float *p)
{
	*a = 3.14*r*r;
	*p = 2*3.14*r;
}

int main()
{
	int radius = 10;
	float  area, peri;

	areaperi(radius, &area, &peri);

	printf("Area = %d Peri = %d\n", area, peri);
	return 0;
}

