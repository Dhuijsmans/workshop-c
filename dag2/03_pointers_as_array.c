#include <stdio.h>

int memory_as_array[4048];

int main()
{
	int ptr = 4123;
	memory_as_array[ptr] = 3243;

