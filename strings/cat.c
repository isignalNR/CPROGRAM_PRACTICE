/* my_strcat(dest, src) copies data of src to dest.  To do so, it first reaches end of the string dest using recursive calls my_strcat(++dest, src).  Once end of dest is reached, data is copied using   (*dest++ = *src++)?  my_strcat(dest, src). */
#include <stdio.h>
void my_strcat(char *dest, char *src) 
{ 
				(*dest)? my_strcat(++dest, src): (*dest++ = *src++)? my_strcat(dest, src): 0 ; 
} 

/* driver function to test above function */
int main() 
{ 
				char dest[100] = "geeksfor"; 
				char *src = "heights"; 
				my_strcat(dest, src); 
				printf(" %s ", dest); 
//				getchar(); 
				return 0;
} 
