#include <stdio.h>
#include <string.h>

void main()
{
		typedef enum{false, true} boolean;

		const char yes='Y';
		const char no='N';
		char response;
		char item[25];
		int temp=0;
		boolean input_error=false;

		printf("What is the temperature outside today? ");
		scanf("%d", &temp);
		fflush(stdin);

		printf("Is it raining outside? Answer Y (yes) or N (no) ");
		scanf("%c", &response);
		fflush(stdin);

		if(response==yes)
					if(temp < 60)
												strcpy(item, "raincoat and umbrella");
								else
												strcpy(item, "umbrella");
				else
								if(response==no)
												if(temp < 60)
																strcpy(item, "overcoat");
												else
																strcpy(item, "jacket");
								else
												input_error = true;

				if(input_error)
								printf("INPUT ERROR - your response must be Y or N.\n");
				else
								printf("Before you leave the house take your %s.\n", item);
				getchar();
}
