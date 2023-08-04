#include <stdio.h>

static int k = 1;
void fun()
{
	printf("fun: %d\n", k);
	k++;
}
void display()
{

	printf("display: %d\n", k);
}

int main()
{
	fun();
	printf("main: %d\n", k);
	fun();
	//void  display();
 display();
	fun();
	return 0;
}
