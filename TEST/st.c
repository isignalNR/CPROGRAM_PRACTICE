#include <stdio.h>

int main()
{
	struct emp
	{
		int age;
    float sal;
		char name[20];
	};

	struct emp e = {3};
	printf("\n %f %s", e.sal, e.name);
}
