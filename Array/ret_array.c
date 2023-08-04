#include <stdio.h>
#include <stdlib.h>
int* fun(int *j, int k)
{
	int i = 0;
  static int *l = (int*)malloc(4*sizeof(int));
	for(;i<4;i++)
	{
			j[i] = i+1;
			l[i] = j[i];
	}
	return l;
}

int main()
{
	int a[4];
	int i = 0;
	int *p;
	p = fun(a,4);
	//fun(a,4);
	for(;i<4;i++)
		printf("%d\n",a[i]);
	return 0;
}
