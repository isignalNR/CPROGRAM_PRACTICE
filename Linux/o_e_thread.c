/* Demo for Printing Odd and Even Numbers by Two Threads Alternatively */

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

//Thread Initializers
pthread_cond_t      condA  = PTHREAD_COND_INITIALIZER;
pthread_cond_t      condB  = PTHREAD_COND_INITIALIZER;
pthread_mutex_t     mutex = PTHREAD_MUTEX_INITIALIZER;

//Global Data Structure shared accross threadA and threadB
int totalNum = 0;

void *threadA()
{
				while(totalNum <= 10)
				{
								pthread_mutex_lock(&mutex);
								while (totalNum % 2 != 0)
												pthread_cond_wait(&condA, &mutex);
								pthread_mutex_unlock(&mutex);

								pthread_mutex_lock(&mutex);
								printf("A: %d\n", totalNum++);
								pthread_cond_signal(&condB);
								pthread_mutex_unlock(&mutex);

				}

				return 0;
}

void *threadB()
{

				while(totalNum<=10)
				{
								pthread_mutex_lock(&mutex);
								while (totalNum %2 == 0)
												pthread_cond_wait(&condB, &mutex);
								pthread_mutex_unlock(&mutex);


								pthread_mutex_lock(&mutex);
								printf("B: %d\n", totalNum++); 
								pthread_cond_signal(&condA);
								pthread_mutex_unlock(&mutex);
				}

				return 0;
}

int main()
{
				pthread_t thread1, thread2;

				pthread_create( &thread1, NULL, &threadA, NULL);
				pthread_create( &thread2, NULL, &threadB, NULL);

				pthread_join( thread1, NULL);
				pthread_join( thread2, NULL);

				exit(0);
}
