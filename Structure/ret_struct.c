#include <stdio.h>
struct student
{
				char name[50];
				int age;
};

// function prototype
struct student *getInformation();

int main()
{
				struct student *s;

				s = getInformation();

				printf("\nDisplaying information\n");
				printf("Name: %s", s->name);
				printf("\nRoll: %d", s->age);
				printf("\n");

				return 0;
}
struct student *getInformation() 
{
				printf("Getting structure: Inside function\n");
				struct student s1;

				printf("Enter name:");
				scanf ("%[^\n]%*c", s1.name);

				printf("Enter age:");
				scanf("%d", &s1.age);

				return &s1;
}
