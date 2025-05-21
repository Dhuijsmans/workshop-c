#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int test_value(int value)
{
	return value < 5;
}

int main()
{
	int some_value = 3;
	int other_value = 6;
	// if statement
	if (  test_value(some_value) ) {
		printf("some_value is less than 5!\n");
	}
	else { // else statement

		printf("some_value is not less than 5!\n");
	}	
	
	if ( test_value(other_value) ) {
		printf("other_value is less than 5!\n");
	}
	else if ( other_value < 8 ) { // else if statement
		printf("other_value is at least less than 8\n");
	}
	else {
		printf("other_value 8 or higher\n");
	}

	// switch statement
	
	switch( some_value ) {
		case 0:
			printf( "my_value is 0!\n");
			break;
		case 1:
			printf( "my_value is 0!\n");
			break;
		case 2:
			printf( "my_value is 0!\n");
			break;
		case 3:
			printf( "my_value is 3!\n");
			printf("oops we forgot break statement\n");
		case 4:
			printf( "my values is 4\n");
			printf( "falling through\n");
		case 5:
			printf( "my values is 5\n");
			printf( "falling through\n");
		case 6:
			printf( "my values is 6\n");
			printf( "falling through\n");
		case 7:	
			printf( "my values is 7\n");
			printf( "falling through\n");
		default:
			printf( "my_value is something else\n" );
	}

	return 0;
}

