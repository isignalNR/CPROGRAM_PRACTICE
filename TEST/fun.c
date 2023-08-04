#include <stdio.h>
#include <time.h>

//void fun();
void fun()
{
	printf("hello\n");
}

int main()
{
				double time_spent = 0.0;
				clock_t begin = clock();
				// do some stuff here
				//  sleep(3);
				fun();
				clock_t end = clock();
				// calculate elapsed time by finding difference (end - begin) and
				// dividing the difference by CLOCKS_PER_SEC to convert to seconds
				time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
				printf("Time elpased is %f seconds\n", time_spent);
	return 0;
}

