#include <stdio.h>
void displayNumbers(int num[][2]);
int main()
{
				int i, j;
				int num[4][3] = {
			            {10},
			            {77, 92},
			            {33, 89, 44},
			            {12, 11}
			        };
//				int *p = 
				printf("Displaying:\n");
				for (i = 0; i < 4; ++i)
//								printf("%d\n", &num[i]);
								//for (j = 0; j < 3; ++j)
									//			printf("%x %d\n", &num[i][j], num[i][j]);
//												printf("%x %d\n", *(p+i)+j,p[i][j]);
				return 0;
}
