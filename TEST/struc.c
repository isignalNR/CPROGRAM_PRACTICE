#include <stdio.h>

struct emp
{
	char name[20];
	int age;
};

void f(struct emp);
int main()
{
	struct emp e = {"xyz",34};
	f(e);
	return 0;
}

void f(struct emp ee)
{
	printf("%s %d\n", ee.name, ee.age);
}

