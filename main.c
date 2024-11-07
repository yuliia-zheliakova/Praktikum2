#include <stdio.h>
#include <stdlib.h>
#include "zahlen.h"

int main(void) {
    char puffer[DIGITS + 1];
    char* input = "0";
    int zahl;
    int c;

    printf ("Eingabezeichenkette: \"%s\" \n",input);

    zahl = str2int(input);

    if(zahl < 0 || MAXZAHL <= zahl) {
        printf("ungueltige Eingabe: %s \n", input);
        return EXIT_FAILURE;
    }

    int2Binaer(zahl, puffer );

    printf ("dezi: %d binaer: %s oktal: 0%o hexa: 0x%X \n",zahl,puffer,zahl,zahl);

    c = getchar();

    clear(c, puffer);

    return EXIT_SUCCESS;
}
