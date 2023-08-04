#include <stdio.h> 
// A normal function with an int parameter 
// and void return type 
int fun(int a) 
{ 
				printf("Value of a is %d\n", a);
				return (a+1);
} 

int main() 
{ 
				// fun_ptr is a pointer to function fun()  
				//void (*fun_ptr)(int) = &fun; 
				int x;

				//The above line is equivalent of following two 
					 int (*fun_ptr)(int); 
					 fun_ptr = &fun;  
				// */

				// Invoking fun() using fun_ptr 
				x = (*fun_ptr)(10); 
				printf("%d\n", x);

				return 0; 
} 

