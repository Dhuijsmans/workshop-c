
# Loops

Loops werken grotendeels hetzelfde als in andere talen.
Wel is de for loop in C iets anders dan in bijvoorbeeld Python.
In C heeft een for-loop de volgende structuur:

```c
for( <INIT> ; <CONDITIE> ; <END OF ITERATION> ) {
    <code line 1>;
    <code line 2>;
}
```

For example:

```c
for( int i = 0; i < n ; i++ ) {
    array[i]++;
    printf("Incremented array at index %d\n", i);
}
```

This is equivalent to the following while loop:

```c
int i = 0;
while( i < n ) {
    array[i]++;
    printf("Incremented array at index %d\n", i);
    i++;
}
```

Meestal worden for loops in code op deze manier gebruikt, met een iterator i of j die een array afwerkt, maar dat hoeft niet.
Zo hebben mensen complete one-liner programmas in for-loops verwerkt voor challenges, of linked list traversals met een for loop gedaan, later daar meer over, maar hier alvast een voorbeeldje daarvan:

```c
Node *curr;
for( curr = list; curr; curr = curr->next ) {
    printf("Value: %d\n", curr->data);
}
```

# Assignment

Pick an assignment you want to do:
- Medium: Use a loop to reverse an array of integers.
- Hard: Use loops of choice to print all palindromes in a sentence.
- Harder: Use loops of choice to print all palindromes in a sentence (case insensitive).


