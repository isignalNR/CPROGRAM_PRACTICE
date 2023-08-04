/* Demo for passing function pointer as the argument of a function */

#include <stdio.h>

/* Typedef of the function pointer */
//typedef int (OPERATION)(int, int);


int add(int i, int j)
{
	return i+j;
}

int mul(int a, int b)
{
	return a*b;
}

int mathOp(int (*OpType)(), int a, int b) // function ptr as argument
//int mathOp(OPERATION OpType, int a, int b) // typedef usage of function pointer
{
	printf("%p\n", OpType);
	return OpType(a, b);	
}
	
int main()
{
	int sum = mathOp(add, 10, 20);
	printf("Sum of two numbers %di %p\n", sum, add);

	int product = mathOp(mul, 10, 20);
	printf("Mul of two numbers %d\n", product);

	return 0;
}
