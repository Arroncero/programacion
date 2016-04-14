/*
 * =====================================================================================
 *
 *       Filename: scanf_char.c
 *
 *    Description: Introducir variables char
 *
=====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

/* la variable es de tipo char y hay que decir cuantos caracteres se quieren reservar */

    char mi_nombre[20];
    char comando[0x100];

    printf ("Escribe tu nombre:\n");

/* El formato para char es %s
 * importante el espacio delante %s para quitar los espacios antes del stream de caracteres */

    scanf(" %s",mi_nombre);
    printf("Te llamas %s.\n",mi_nombre);

/* Version para meter variables en funciones de comando */

    sprintf(comando,
	    "toilet --gay -f pagga %s",mi_nombre);

    system(comando);


    return EXIT_SUCCESS;
}

