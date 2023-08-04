#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char * first()
{
				char * word = malloc(sizeof(char) * 10); // works properly
				word[0] = 'a';
				word[1] = 'b';
				word[2] = '\0';
				return word;
}

char * second ()
{
				char * word = malloc(sizeof(char) * 10);
				printf("%p\n", word);
				free(word);
				word = "hk"; // not a malloced address, "ab" is at different address pointer to string literal
				printf("%p\n", word);
				//strcpy(word, "ab");
				return word;
}

int main ()
{
				char * out = first();
				printf("%s\n", out);
				free(out);
				out = second();
				printf("%s\n", out);
				//free(out);
				return 0;
}
