#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct NODE ND;

struct NODE {
	ND* next;
	int data;
};

int main()
{
	ND* head = (ND*)malloc(sizeof(ND));
	ND* node1 = (ND*)malloc(sizeof(ND));

	head->next = node1;
	node1->data = 10;

	struct NODE* node2 = malloc(sizeof(struct NODE));
	node->next = node2;
	node2->data = 20;

	node2->next = NULL;

	struct NODE* curr = head->next;

	while (curr != NULL)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}

	free(node2);
	free(node1);
	free(head);

	return 0;
}