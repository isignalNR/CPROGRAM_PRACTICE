#include <stdio.h>
#include <string.h>
int main()
{
				char s1[20] = "BeginnersBook";
				char s2[20] = "BeginnersBook.COM";
				//char s2[20] = "BeginnersBook";
				if (strcmp(s1, s2) ==0)
				{
								printf("string 1 and string 2 are equal");
				}else
				{
								printf("string 1 and 2 are different");
				}
				if (strncmp(s1, s2, 8) ==0)
				{
								printf("string 1 and string 2 are equal");
				}else
				{
								printf("string 1 and 2 are different");
				}
				return 0;
}
