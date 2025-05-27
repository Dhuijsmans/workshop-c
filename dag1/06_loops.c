#include <stdio.h>

int main()
{
	// while loop
	int n = 15;
	int i = 0;
	while( i < n ) {
		printf("While iteration %d\n", i);
		i++;
	}


	// do while loop
	i = 16;
	do {
		printf("do while iteration %d\n", i);	
		i++;
	} while ( i < n );

	// for loop
	for( int i = 0; i < n; i++ ) {	
		printf("for iteration %d\n", i);
	}

	return 0;
}
