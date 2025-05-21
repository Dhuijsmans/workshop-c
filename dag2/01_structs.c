#include <stdio.h>
#include <string.h>

struct shopping_item {
	int price; // price in cents
	char name[60];
};

void print_shopping_item(struct shopping_item item)
{
	float price = (float) item.price;
	float price_in_euros = price / 100.0;
	printf("Got item %s with price %.2f\n", item.name, price_in_euros);
}

int main(int argc, char *argv[])
{
	struct shopping_item banana;
	banana.price = 154;
	strncpy(banana.name,"Banaan",59);

	print_shopping_item(banana);
	return 0;
}
