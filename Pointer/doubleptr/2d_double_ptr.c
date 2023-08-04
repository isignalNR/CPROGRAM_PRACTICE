#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
				int r = 3, c = 4, i, j, count;
				int **arr = (int **)malloc(r * sizeof(int)); // allocate for array of pointers

				printf("%p %p %p\n", &arr[0], &arr[1],&arr[2]);
				printf("%p %p %p\n", arr[0], arr[1], arr[2]);

				for (i = 0; i < r; i++)
						arr[i] = (int*)malloc(c*sizeof(int)); // allocate c times memory, for each r

				printf("%p %p %p\n", arr[0], arr[1], arr[2]);
				
				for (i = 0; i <  r; i++) 
								for (j = 0; j < c; j++) 
												//*(arr + i*c + j) = ++count; 
											//	*(arr + i*c + j) = ++count; 
												*(*(arr+i)+j) = ++count; 

				for (i = 0; i <  r; i++){
								for (j = 0; j < c; j++) {
												printf("%d ",*(*(arr+i)+j)); 
//												printf("%d ", *(arr + i*c + j)); 
								}
								printf("\n");
				}
				/* Code for further processing and free the  
					 dynamically allocated memory */
				return 0; 
} 
