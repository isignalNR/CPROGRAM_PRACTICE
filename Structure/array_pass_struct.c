#include <stdio.h>

struct frogs 
{
				int num_eyes;
				int num_legs;
}s[3]; //three of em

void build_frogs(struct frogs  *f, int n) //Pass pointer to struct frogs
{
				int i;
				int eyes[3] = {3,4,5}; //Use these to fill our structs
				int legs[3] = {5,6,7};

				for(i=0; i < n; i++) 
				{
								f->num_eyes = eyes[i];
								f->num_legs = legs[i];
								f++;        //pointer address is array???????
				}            //So we should be able to do this!!
}

void print_frogs(struct frogs *f, int n) //See above
{
				int i;
				for(i=0; i < n; i++) 
				{
								printf("Num eyes  : %d\n", f->num_eyes);
								printf("Num legs  : %d\n", f->num_legs);

								f++;
				}
}

int main(void) 
{
				build_frogs(s, 3); //Pass address of struct
				print_frogs(s,3);

				return(0);
}
