// C++ Program to print doubly  
// linked list in reverse order  
#include <bits/stdc++.h> 
using namespace std; 

// Doubly linked list node 
struct Node { 
				int data; 
				struct Node* next; 
				struct Node* prev; 
}; 

// Function to print nodes of Doubly  
// Linked List in reverse order  
void reversePrint(struct Node** head_ref) 
{ 
				struct Node* tail = *head_ref; 

				// Traversing till tail of the linked list 
				while (tail->next != NULL) { 
								tail = tail->next; 
				} 

				// Traversing linked list from tail 
				// and printing the node->data 
				while (tail != *head_ref) { 
								cout << tail->data << " "; 
								tail = tail->prev; 
				} 
				cout << tail->data << endl; 
} 

/* UTILITY FUNCTIONS */
// Function to insert a node at the  
// beginging of the Doubly Linked List  
void push(struct Node** head_ref, int new_data) 
{ 
				// allocate node  
				struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 

				// put in the data  
				new_node->data = new_data; 

				// since we are adding at the begining,  
				// prev is always NULL  
				new_node->prev = NULL; 

				// link the old list off the new node  
				new_node->next = (*head_ref); 

				// change prev of head node to new node  
				if ((*head_ref) != NULL) 
								(*head_ref)->prev = new_node; 

				// move the head to point to the new node  
				(*head_ref) = new_node; 
} 

// Driver Code 
int main() 
{ 
				// Start with the empty list  
				struct Node* head = NULL; 

				// Let us create a sorted linked list 
				// to test the functions  
				// Created linked list will be 10->8->4->2  
				push(&head, 2); 
				push(&head, 4); 
				push(&head, 8); 
				push(&head, 10); 

				cout << "Linked List elements in reverse order : " << endl; 

				reversePrint(&head); 

				return 0; 
} 
