#include <stdio.h>

struct Node
{
	int data;
	struct Node *Next;
};

int main()
{
	struct Node s1,s2,s3, s4;
	struct Node *temp = &s1;

	s1.data = 10;
	s1.Next = &s2;
	s2.data = 20;
	s2.Next = &s3;
	s3.data = 30;
	s3.Next = &s4;
	s4.data = 40;
	s4.Next = NULL;

	for(temp;temp!=NULL;temp=temp->Next)
	{
					printf("Head-->%d\n", temp->data);
	}
	return 0;
}
