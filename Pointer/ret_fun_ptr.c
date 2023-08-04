/* Demo Adding two number using  returning a function pointer  from a function*/
#include <stdio.h>

int add(int x, int y);
typedef int (*myfndef)(int, int);

myfndef fnFact(int i, int j) // normal function returning a function pointer
{
	myfndef fPTR = &add;
	return fPTR(i, j);
}
/*int ((*fnFact)(int i, int j))(int x, int y)   // alternate way of decleration
{
		int (*fPTR)(int, int) = &add;
		return fPTR(i,j);
}*/
int add(int x, int y)
{
	return x+y;
}

int main()
{
		myfndef k;
		k = fnFact;
		int x, y;
		int sum;
		printf("Enter x and y\n");
		scanf("%d %d", &x, &y);

		sum = k(x,y);
		printf("%d\n", sum);
		return 0;
}
