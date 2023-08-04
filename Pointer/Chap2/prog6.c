#include <stdio.h>

int main()
{
	int a[5] = {1,2,3,4,5};

	int i = 0;
	for(i;i<5;i++)
	{
		printf("%d %d %d %d\n", i[a], a[i], *(a+i), *(i+a));
		printf("%p %p %p %p\n", &i[a], &a[i], a+i, i+a);
	}
	return 0;
}
