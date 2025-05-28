struct _node {
	struct _node *next;
	int data;
};

typedef struct _node Node;

Node *create_node(int data)
{
	// reserve some memory for it, fill in its fields and return the pointer;
}

void append(Node *list, int data) 
{
	// todo;
}

Node *exists(Node *list, int data)
{
	// returns a pointer to the node that holds int data if it exists or NULL if it doesn't
}

int pop(Node *list)
{
	// returns the data of the last node and removes it from the list
	//
}

void print_list(Node *list)
{
	// iterates over the list and prints its members
	//
}

int main(int argc, char *argv[])
{
	Node *linked_list create_node(5);
	append(linked_list, 6);
	append(linked_list, 7);
	Node *existing = exists(linked_list, 7);
	append(linked_list, 8);
	append(linked_list, 9);
	append(linked_list, 10);
	int removed = pop(linked_list);
	print_list(linked_list);
	print_list(existing);

	return 0;
}
