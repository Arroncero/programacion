#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "interfaz.h"


enum Opcion show_menu() {

    int opcion_menu;

    __fpurge(stdin);
    system ("clear");
    system("toilet \"Las Torres de Hanoi\" -f future.tlf");

    printf ("\n"
            "\t1.- Jugar\n"
            "\t2.- Instrucciones\n"
            "\t3.- Salir\n"
            "\n"
            "Opción: ");

    scanf ("%i", &opcion_menu);
    system ("clear");

    return (enum Opcion) opcion_menu;
}

void wait_for_user() {

        __fpurge(stdin);
        printf("\n\nPulsa una tecla para continuar.\n");
        getchar();

}

void show_file(const char *fichero){
    FILE *pf = NULL;
    char c;

    pf = fopen(fichero, "r");
    while ( (c = fgetc(pf)) != EOF )
        putchar(c);
    fclose(pf);

}

