#include <stdio.h>

struct sData
{
				unsigned int a: 2;
				unsigned int b: 2;
				unsigned int c: 2;
};


int main()
{
				struct sData data;


				printf("Sizeof of data.a =  %d", sizeof(data.a));

				return 0;
}
