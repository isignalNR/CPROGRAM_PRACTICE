#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Assumes string has not been previously malloced
// important, requires char** not char*
int new_string(char** string, int size)
{
				(*string) = (char *) malloc (size * sizeof (char));

				if( (*string) == NULL ) 
								return 0; // malloc failed, return false

				return 1; // success, return true
}

// Here it is ok to pass the char array by value
int make_random_string(char* string, int size)
{
				int i;
				for (i=0; i < size; ++i)
								string[i]=rand()%26+'a';
				string[size-1]='\0'; // always null terminate a string

				return 1; //success, return true
}

// Main entry point
int main(void)
{
				int n = 5;  // default size of string to malloc
				char *string; // the string to create

				srand ( time(NULL) ); // seed the rng

				// Allocate a new string 
				if( !new_string(&string, n) )
				{
								printf("Failed to allocate the string\n");
								exit(1);
				}

				// Make a random string
				if( !make_random_string(string, n) )
				{
								printf("Failed to make a random string\n");
								exit(1);
				}

				// print the string
				printf ("Random string: %s\n",string);

				free (string); // memory management

				return 0;
}
