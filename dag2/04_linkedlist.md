Linked lists is een datastructuur die gebruikt wordt om reeksen variabelen in op te slaan.
Een linked list bestaat uit 'nodes' met de volgende structuur:

```c
struct node {
    struct node *next;
    int data;
}
```

Hierboven staat een node die gebruikt kan worden om een linked list te maken die reeksen integers opslaat.
Deze heeft twee members:
 1. `struct node *next` een pointer naar de volgende `struct node`.
 2. `int data` een stukje waar we de daadwerkelijke data opslaan, in dit geval slaan we integers op.

Doorgaans werken we volledig met pointers als we met linked lists werken, dit is omdat we de nodes in de heap opslaan, dat betekent dat de variabelen dus niet lokaal in de functie (op de stack bestaan).
Om een node aan te maken kan je de volgende code gebruiken:

```c
struct node *create_node(int data)
{
    struct node *my_node = malloc(sizeof(struct node));
    (*my_node).next = NULL;
    (*my_node).data = data;
    return my_node;
} 
```

Omdat structs vaak op de heap bestaan en telkens `(*struct).member` erg lelijke code geeft, kan je de `->` operator gebruiken.
`struct->member` is een alias voor `(*struct).member`

De volgende code zou je kunnen gebruiken om een linked list zoals het voorbeeld hierboven uit te printen:

```c
void print_list(struct node *lst)
{
    while( lst ) {
        printf("%d\n",lst->data);
        lst = lst->next;
    }
}
```
