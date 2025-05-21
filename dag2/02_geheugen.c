#include <stdio.h>
#include <stdlib.h>

void frame5()
{
	int my_number = 5;
	printf("address of variable in frame 5: %p\n", &my_number);
}

void frame4()
{
	int my_number = 5;
	printf("address of variable in frame 4: %p\n", &my_number);
	frame5();
}

void frame3()
{
	int my_number = 5;
	printf("address of variable in frame 3: %p\n", &my_number);
	frame4();
}

void frame2()
{
	int my_number = 5;
	printf("address of variable in frame 2: %p\n", &my_number);
	frame3();
}

void frame1()
{
	int my_number = 5;
	printf("address of variable in frame 1: %p\n", &my_number);
	frame2();
}

int main(int argc, char *argv[])
{
	// Show how stack grows
	frame1();

	// Show how heap is used
	char *my_buf = malloc(512);
	char *my_buf2 = malloc(512);
	printf("address of buffer1 on heap: %p\n", my_buf);
	printf("address of buffer2 on heap: %p\n", my_buf2);

	return 0;
}
