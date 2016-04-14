/*
 * =====================================================================================
 *
 *       Filename:  mivariable.c
 *
 *    Description:  Primer ejercicio variables
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

/* Se asignan variables a un formato nada más empezar la función main */

    int flechas;
    int flechas_usadas;
    int total = 30;

    printf ("Monstruo salvaje apareció!\n");
    printf ("Introduce el número de flechas que quieres usar\n");
    scanf ("%d",&flechas_usadas);

/* Con esas variables se pueden hacer operaciones */

    flechas = total - flechas_usadas;

/* Esas variables se pueden mostrar por pantalla en un printf poniendo en el lugar en el que quieres insertar el número la variable con el formato
 * (%d, %i...) y definiendo el nombre de la variable al final, fuera de las comillas y tras una coma */

    printf ("Frikazo integral usó 'flechas'\nVictoria!\nTe quedan %d flechas para la siguiente batalla\n",flechas);

    return EXIT_SUCCESS;
}
