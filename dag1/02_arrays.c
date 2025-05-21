#include <stdio.h>

// You can ignore these functions for now
void print_int_array(int *array, size_t length)
{
	for(int i=0; i<length; i++) {
		printf("%d ",array[i]);
	}
	printf("\n");
}

// To be ignored
void print_2D_array(int matrix[3][3], size_t num_rows, size_t num_cols)
{
	for(int i=0; i<num_rows; i++) {
		print_int_array( matrix[i], num_cols );
	}
}

int main()
{
	int my_list[6] = { 23, 24, 25, 26, 27, 28 };
	
	print_int_array(my_list, sizeof(my_list) / sizeof(int));

	char my_buf[512] = "Hi there, this an arrays of characters, otherwise known as a string.\n";

	printf(my_buf);

	int boter_kaas_eieren[3][3] = { {0 , 1, 0}, {1,1,0}, {1,0,1} };

	print_2D_array( boter_kaas_eieren, 3, 3);

	return 0;
}
