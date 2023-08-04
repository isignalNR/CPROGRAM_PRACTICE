#include <stdio.h>
#include <stdlib.h>

int* add(int a, int b)
{
		printf("in add:%p %p %p\n", &add,&a, &b);
		//int* c = (int*)malloc(sizeof(int));
		//printf("%p\n", c);
		int c = a+b;
		return &c;
}

void show()
{
	printf("in show: %p\n", &show);
}

int main()
{
	int x = 10, y = 20;
	printf("in main: %p %p %p\n", &main,&x, &y);
	//int sum = add(x,y);
	int *sum = add(x,y);
	show();
	printf("Sum = %d\n", *sum);
	return 0;
}
