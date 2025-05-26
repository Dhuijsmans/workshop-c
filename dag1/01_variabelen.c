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

	printf("Now let's print some sizes:\n");
	printf("Size of char: %lu\n",sizeof(char));	
	printf("Size of short int: %lu\n",sizeof(short int));	
	printf("Size of int: %lu\n",sizeof(int));	
	printf("Size of long long int: %lu\n",sizeof(long long int));	


	printf("Now let's do some typecasting.\n");
	float a = 2.5;
	printf("When typecasting a float with value 2.5 as an integer: %d\n", (int) a);
	long long int x = 0x100000003;
	printf("When printing a 64 bits integer with value\t0x100000003 we get: %lli\n", x);
	printf("when typecasting a 64 bits integer with value\t0x100000003 as a 32 bits integer we get: %d\n", (int) x);
	return 0;
}


