//#define _BSD_SOURCE 1
#include <stdio.h>
#include <time.h>   // clock_gettime, CLOCK_REALTIME
#include <unistd.h> // sleep

int main(void) {
				struct timespec ts1, ts2;
				clock_gettime(CLOCK_REALTIME, &ts1);

				sleep(2);

				clock_gettime(CLOCK_REALTIME, &ts2);
				if (ts2.tv_nsec < ts1.tv_nsec) {
								ts2.tv_nsec += 1000000000;
								ts2.tv_sec--;
				}

				printf("%ld.%09ld\n", (long)(ts2.tv_sec - ts1.tv_sec),
												ts2.tv_nsec - ts1.tv_nsec);

				return 0;
}
