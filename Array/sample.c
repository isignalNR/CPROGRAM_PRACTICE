#include <stdio.h>

int main()
{
		int a[]={1,2,3,4}, i=0;
		for(;i<150;i++)
		{
			printf("%d %x\n", a[i], &a[i]);
		}
		printf("\n");
		return 0;
}
