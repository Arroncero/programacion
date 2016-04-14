/*
 * =====================================================================================
 *
 *       Filename: nombre.cpp
 *
 *    Description: Escribir el nombre un número de veces
 *
 =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    char nombre[20];
    int veces;

    printf ("Escribe tu nombre:\n");
    gets (nombre);
    printf ("Escribe el número de veces"
	    "que quieres que lo repita:\n");
    scanf ("%i", &veces);

/* Se inicializa un contador llamado i
 * Este está declarado localmente en el bucle
 * Es decir, solo funciona dentro de este, fuera no existe
 *
 * La condicion dice que el bucle se repita
 * siempre y cuando i sea menor que veces  */

    for (int i=0; i<= veces; i++){

	printf ("%s.\n", nombre);
    }

    return EXIT_SUCCESS;
}

