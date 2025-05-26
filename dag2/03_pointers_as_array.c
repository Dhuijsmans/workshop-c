#include <stdio.h>

int memory_as_array[4048];

int main()
{
	// int *ptr = malloc(sizeof(int));
	int ptr = 2123;

	// *ptr = 3243;
	memory_as_array[ptr] = 3243;

	return 0;
}
