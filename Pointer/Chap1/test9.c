#include <stdio.h>

int main()
{
	int a = 10, *j;
	void *k;
	//j = k = &a;
//	j++;
	k = &a;

	k++;
	
	printf("%u %d \n", j, (int)*k);
	return 0;
}
