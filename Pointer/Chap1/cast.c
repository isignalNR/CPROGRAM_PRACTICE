#include <stdio.h>
int main()
{
	//int i = 10;
	float f = 10.23;
	int i = f;

	double d = 10.2345365654;
	f = d;


	printf("%f\n", f);
	printf("%ld\n", d);
	return 0;
}
