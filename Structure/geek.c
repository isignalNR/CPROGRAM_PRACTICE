#include <stdio.h> 

// Alignment requirements 
// (typical 32 bit machine) 

// char         1 byte 
// short int    2 bytes 
// int          4 bytes 
// double       8 bytes 

// structure A 
struct structa_t
{ 
				char        c; 
				short int   s; 
} a = {'k',2}; 

// structure B 
struct structb_t
{ 
				short int   s; 
				char        c; 
				int         i; 
}b = {2,'d',4};

// structure C 
struct structc_t
{ 
				char        c; 
				double      d; 
				int         s; 
}c = {'h', 2.3,4};

// structure D 
struct structd_t
{ 
				double      d; 
				int 				s;
				char        c; 
}d = { 3.4,2,'t'}; 
// structure E 
struct structe_t
{ 
				int         s; 
				char        c; 
				double      d; 
}e;

int main() 
{ 
				printf("Sizes\n");
				printf("sizeof(structa_t) = %d\n", sizeof(a)); 
				printf("sizeof(structb_t) = %d\n", sizeof(b)); 
				printf("sizeof(structc_t) = %d\n", sizeof(c)); 
				printf("sizeof(structd_t) = %d\n", sizeof(d)); 
				printf("sizeof(structe_t) = %d\n", sizeof(e)); 

				printf("Values\n");
				printf("struct a-> %u %u \n", &a.c, &a.s);
				printf("struct b-> %u %u %u\n", &b.s, &b.c, &b.i);
				printf("struct c-> %u %u %u\n", &c.c, &c.d, &c.s);
				printf("struct d-> %u %u %u \n", &d.d, &d.s, &d.c);
				printf("struct e-> %u %u %u \n", &e.s, &e.c, &e.d);

				return 0; 
}
