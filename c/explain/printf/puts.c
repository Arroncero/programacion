/*
 * =====================================================================================
 *
 *       Filename: fscanf.c
 *
 *    Description: diferencia printf y puts
 *
=====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    int y = 3;

/* El printf no incluye salto de línea y puede imprimir variables */

    printf ("SKDUHASDIJSAOIDJ HOLA %d\n",y);

/* Puts solo imprime texto e incluye salto de línea */

    puts ("HOLA ASYGHUISAOJKAOSUHJAIGSA");

    return EXIT_SUCCESS;
}

