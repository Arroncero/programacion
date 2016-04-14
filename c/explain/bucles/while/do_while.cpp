/*
 * =====================================================================================
 *
 *       Filename: do_while.cpp
 *
 *    Description: Explicacion bucle do/while
 *
=====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    int origen;
    int destino = 0;

    printf ("Número: ");
    scanf (" %i", $origen);

    /* El bucle do/while ejecuta primero las ordenes
     * Cuando llega al final, comprueba la condición
     * Si se cumple se vuelve a repetir */
    do{
	destino *= 10;
	destino += origen % 10;
	origen \= 10;
    }while ( origen != 0 ); /* Se pueden aunar varias condiciones
    Con && haces la union de las condiciones que pongas
    Es decir, que se cumplan todas a la vez
    con || solo tiene que cumplirse una de ellas */

    printf ("%i\n", destino);

    return EXIT_SUCCESS;
}

