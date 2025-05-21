#include <stdio.h>


int main(int argc, char *argv[])
{
	int array[6] = { 1, 2 , 3, 4, 5 , 6 };

	printf("%p %p %p %p %p %p\n", &(array[0]) , &(array[1]), &(array[2]),&(array[3]),&(array[4]),&(array[5]));

	return 0;
}
