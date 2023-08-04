#include <stdlib.h>
#include <stdio.h>
int main(){
				int **mat;			// integer double pointer
				int row=5,col=5;		// row = no of rows, col= no of columns

				int i,j;
				mat = (int**)malloc(row*sizeof(int)); // how many rows
				printf("%p\n\n", mat);

				for (i=0;i<row;i++)
				{
								mat[i]= (int*)malloc(col*sizeof(int)); // for each row i, how many colomns 
								printf("%p\n", mat[i]);
								for (j = 0; j < col; j++ )
												mat[i][j] = i*2; // storing the values
				}
				for (i = 0; i < row; i++ ){
						for (j = 0; j < col; j++ ){
										printf("%d ", mat[i][j]);
				}
						printf("\n");
				}

}
