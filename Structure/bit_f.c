#include <stdio.h>
struct S {
				// will usually occupy 2 bytes:
				// 3 bits: value of b1
				// 5 bits: unused
				// 6 bits: value of b2
				// 2 bits: value of b3
				unsigned char b1 : 3;
				unsigned char :0; // start a new byte
				unsigned char b2 : 6;
				unsigned char b3 : 2;
}a = {1,2};


int main()
{
		printf("size of struct: %d\n", sizeof(a));
		
		printf("%d %d %d\n", a.b1,a.b2, a.b3); 
		a.b3 = 10;
		printf("%d %d %d\n", a.b1,a.b2, a.b3); 
		//scanf("%d\n", &a.b1);
		return 0;
}
		


