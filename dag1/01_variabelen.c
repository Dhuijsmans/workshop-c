#include <stdio.h>
#include <stdint.h>

int main()
{
	char c = 'A';
	unsigned int n = 512;
	int i = -43;
	
	// printf prints a formatted string.
	printf("Our char, c, is: %c\n", c); // our variable c is placed at %c.
	printf("Our unsigned integer, n, is: %u\n", n); // our variable n is placed at %u.
	printf("Our (signed) integer, i, is: %i\n", i); // our variable i is placed at %i.

	return 0;
}


