#include <stdio.h>


extern void _exit(register int);

int _start(){
	printf(“Junk without main\n”);
	_exit(0);
}
