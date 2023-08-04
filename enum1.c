#include <stdio.h>
enum result {failed=10, passed=11, check='a'}; 

int fun(enum passed)
{
	return failed;
}
  
int main()  { 
//enum state  {working, failed}; 
//printf("%x\n", &state);

int k = fun(passed);
printf("%d\n", k);
return 0;
}

