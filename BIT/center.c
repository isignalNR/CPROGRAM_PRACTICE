#include <stdio.h>

int main()
{
	 int rows, cols, i, j;
	 printf("Enter row and col\n");
	 scanf("%d %d", &rows, &cols);

	 for(i=0i;i<rows;i++){
		 	for(j=0;j<cols;j++)
			{
					if(i==rows/2 && j==cols/2)
					{
						printf("0");
					}
	 				else
					{
						printf("1");
					}
			}
			printf("\n");
	 }
	 return 0;
}
	 	

