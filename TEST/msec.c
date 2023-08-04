#include<stdio.h>
#include<time.h>
void wait(int milliseconds)
{
	clock_t start = clock();
	while(1) if(clock() - start >= milliseconds) break;
}
int main()
{
	time_t now;
	clock_t milli;
	int waitMillSec = 2800, seconds, milliseconds = 0;
	struct tm * ptm;

	now = time(NULL);
	ptm = gmtime ( &now );
	printf("time before: %d:%d:%d:%d\n",ptm->tm_hour,ptm->tm_min,ptm->tm_sec, milliseconds );

	/* wait until next full second */
	while(now == time(NULL));

	milli = clock();
	/* DO SOMETHING HERE */
	/* for testing wait a user define period */
	wait(waitMillSec);
	milli = clock() - milli;

	/*create timestamp with milliseconds precision */
	seconds = milli/CLOCKS_PER_SEC;
	milliseconds = milli%CLOCKS_PER_SEC;
	now = now + seconds;
	ptm = gmtime( &now );
	printf("time after: %d:%d:%d:%d\n",ptm->tm_hour,ptm->tm_min,ptm->tm_sec, milliseconds );
	return 0;
}
