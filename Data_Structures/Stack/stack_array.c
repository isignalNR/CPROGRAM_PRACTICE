#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 5

void push(int item, int *top, int s[])
{
	if(*top == STACK_SIZE -1)
	{
		printf("Stack oveflow\n");
//		return 0;
	}
	/* increment top and insert the item */
	s[++(*top)] = item;
}

int pop(int *top, int s[])
{
	int item_deleted;
	if(*top == -1)
	{
		printf("Stack is Empty\n");
		return 0;
	}
	/*obtain the top most element and change the position of the top item */
	item_deleted = s[(*top)--];

	/*send the item deleted to the calling function */
	return item_deleted;
}

void display(int *top, int s[])
{
	int i;
	if(*top == -1)
	{
		printf("Stack is Empty\n");
//		return 0;
	}
	/*display the content of the stack*/
	for(i=0;i<*top;i++)
	{
		printf("%d  ", s[i]);
	}
}

int main()
{
	int top;
	int s[10];
	int item;
	int item_deleted;
	int choice;

	top = -1;

	for(;;)
	{
		printf("=== STACK OPERATION\n");
		printf("\n1.Push");
		printf("\n2.Pop");
		printf("\n3.Display");
		printf("\n4.Exit");
		printf("Enter the choice\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
						printf("Enter the item to be inserted\n");
						scanf("%d", &item);
						push(item, &top, s);
						break;
			case 2: item_deleted = pop(&top, s);
							if(item_deleted == 0)printf("Stack is Empty\n");
							else
								printf("Item Deleted = %d\n", item_deleted);
							break;
			case 3:display(&top, s);
						 break;
			default:
						 exit(0);
		}//switch end
	}// for end
} // main end
