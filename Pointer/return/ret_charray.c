#include <stdio.h>
// for malloc
#include <stdlib.h>

// you need the prototype
char *substring(int i,int j,char *ch);

int main(void /* std compliance */)
{
				int i=0,j=2;
				char s[]="String";
				char *test;
				// s points to the first char, S
				// *s "is" the first char, S
				test=substring(i,j,s); // so s only is ok
				// if test == NULL, failed, give up
				printf("%s\n",test);
				free(test); // you should free it
				return 0;
}


char *substring(int i,int j,char *ch)
{
				int k=0;
				// avoid calc same things several time
				int n = j-i+1; 
				char *ch1;
				// you can omit casting - and sizeof(char) := 1
				ch1=malloc(n*sizeof(char));
				// if (!ch1) error...; return NULL;

				// any kind of check missing:
				// are i, j ok? 
				// is n > 0... ch[i] is "inside" the string?...
				while(k<n)
				{   
								ch1[k]=ch[i];
								i++;k++;
				}   

				return ch1;
}
