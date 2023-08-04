#include <string.h>
#include <stdio.h>

char * createStr();
int main(){
				char a[20];
				strcpy(a,createStr()); //this will copy the returned value of createStr() into a[]
				printf("%s",a);
				return 0;
}

char * createStr() {

		/*		char char1= 'm';
				char char2= 'y';

				static char str[3];  
				str[0] = char1;
				str[1] = char2;
				str[2] = '\0';*/
			//	  static char str[20] = "my";
				char *p = malloc(4);
				p = "hello";
					    return p;

}
