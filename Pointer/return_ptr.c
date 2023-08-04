#include<stdio.h>
#include <stdlib.h>
int *fun();
int main()
{
				int *ptr;
				ptr=fun();
				printf("%d\n",*ptr);
				printf("%d %p %p\n",*ptr, ptr, &ptr);
			//	free(point);
				return 0;

}
int *fun()
{
				static int *point;
				point = (int*)malloc(10);
				*point=12;  
				return point;
}
