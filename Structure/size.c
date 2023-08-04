#include <stdio.h>    

struct employee
{
				char name[30];  
				int id;
};

int main()
{
	struct employee e1;      
	printf("%d %d %d\n", sizeof(e1.id), sizeof(e1.name), sizeof(e1));
	printf("%u %u\n",&e1.name, &e1.id);
	return(0);
}
