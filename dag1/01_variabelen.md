# Variabelen

De basis variabelen in C zijn chars (characters), integers, floats, doubles, arrays, pointers en structs.

## Char's en int's

char's worden gebruikt om letters (characters) in op te slaan, of beter gezegd, getallen op te slaan die corresponderen met letters volgens de asciitable, een computers kan immers enkel getallen interpreteren.

chars en integers hebben ook een unsigned variant, deze zijn `unsigned char` en `unsigned int`.

Standaard zijn, in de x86 processorarchitectuur tenminste, (unsigned) int's 32 bit en (unsigned) char's 8 bit. Het is mogelijk om grotere of kleinere varianten te krijgen met de keywords `long` en `short`.
Zo is een `long long int` bijvoorbeeld 64 bit en een `short int` 16 bits.

Helaas is dit niet hetzelfde voor andere architecturen, daarom wordt tegenwoordig aangeraden om de library `<stdint.h>` te gebruiken.
Deze library definieert de volgende types:

- `int8_t` Een 8 bits signed integer (ookwel bekend als een char)
- `uint8_t` Een 8 bits unsigned integer (ookwel bekend als een unsigned char)
- `int16_t` Een 16 bits singed integer
- `uint16_t` Een 16 bits unsigned integer
- `int32_t` etc.
- `uint32_t`
- `int64_t`
- `uint64_t`

## floats en doubles

floats en doubles worden gebruikt om 'kommagetallen' weer te geven, zoals 3,54.
floats zijn 32 bits en doubles zijn 64 bits.
floats zijn sneller in gebruik, maar doubles zijn preciezer.

## pointers en structs

Op deze onderwerpen komen we later terug.

## arrays

Hierna aan de beurt!

## typecasting

Het is mogelijk de ene variabele expliciet als een andere variabele te interpreteren, dit heet (type) casting.
Een belangrijke vorm hiervan is floats als integers interpreteren en vice versa.

