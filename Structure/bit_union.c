#include<stdio.h>
#include <stdlib.h>
union Point
{
				unsigned int x:4;
				unsigned int y:4;
				int res;
};

int main()
{
				union  Point pt, *p;

				pt.x = 2;
				pt.y = 3;
				pt.res = pt.y;
				p = &pt;
	//			printf("%p %p %p\n", &p->x, &p->y, &p->res);
				printf("\n The value of res = %d\n" , pt.res);
				printf("\n The value of res = %d\n" , p->res);
				p = (union Point*)malloc(sizeof(union Point));
				p->x = 20;
				p->y = 32;
				p->res = 33;
				printf("\n %d %d %d\n" , p->x, p->y, p->res);

				return 0;
}
//
