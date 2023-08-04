#include <stdio.h>

int main()
{
		int c = 10, d = 20;
		int y = c ^ d;
		printf("%d\n", y);

		int z = y ^ c;
		printf("%d\n", z);
		return 0;
}
