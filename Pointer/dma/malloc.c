#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p, i = 0;
	p = (int*)malloc(sizeof(12));
	if(p == NULL)
	{
		printf("No memory allocated\n");
		exit(1);
	}
	else
	{
		*(p+0) = 1;
		  p[1]= 2;
			2[p] = 3;
			p[4] = 5;
	}
	for(i;i<5;i++)
	{
		printf("%d \n", p[i]);
	}
//		printf("%d \n", p[2]);
	return 0;
}


