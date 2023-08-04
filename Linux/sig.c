/* signal example */
#include <stdio.h> 
#include <signal.h> /* signal, raise, sig_atomic_t */
 
void my_handler (int param)
{
					printf (" Signal raised by pressing Ctrl+C.\n");
}
 
int main ()
{
					void (*prev_handler)(int);
						
						prev_handler = signal (SIGINT, my_handler);
							
							while(1)	
												{
																	//Do some stuff, Wait to signal arise
																	}
								
								return 0;
}
