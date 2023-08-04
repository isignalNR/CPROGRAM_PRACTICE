#include <stdio.h>

int Div_by_8(int n) 
{ 
	return (((n >> 3) << 3) == n); 
} 

// Driver program 
int main() 
{ 
	int n = 72; 
	if (Div_by_8(n)) 
				printf("YES\n");
	else
				printf("NO\n");
				return 0; 
}
