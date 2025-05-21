#include <string.h>


void g()
{
	printf("We zijn nu in functie g\n");
	printf("We verlaten functie g\n");

}
void f()
{
	printf("We zijn nu in functie f\n");
	g();

	printf("We verlaten nu functie f\n");
}

int optellen(int a, int b)
{
	printf("We zijn nu in functie 'optellen', hier gaan we twee ints optellen, deze hebben respectievelijk de waarde %d en %d\n", a, b);

	int c = a + b;

	printf("Opgeteld geeft dit: %d\n", c);
	printf("We verlaten nu functie 'optellen' en returnen het resultaat\n");

	return c;
}

void print_main_arguments(int argc, char *argv[])
{
	for(int i=0; i < argc; i++) {
		printf("%s\n",argv[i]);
	}
}

int main(int argc, char *argv[])
{
	printf("We zijn nu in functie 'main', om deze zin uit te kunnen printen gebruiken we de functie 'printf'\n");
	printf("Functie main heeft %d (en dus het programma) parameters (argumenten) meegekregen, deze zijn:\n");
	print_main_arguments(argc, argv);
	f();

	int c = optellen( 3, 4 );
	printf("We verlaten nu functie 'main' en zijn daarmee klaar met uitvoeren van dit programma\n Als return value geven we c mee, die we hadden berekend met de functie optellen\n");

	return c;
}
