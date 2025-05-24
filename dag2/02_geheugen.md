Een binary / executable heeft meerdere geheugen gebieden:
 - Een .text gebied waar de instructies (code) staat.
 - Een .bss en een .data gebied waar globale variabelen opgeslagen zijn.
 - Stack (dynamisch) is een continu veranderend geheugen gebied dat gebruikt wordt voor functies om lokale variabelen in op te slaan, bij het aanroepen van een functie groeit de stack om ruimte vrij te maken voor die functie, bij het verlaten (returnen) van een functie wordt de vrijgemaakte ruimte weer vrijgegeven.
 - Heap (dynamisch) is een geheugengebied dat groeit met de `malloc` (kort voor 'memory allocate') functie. En krimpt met de `free` functie. 
 - Geheugen van Shared Libraries (buiten scope)
 - Overige geheugengebieden (buiten scope)
