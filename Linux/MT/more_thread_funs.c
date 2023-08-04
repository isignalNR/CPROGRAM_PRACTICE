#include<stdio.h>
#include<pthread.h>

pthread_key_t keyN;
void* thfun(int* val){

				pthread_t thid = pthread_self();
				int n = (int)*val;
				printf("thid: %ld, number: %d\n", thid, n);
				pthread_setspecific(keyN, &n);
				while(n<20){
								n = n+2;
								pthread_setspecific(keyN, &n);
								printf("thid: %ld, number: %d\n", thid, n);
				}

				return NULL;
}

int main(int argc, char* argv[]){

				pthread_t thid1, thid2;
				int x = 1;
				int y = 2;

				pthread_key_create(&keyN, NULL);
				pthread_create(&thid1, NULL, &thfun, &x);
				pthread_create(&thid1, NULL, &thfun, &y);

				int res;
				pthread_join(&thid1, &res);
				pthread_join(&thid2, &res);
				return 0;
}
