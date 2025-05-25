Pointers zijn adressen van variabelen (opgeslagen in een variabele), zo'n adres *point* (wijst) naar een variabele, in dezelfde zin dat een huisnummer *point* (wijst) naar een huis in een straat.

Een pointer wordt als volgt gedeclareerd:

`<var_type>* <var_name>` of `<var_type> *<var_name>`, bijvoorbeeld:
`int* ptr_a;` of `char *ptr_b`.
De `*` wordt naar smaak achter het type of voor de naam gebruikt, dit leidt wel eens tot verwarring, maar de betekenis is hetzelfde.
De regel `int *ptr_a` betekent: Maak een variabele `ptr_a` aan die een pointer is die verwijst naar een integer.
Of een pointer naar een integer of een short integer verwijst is belangrijk om te weten. Immers een short integer is (doorgaans) 2 bytes groot en een integer (doorgaans) 4 bytes.
Dit betekent dat als een variabele op adres 0x8000 staat, een integer op het geheugen gebied 0x8000 t/m 0x8003 zou staan, terwijl een short int op het geheugengebied 0x8000 t/m 0x8001 zou staan.

CONTAINERS, VERWIJZINGEN NAAR CONTAINERS, INHOUD VAN DE CONTAINER, INTERPRETATIE VAN DE INHOUD VAN CONTAINERS

