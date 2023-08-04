#include <stdio.h>
#include <stdlib.h>

int main()
{
				
				int **arr; // arr will point to an NxM array of T
				int n=5, m=5;
				int i=0,j=0;

				arr = malloc(sizeof(*arr)*n ); // allocate N objects of type *arr
				if ( arr )
				{
								for (i = 0; i < n; i++ )
								{
												arr[i] = malloc( sizeof(*arr[i] * m)); // allocate M objects of type each row
												if ( arr[i] )
												{
																for (j = 0; j < m; j++ )
																{
																				arr[i][j] = i*2;
																}
												}
								}
				}
				for (i = 0; i < n; i++ ){
					for (j = 0; j < m; j++ ){
								printf("%d ", arr[i][j]);
					}
					printf("\n");
				}
}


