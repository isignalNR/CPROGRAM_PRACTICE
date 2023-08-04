#include <stdio.h>
typedef void (*fp)(int); //Declares a type of a void function that accepts an int

void test(int i)
{
				    printf(" test %d\n", ++i);
}
void test1(int i)
{
				    printf("test 1 %d\n", i+2);
}

void test2(int i)
{
				    printf("test 2  %d\n", i+5);
}
void test3(int i)
{
				    printf("test 3 %d\n", i+10);
}
int main()
{
				fp function_array[4] = {test, test1, test2, test3};
				int i = 0;
/*				function_array[0] = test;  //assings a function that implements that signature in the first position
				function_array[0](10); //call the cuntion passing 10*/
				for(i;i<4;i++)
						function_array[i](10);

				return 0;

}
