// xor_linked_list.h
#include <iostream>

struct XorNode {
				int id;
				XorNode *link;
};

class XorLinkedList {
				public:
								XorNode *head;
								XorNode *tail;

								XorNode *nextNode(XorNode *node, XorNode *prevNode) {
												return ((XorNode *) ((int) node->link ^ (int) prevNode));
								}

								void deleteList(void) {
												XorNode *prev, *current;
												prev    = NULL;
												current = head;

												while (current) {
																std::cout << "Node removed: " << current->id << std::endl;
																current->link = nextNode(current, prev);

																if (prev)
																				delete prev;

																if (!current->link) {
																				delete current;
																				current = NULL;

																				continue;
																}

																prev    = current;
																current = current->link;
												}

												std::cout << std::endl;
								}

								void insertAfter(XorNode *newNode, int id) {
												XorNode *prev, *current, *next;

												prev    = NULL;
												current = head;

												while (current) {
																next = nextNode(current, prev);

																if (current->id == id) {
																				// Fix the current "next" node
																				if (next)
																								next->link = (XorNode *) ((int) next->link ^ (int) current ^ (int) newNode);
																				// Fix current node
																				current->link = (XorNode *) ((int) newNode ^ (int) next ^ (int) current->link);

																				// Fix new node
																				newNode->link = (XorNode *) ((int) current ^ (int) next);

																				break;
																}

																prev    = current;
																current = next;
												}
								}

								void traverse(XorNode *root) {
												XorNode *current, *prev, *next;

												prev    = NULL;
												current = root;

												while (current) {
																std::cout << "Node found: " << current->id << std::endl;

																next    = nextNode(current, prev);
																prev    = current;
																current = next;
												}

												std::cout << std::endl;
								}

								void insert(int id) {
												XorNode *newNode = new XorNode;

												if (!newNode) {
																std::cerr << "[ERROR] Failed to insert new node." << std::endl;
																return;
												}

												newNode->id = id;
												newNode->link = NULL;

												std::cout << "Node added: " << newNode->id << std::endl;

												if (!head)
																head = tail = newNode;
												else {
																insertAfter(newNode, tail->id);
																tail = newNode;
												}

												return;
								}
};
