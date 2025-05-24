#include <stdio.h>

struct example {
	char a;
	int b;
};

int main()
{
	struct example ex;
	printf("Size of struct is %d\n", sizeof(ex));
	printf("Size of char and int togeter is: %d\n", (sizeof(ex.a) + sizeof(ex.b)));	


	return 0;
}
