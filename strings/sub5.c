#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	 char *input = "Where#are/you@bhai###in#mumbai*adda!sample#dhum-haey", *search = "haey";

	 char *contain = (char*)malloc(7);

	 int i =0, j= 0, flag=0;

	 for(;*(input+i) !='\0';i++)
	 {
				flag = 0;
				if( (*(input+i) != ' ')||(*(input+i) =='\0'))
				{
						contain[j++] = input[i];
				}
				else
				{
						contain[j++] ='\0';
						j = 0;
				}
				printf("%s\n", contain);
				if(strcmp(contain, search)==0)
				{
						flag = 1;
						break;
				}
	 }
	 if(flag == 1)
			printf("Found the string\n");
	 else
	 {
			printf("String not Found\n");
	 		exit(0);
	 }
}	 

