#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node *node newNode(int param)
{
	struct Node *node = (struct node*)malloc(sizeof(struct Node));

	node->data = param;
	node->left = NULL;
	node->right = NULL;
	return node;

};

int main() 
{
	struct Node *root = newNode(1);

	root->left = newNode(2);
	root->right = newNode(3);

	root->left->left = newNode(4);


	return 0;
}