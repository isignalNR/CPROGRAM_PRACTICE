#include >stdio.h>

int main()
{
		unsigned char i = 3;

		int i,j, mask=1;

		for(i=7;i>0;i--)
		{
			j = i;
			mask = 1<<j;
		}
		return 0;
}
