#include <stdio.h>

void swap(int *, int *);
void exchange(int **, int *);

int main()
{
		int c = 10, d = 20;
		printf("Before Swap, c = %d, d = %d\n", c, d);
		swap(&c, &d);
		printf("After Swap, c = %d, d = %d\n", c, d);
		return 0;
}

void swap(int *cc, int *dd)
{
	exchange(&cc, dd);
}
void exchange(int **x, int *y)
{
		int t;
		t = **x;
		**x = *y;
		*y = t;
}
		

