/*Demo of Priority Queue using Doubly linked list */

#include <stdio.h>
#include <stdlib.h>

// Linked List Node 
struct Node { 
				int info; 
				int priority; 
				struct Node *prev, *next; 
}; 

typedef struct Node Node;
// Function to insert a new Node 
void push(Node** fr, Node** rr, int n, int p) 
{ 
				Node* news = (Node*)malloc(sizeof(Node)); 
				news->info = n; 
				news->priority = p; 

				// If linked list is empty 
				if (*fr == NULL) { 
								*fr = news; 
								*rr = news; 
								news->next = NULL; 
				} 
				else { 
								// If p is less than or equal front 
								// node's priority, then insert at 
								// the front. 
								if (p <= (*fr)->priority) { 
												news->next = *fr; 
												(*fr)->prev = news->next; 
												*fr = news; 
								} 

								// If p is more rear node's priority,  
								// then insert after the rear. 
								else if (p > (*rr)->priority) { 
												news->next = NULL; 
												(*rr)->next = news; 
												news->prev = (*rr)->next; 
												*rr = news; 
								} 

								// Handle other cases 
								else { 

												// Find position where we need to 
												// insert. 
												Node* start = (*fr)->next; 
												while (start->priority > p)  
																start = start->next;             
												(start->prev)->next = news; 
												news->next = start->prev; 
												news->prev = (start->prev)->next; 
												start->prev = news->next; 
								} 
				} 
} 

// Return the value at rear 
int peek(Node *fr) 
{ 
				return fr->info; 
} 

int isEmpty(Node *fr) 
{ 
				return (fr == NULL); 
} 

// Removes the element with the 
// least priority value form the list 
int pop(Node** fr, Node** rr) 
{ 
				Node* temp = *fr; 
				int res = temp->info; 
				(*fr) = (*fr)->next; 
				free(temp); 
				if (*fr == NULL)  
								*rr = NULL; 
				return res; 
} 

// Diver code 
int main() 
{ 
				Node *front = NULL, *rear = NULL; 
				push(&front, &rear, 2, 3); 
				push(&front, &rear, 3, 4); 
				push(&front, &rear, 5, 6); 
//				push(&front, &rear, 6, 7); 
				push(&front, &rear, 4, 5); 
//				push(&front, &rear, 1, 2); 

				printf("popped item: %d\n", pop(&front, &rear)); 
				printf("Peek: %d\n", peek(front)); 

				return 0; 
} 
