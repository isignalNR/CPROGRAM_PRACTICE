#include <stdio.h>

int main()
{
	int stud[5][2] = {
											{1234, 56},
											{1212, 33},
											{1434, 80},
											{1312, 78}
									 };

	int i,j;

	for(i=0;i<=3;i++)
	{
//		printf("%d\n", stud[i]);
		printf("\n");
		for(j=0;j<2;j++)
			printf("%d ", stud[i][j]);
	}
	return 0;
}

