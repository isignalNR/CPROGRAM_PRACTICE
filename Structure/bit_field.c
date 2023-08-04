#include <stdio.h>

//typedef struct bit_field
typedef union bit_field
{
				unsigned char hours : 5;
				unsigned char mins : 6;
				unsigned char secs : 2;
}t_t;

int main()
{
		t_t alarm;// = {2,3,50};
		alarm.secs = 50;

//		alarm.hours = 22;
//		alarm.mins  = 12;
//		alarm.secs  = 20;

		printf("%d %d %d\n", alarm.hours, alarm.mins, alarm.secs);
		printf("Size of bit fields:%d\n", sizeof(t_t));
		t_t *p = &alarm;

//		printf("%p %p %p\n", &alarm.hours, &alarm.mins, &alarm.secs);
		return 0;
}


