// C program to demonstrate importance 
// of typedef over #define for data types 
#include <stdio.h> 
typedef char* ptr; 
#define PTR char* 
int main() 
{ 
				ptr a, b, c; 
				PTR x, y, z; 
				printf("sizeof a:%u\n" ,sizeof(a) ); 
				printf("sizeof b:%u\n" ,sizeof(b) ); 
				printf("sizeof c:%u\n" ,sizeof(c) ); 
				printf("sizeof x:%u\n" ,sizeof(x) ); 
				printf("sizeof y:%u\n" ,sizeof(y) ); 
				printf("sizeof z:%u\n" ,sizeof(z) ); 
				return 0; 
} 

