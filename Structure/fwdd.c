#include<stdio.h>
#include<stdlib.h>

struct foo; // forward declaration

struct bar
{
				int a;
				struct bar *next;
				struct foo ch;
};

struct foo
{
				struct bar *n;
				struct foo *nx;
};


int main()
{
				struct bar p;
				return(0);
}
