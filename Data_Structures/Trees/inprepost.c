/*
 * C Program to Construct a Tree & Perform Insertion, Deletion, Display 
 */ 

#include <stdio.h>
#include <stdlib.h>

struct btnode
{
				int value;
				struct btnode *l;
				struct btnode *r;
}*root = NULL;

// Function Prototype
void printoutin(struct btnode*);
void printoutpre(struct btnode *tree);
void printoutpost(struct btnode *tree);
struct btnode* newnode(int);

int main()
{
				root=newnode(50);
				root->l=newnode(20);
				root->r=newnode(30);
				root->l->l=newnode(70);
				root->l->r=newnode(80);
				root->l->r->r=newnode(60);
				root->l->l->l=newnode(10);
				root->l->l->r=newnode(40);
				printf("tree elements are\n");
				printf("\nDISPLAYED IN INORDER\n");
				printoutin(root);
				printf("\n");
				printoutpre(root);
				printf("\n");
				printoutpost(root);
				printf("\n");
				return 0;
}

// Create a node
struct btnode* newnode(int value)
{
				struct btnode* node = (struct btnode*)malloc(sizeof(struct btnode));
				node->value = value;
				node->l = NULL;
				node->r = NULL;
				return(node);
}

// to display the tree in inorder
void printoutin(struct btnode *tree)
{
				if (tree->l)
								printoutin(tree->l);
				printf("%d->", tree->value);
				if (tree->r)
								printoutin(tree->r);
}
void printoutpre(struct btnode *tree)
{
				printf("%d->", tree->value);
				if (tree->l)
								printoutpre(tree->l);
				if (tree->r)
								printoutpre(tree->r);
}
void printoutpost(struct btnode *tree)
{
				if (tree->l)
								printoutpost(tree->l);
				if (tree->r)
								printoutpost(tree->r);
				printf("%d->", tree->value);
}
