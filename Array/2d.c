#include <stdio.h>
void displayNumbers(int num[][2]);
int main()
{
				int x = 2, y=2;
				int num[x][y], i, j;
				printf("Enter 4 numbers:\n");
				for (i = 0; i < x; ++i)
								for (j = 0; j < y; ++j)
												scanf("%d", &num[i][j]);

				// passing multi-dimensional array to a function
				displayNumbers(num);
				return 0;
}

void displayNumbers(int num[][2])
{
				int i, j;
				printf("Displaying:\n");
				for (i = 0; i < 2; ++i)
								for (j = 0; j < 2; ++j)
												printf("%d\n", num[i][j]);
}
