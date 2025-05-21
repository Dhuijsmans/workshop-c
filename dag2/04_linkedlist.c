#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct _node {
	struct _node *next;
	struct _node *prev;
	char name[64];
} Node;

Node *add_name(Node *list, char *name)
{
	while( list->next ) {
		list = list->next;
	}
	Node *new_node = (Node *) malloc(sizeof(Node));
	new_node->prev = list;
	new_node->next = NULL;
	list->next = new_node;
	strncpy(new_node->name, name, 64);
	list->name[63] = '\0';

	return new_node;
}

void print_list(Node *list)
{
	Node *curr;
	for( curr = list; curr; curr = curr->next ) {
		printf("Name is: %s\n",curr->name);
	}

	return;
}

int main(int argc, char *argv[])
{
	Node *list = (Node *) malloc(sizeof(Node));
	list->next = NULL;
	list->prev = NULL;
	strncpy(list->name, "Hans", 64);
	list->name[63] = '\0';

	add_name(list, "Peter");

	print_list(list);

	return 0;
}


