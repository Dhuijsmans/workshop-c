
# Include statements

Include statements worden gebruikt om header files te importeren.
In deze header files staan bepaalde definities en functies, vaak van een library, die je kan gebruiken. Afhankelijk van de libraries die je wil gebruiken is het niet genoeg om alleen de header files te includen.

I.h.b. bestaan er header files die je nodig hebt om de 'standard library' te gebruiken (deze heet vaak libc, of glibc (GNU Libc)).

Hieronder een kort overzicht van veelgebruikte libc header files en de functies die erbij horen:

**<stdio.h>**

Deze include je met de statement: `#include <stdio.h>`. Deze header file gebruik je om de volgende functies te kunnen gebruiken:

- printf()
- fprintf()
- fread()
- fopen()
- fwrite()
- etc. (nog veel meer)

**<string.h>**

Deze include je met de statement: `#include <string.h>`. Deze header file gebruik je om de volgende functies te kunnen gebruiken:

- strcpy()
- strncpy()
- strcat()
- strncat()
- strdup()
- strndup()
- strtok()
- strntok()
- etc. (nog veel meer)

**<stdlib.h>**

Deze include je op dezelfde manier. Gebruikt voor:

- malloc()
- calloc()
- free()
- exit()
- etc. (nog veel meer)

## RTFM

Voor meer info kan je de man pages gebruiken:

Bijvoorbeeld:  
`man 3 stdio`  
`man 3 stdio.h`  
`man 3 stdlib.h`  
`man 3 strcpy`

3 omdat dit de sectie over standard libraries is, als je dit weglaat, kan het zijn dat hij een gelijknamige functie uit bash pakt, zoals `printf`.

Voor meer info:
`man man`
of 
`man man man`

