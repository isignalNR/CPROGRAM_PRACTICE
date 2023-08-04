#include<stdio.h>
void func1();
int global = 100;          // global variable declared
void main()
{
				int local = 10;         // local variable declared
				printf("Global variable is %d\n",global);
				printf("Local variable is %d\n",local);
				func1();

}
void func1()
{
				printf("Global inside func1 is %d\n",global);  // Would print the global variable successfully.
				printf("Local inside func1 is %d", local); /* It would produce an error, because local
                                       is a local variable and can be accessed 
                              only inside main function. */
}
