/* Demo for showig the returning of an array with the help of a pointer */

// returning array, collecct in pointer, display in array format with the help of pointer */
#include <stdio.h>

/* function to generate and return random numbers */
int * getInput( ) {
				int  r[10];
				int i;
				for ( i = 0; i < 10; ++i) {
								r[i] = i+1;
								printf( "r[%d] = %d\n", i, r[i]);
				}
				return r;
}

int main() {
				int *p;
				int i;
				p = getInput();

				for ( i = 0; i < 10; i++ ) {
								printf( "*(p + %d) : %d\n", i, *(p + i));
				}

				return 0;
}
