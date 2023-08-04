#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct STUDENT
{
	int stdNo;
	char stdName[5];
	char dep[3];
};


struct STUDENT s1 = { 123, "abc", "ece"};


int main()
{
	printf("%d %s %s\n", s1.stdNo, s1.stdName, s1.dep);

	struct STUDENT *stdptr = NULL;

	stdptr = (struct STUDENT*)malloc(sizeof(struct STUDENT));
	if(stdptr == NULL)
	{
			printf("No Memory Allocated\n");
			exit(0);
	}

	stdptr->stdNo = 234;
	strcpy(stdptr->stdName, "XYZ");
	strcpy(stdptr->dep, "CSE");

	printf("%d %s %s\n", stdptr->stdNo, stdptr->stdName,stdptr->dep);
	return 0;
}

