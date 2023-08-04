/*Demo of 2d array dynamic allocaion using single pointer */
#include<stdio.h> 
#include<stdlib.h> 
  
int main() 
{ 
				int r=4, c=4, len=0; 
				int *ptr, **arr; 
				int count = 0,i,j; 

				len = sizeof(int *) * r + sizeof(int) * c * r; 
				arr = (int **)malloc(len); 

				//ptr is now pointing to the first element of 2D array
				ptr = arr + r; 
				printf("%p\n", *arr);
				/*printf("ptr: %p %p %p\n",ptr[0], ptr[1], ptr[2]);
				printf("arr: %p %p %p %p\n",arr, arr[0], arr[1], arr[2]);
				printf("%p %p\n", ptr, &arr[0][0]);
				printf("arr[1] = %p\n", (ptr+c*1));*/

				// for loop to point rows pointer to appropriate location in 2D array 
				for(i = 0; i < r; i++) {
								arr[i] = (ptr + c * i);
								printf("arr[%d] = %p\n",i, arr[i]);

				}
				for (i = 0; i < r; i++) 
								for (j = 0; j < c; j++) 
												arr[i][j] = ++count; // OR *(*(arr+i)+j) = ++count 

				for (i = 0; i < r; i++){
								for (j = 0; j < c; j++) {
												printf("%d ", arr[i][j]); 
								}
				printf("\n");
				}

				return 0; 
}
