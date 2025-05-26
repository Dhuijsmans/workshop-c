# Functies in C

Functies in C hebben parameters en/of return values.
Deze parameters en return values hebben een variabele type.

een functie `int sum(float a, float b)` heeft een return type `int` en twee parameters van type `float`.
Op het moment dat verkeerde types worden meegegeven als parameter of returned worden dan zal er een poging gedaan worden om 
het type te converteren, zo wordt een float een integer door alles achter de komma weg te gooien, etc. 
Als dit niet lukt, crasht het programma.

Anders dan in talen als Python kan een functie in C source code alleen zien wat er eerder in het bestand voorkomt, het volgende zou dus mislukken:

```c
void f()
{
    g():
}


void g()
{
    printf("hoi\n");
}
```

Met de mededeling dat `g()` niet bestaat.
Het is mogelijk dit toch voor elkaar te krijgen door eerst het type van de functie te declareren:

```c
void g();

void f()
{
    g();
}

void g()
{
    printf("hoi\n");
}
```

Dit is handig in situaties waar twee functies elkaar aan moeten roepen.

