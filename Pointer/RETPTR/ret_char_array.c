#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//char* ret_char_array(char *a)
char* ret_char_array(char *c)
{
	 char *a;
	 a = (char*)malloc(5*sizeof(char));
	 printf("%p\n", a);
	 strcpy(a,"Hello");
	 c = a;
	 //free(a);
	 return c;

	 //a = "Hello";  // this works, try index'ed assignment
	/* a[0] = 'H';
	 a[1] = 'E';
	 a[2] = 'L';
	 a[3] = 'L';
	 a[4] = 'O';*/
//	 free(a);
	// return a;
}

int main()
{
	 char *r;
	 r = ret_char_array(r);
	 printf("%p %s\n", r, r);
	 // try mem leak testing
	 free(r);
	 return 0;
}
