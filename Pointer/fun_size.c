#include <stdio.h>

void fun()
{
		printf("hello\n");
}

void show()
{
		printf("hello\n");
}



int main()
{
	void (*fp1)() = fun;
	void (*fp2)() = show;

	printf("%p\n", fp1);
	printf("%p\n", fp2);
	printf("%p\n", fun);
	printf("%p\n", show);


	printf("Size of Fun = %d\n", fp2 - fp1);
	return 0;
}


