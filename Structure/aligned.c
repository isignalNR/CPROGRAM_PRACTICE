#include <stdio.h>

int main( )
{
				struct data
				{
								int a    __attribute__( ( aligned ( 2 ) ) ) ;
								char ch  __attribute__( ( aligned ( 1 ) ) ) ;
								float s  __attribute__( ( aligned ( 4 ) ) ) ;    
				} ; 
				struct data e ;
				printf ( "\n%u %u %u", &e.a, &e.ch, &e.s ) ;
				printf ( "\n%d", sizeof ( e ) ) ;
				return 0 ;
}
