#include <stdint.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	uint32_t variable = 0x01020304;
	printf("0x0%x\n",variable);
	uint8_t *ptr = (uint8_t *) &variable;
	(*ptr)++;
	printf("0x0%x\n",variable);

	return 0;
}
