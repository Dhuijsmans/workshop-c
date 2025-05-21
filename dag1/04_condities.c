#include <string.h>
#include <stdio.h>

int main()
{
	int a = 5;
	int b = 5; int c = 6;
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("c = %d\n",c);

	printf("a < b: %d\n", a < b);
	printf("a <= b: %d\n", a <= b);
	printf("a > b: %d\n", a > b);
	printf("a >= b: %d\n", a >= b);
	printf("a < c: %d\n", a < c);
	printf("a <= c %d\n", a <= c);
	printf("a > c %d\n", a > c);
	printf("a >= c %d\n", a >= c);

	return 0;
}
