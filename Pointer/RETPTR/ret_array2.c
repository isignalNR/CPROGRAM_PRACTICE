/* Demo for returning array using static array*/
#include <stdio.h> 
  
int* fun() 
{ 
				int arr[10]; 

				/* Some operations on arr[] */
				arr[0] = 10; 
				arr[1] = 20; 

				return arr; 
}

void fun1()
{
	printf("Hello\n");
}

int main() 
{ 
				int* ptr = fun(); 
				fun1();
				printf("%d %d\n", ptr[0], ptr[1]); 
				return 0; 
} 
