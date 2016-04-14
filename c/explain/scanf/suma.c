/*
 * =====================================================================================
 *
 *       Filename: suma.c
 *
 *    Description: 
 *
=====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    int op1;
    int op2;
    int resultado;

    printf("Operando 1:\n");
    scanf(" %i", &op1);
    printf("Operando 2:\n");
    scanf(" %i", &op2);

    resultado = op1 + op2;

    printf("El resultado es %i.\n", resultado);
    /* printf("%i + %i = %i\n",
     * opt1, opt2,
     * opt1+ opt2
     *
     * Para no tener que declarar una variable más y hacerlo en una sola línea */

    return EXIT_SUCCESS;
}

