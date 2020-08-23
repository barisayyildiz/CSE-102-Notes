#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

void printList(struct Node *n)
{
	while(n != NULL)
	{
		printf("%d\n", n->data);
		n = n->next;
	}
}



int main() 
{
	struct Node *head;
	struct Node *first;
	struct Node *second;

	head = (struct Node*)malloc(sizeof(struct Node));
	first = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));

	head->data = 7;
	head->next = first;,
	

	first->data = 2;
	first->next = second;

	second->data = 3;
	second->next = NULL;

	printList(head);




	return 0;

}