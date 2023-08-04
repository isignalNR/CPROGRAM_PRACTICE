/* Demo Adding two number using  returning a function pointer  from a function*/
#include <stdio.h>

int add(int x, int y);
int prod(int x, int y);
typedef int (*myfndef)(int, int);

myfndef fnFact1(int i, int j) // normal function returning a function pointer: for product example
{
		myfndef fPTR = &prod;
			return (int)fPTR(i, j);
}

int (*fnFact(int i, int j))()   // alternate way of decleration : for add example
{
		int (*fPTR)(int , int ) = &add;
		return (int)fPTR(i, j);
}
int add(int x, int y)
{
	return x+y;
}

int prod(int x, int y)
{
	return x*y;
}

int main()
{
		myfndef l; // l as function pointer decleration
		int (*k)(int, int); // k as function pointer decleration
		k = (myfndef)fnFact;
		l = fnFact1;
		
		int x, y;
		int sum, prod1;
		printf("Enter x and y\n");
		scanf("%d %d", &x, &y);

		sum = k(x,y);
		prod1 = l(x,y);
		printf("sum = %d\n", sum);
		printf("product %d\n", prod1);
		return 0;
}
