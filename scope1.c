#include <stdio.h>
int main() {
				int *p;
				{
								int x = 5; 
				printf("%x %d\n", p, *p);
								p = &x;
				printf("%x %d\n", p, *p);
				}
				int y = *p;
				printf("%x %d\n", p, *p);

				printf("%x %d\n", p, *p);
												return 0;
}
