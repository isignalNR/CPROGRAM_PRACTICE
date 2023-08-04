// main.cpp

#include <iostream>
#include <cstdlib>
#include "xor_linked_list.h"

int main(int argc, char *argv[]) {
				XorLinkedList *list = new XorLinkedList;

				int nodeCount;

				if (argc < 2) {
								std::cerr << "Usage: " << argv[0] <<  " <nodes>" << std::endl;
								return 1;
				}

				nodeCount = atoi(argv[1]);

				std::cout << "# Adding " << nodeCount << " nodes to list" << std::endl;

				for (int i = 0; i < nodeCount; i++)
								list->insert(i);

				std::cout << std::endl;

				std::cout << "# Forward traversal" << std::endl;
				list->traverse(list->head);

				std::cout << "# Backward traversal" << std::endl;
				list->traverse(list->tail);

				std::cout << "# Removing nodes from list" << std::endl;
				list->deleteList();

				delete list;
				list = NULL;

				return 0;
}
