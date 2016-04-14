/*
 * =====================================================================================
 *
 *       Filename: mientras.cpp
 *
 *    Description: usos de bucles
 *
=====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int numeroUsuario, numeroPensado;

    printf ("Acabo de pensar un número entre 1 y 10.\n"
	    "Adivínalo.\n");

/* Para sacar un número aleatorio primero
 * Se tiene que poner una semilla a la sucesión
 * de la que se va a sacar el número aleatório
 * Se asigna el rango de números que quieres que saque aleatotiamente
 * con el resto */

    srand(time(NULL));
    numeroPensado = rand() % 10 + 1;

    /* La instrucción Do While primero ejecuta el interior
     * del bucle y luego comprueba la condición
     * Si la cumple se repite como un bucle While normal*/

    do{
	printf ("Qué numero crees que he pensado?\n");
	scanf ("%i", &numeroUsuario);
    }while (numeroUsuario != numeroPensado);

    printf ("Hombre, ya era hora de que acertaras!\n");


    return EXIT_SUCCESS;
}

