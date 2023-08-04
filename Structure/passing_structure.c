#include <stdio.h>
struct student
{
				char name[50];
				int age;
				int number;
};

// function prototype
void display(struct student s);
void display1(struct student *s);

int main()
{
				struct student s1;

				printf("Enter name:");
				scanf ("%[^\n]%*c", s1.name);

				printf("Enter age:");
				scanf("%d", &s1.age);

				printf("Enter number:");
				scanf("%d", &s1.number);

				display(s1);   // passing structure as an argument
				display1(&s1);   // passing structure as an argument

				return 0;
}
void display(struct student s) 
{
				printf("\ndisplay1 information\n");
				printf("Name: %s", s.name);
				printf("\nRoll: %d", s.age);
				printf("\nRoll: %d", s.number);
				printf("\n");
}

void display1(struct student *s) 
{
				printf("\nDisplaying information\n");
				printf("Name: %s", s->name);
				printf("\nRoll: %d", s->age);
				printf("\nRoll: %d", s->number);
				printf("\n");
}
