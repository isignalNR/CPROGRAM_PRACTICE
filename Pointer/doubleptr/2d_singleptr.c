/*Demo of 2d array dynamic allocaion using single pointer */

#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
				int r = 3, c = 4; 
				int *arr = (int *)malloc(r * c * sizeof(int)); 
				printf("%p\n", arr);
				printf("%p %p\n", arr[0], arr[1]);

				int i, j, count = 0; 

				//store value in each element
				for (i = 0; i <  r; i++) 
								for (j = 0; j < c; j++) 
//												*(arr + i*c + j) = ++count; 
												*(*(arr + i)+ j) = ++count; 
				printf("%p %p\n", arr[0], arr[1]);
				//printf each element
				for (i = 0; i <  r; i++){
								for (j = 0; j < c; j++) {
												//printf("%d ", *(arr + i*c + j)); 
												printf("%d ", *(*(arr + i)+ j)); 
								}
								printf("\n");
				}
				printf("%p %p\n", arr[0], arr[1]);

				/* Code for further processing and free the  
					 dynamically allocated memory */

				return 0; 
} 
