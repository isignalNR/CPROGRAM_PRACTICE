// C program to get toggle case of a string 
#include <stdio.h> 

// tOGGLE cASE = swaps CAPS to lower 
// case and lower case to CAPS 
char *toggleCase(char *a) 
{ 
		int i =0;
				for (i=0; a[i]!='\0'; i++) { 

								// Bitwise EXOR with 32 
								a[i] ^= 32; 
				} 

				return a; 
} 

// Driver Code 
int main() 
{ 
				char str[] = "CherryPicker"; 
				printf("Toggle case: %s\n", toggleCase(str)); 
				printf("Original string: %s", toggleCase(str)); 
				return 0; 
}
