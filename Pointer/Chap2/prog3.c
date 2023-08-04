#include <stdio.h>

void display(int *m);
void show(int **m);
int main()
{
		int i;
		int marks[] = {55, 65, 75, 76, 56, 78, 78, 90};

		for(i=0;i<=6;i++)
			//display(marks[i]);  // pass by value
			display(&marks[i]);
		return 0;
}

void display(int *n)
{
		show(&n);
}

void show(int **m)
{
	printf("%d\n", **m);
}


