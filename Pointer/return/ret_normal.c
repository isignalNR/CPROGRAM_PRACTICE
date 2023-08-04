#include <stdio.h>
#include <stdlib.h>

//int fun()
int fun()
{
	int x = 10;
	//int *x = (int*)malloc(4);
	//*x = 10;
	return x;
}

void disp()
{
		printf("I am in disp fun\n");
}

int main()
{
	int y;
	y = fun();
	printf("%d\n", y);
	disp();
	printf("%d\n", y);
//	free(y);
	return 0;
}
