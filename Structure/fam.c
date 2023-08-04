#include <stdio.h>

struct student 
{ 
				int stud_id; 
				int name_len; 
				int struct_size; 
				char stud_name[]; 
}*s;
union test 
{ 
				int x; 
				char arr[13]; 
				int y; 
}; 

int main()
{
		printf("size of struct: %ld\n", sizeof(struct student));
		printf("%d\n", sizeof(union test)); 

//	s = (struct student*)malloc(sizeof(struct student));
	return 0;
}
