Conditionals worden gebruikt in if statements (en loops, later meer).
if statements worden uitgevoerd als de conditie niet 0 is. Het maakt daarbij niet uit of het 1, 545 of -23 is.
Je kan bijvoorbeeld zoiets doen:

```c
void count(int money)
{
    if(money) {
        printf("Amount of money is not zero\n");
    }
}
```

Dit is ook handig als je met pointers gaat werken, de functie `void *malloc(size_t size)` geeft als return-waarde een pointer, een geheugenadres, als er succesvol geheugen geallocceerd kon worden of NULL (0) als er geen geheugen geallocceerd kon worden.
Daardoor kan je het volgende stukje code gebruiken om te checken of er succesvol een stuk code geallocceerd is:

```c
const size_t BUFSIZE = 512;
char *buffer = (char *) malloc(BUFSIZE);
if (buffer) {
    printf("Succesfully allocated memory!\n");
}
```

Naast if-statements heb je ook else statements, die werkt zoals in andere programmeertalen.

Tevens heb je else if statements:

```c
if (cond) {
    some code;
}
else if (cond2) {
    some code;
}
```c

Wanneer je heel veel if / else if blokken achter elkaar zou hebben is het soms beter om een switch statement te gebruiken.

Deze hebben het format:

```c
switch (INTEGER) {
    case (INTEGER_VALUE):
        some_code;
        break;
    case (INTEGER_VALUE):
        other_code;
        break;
    default:
        default_code;
}
```

Let wel, dat hier in de cases integer values moeten staan, bijvoorbeeld `case 2:`. Het is niet mogelijk iets te doen als `case (n < 5):`
Ook moet in het switch argument, waar boven 'INTEGER' staat een integer variabele meegegeven worden, het is niet mogelijk andere types mee te geven.
In elke case moet een break statement gebruik worden, doe je dit niet, dan worden alle andere cases uitgevoerd tot er een break statement komt, of dat alle cases op zijn.
De default case is een speciaal, optioneel, geval dat uitgevoerd wordt indien geen van de cases matchen.
