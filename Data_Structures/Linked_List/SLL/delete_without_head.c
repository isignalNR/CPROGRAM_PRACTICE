void deleteNodeWithoutHead(struct Node* pos) 
{ 
				if (*pos == NULL) // If linked list is empty 
								return; 
				else { 
								struct Node* temp = pos->next; 
								// Copy data of the next node to current node 
								pos->data = pos->next->data;  
								// Perform conventional deletion 
								pos->next = pos->next->next;  
								free(temp); 
				} 
				return 0; 
}
