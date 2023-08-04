/* Demo for 2d array using array of pointers */

#include <stdio.h>
#include <stdlib.h>

int main()
{
				int r = 4, c= 4, i, j, count=0;
				int *arr[r];

				for(i=0;i<r;i++)
								arr[i] = (int*)malloc(c*sizeof(int));

//assign values
				for(i=0;i<r;i++)
								for(j=0;j<c;j++)
												arr[i][j] = ++count;

//print values
				for(i=0;i<r;i++){
								for(j=0;j<c;j++){
												printf("%d ", arr[i][j]);
								}
								printf("\n");
				}
				return 0;
}
