#include <stdio.h>  
#define NUMBER 1  
int main() {  
#if NUMBER==0  
				printf("Value of Number is: %d",NUMBER);  
#else  
				printf("Value of Number is non-zero");  
#endif         
				return 0;
}
