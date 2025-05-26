# Geheugen

Een binary / executable heeft meerdere geheugen gebieden:

 - Een .text gebied waar de instructies (code) staat.
 - Een .bss en een .data gebied waar globale variabelen opgeslagen zijn.
 - Stack (dynamisch) is een continu veranderend geheugen gebied dat gebruikt wordt voor functies om lokale variabelen in op te slaan, bij het aanroepen van een functie groeit de stack om ruimte vrij te maken voor die functie, bij het verlaten (returnen) van een functie wordt de vrijgemaakte ruimte weer vrijgegeven.
 - Heap (dynamisch) is een geheugengebied dat groeit met de `malloc` (kort voor 'memory allocate') functie. En krimpt met de `free` functie. 
 - Geheugen van Shared Libraries (buiten scope)
 - Overige geheugengebieden (buiten scope)

## Stack

Gister hebben voornamelijk de stack gebruikt, dit zijn variabelen die lokaal in een functie zijn gedeclareerd. Elke functie heeft zijn eigen stackframe, die groeit als variabelen worden aangemaakt en krimpt als de functie verlaten wordt door een return statement.

Als we het geheugen zien als een lange array bytes, dan begint de stack rechts, bij het adres 0xfffffffffff, en groeit deze naar links, richting 0x000000000.
Gister kon je dit bijvoorbeeld zijn in het programma `dag1/02_print_array_memory.c`.

## Heap

De heap hebben we nog niet in gebruik gezien. Om de heap te gebruiken moet je geheugen op de heap alloceren. Dit wordt gedaan met de functie `malloc()`. Gealloceerd geheugen kan weer worden vrijgemaakt met de functie `free()`.


