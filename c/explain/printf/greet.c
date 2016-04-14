/*
 * =====================================================================================
 *
 *       Filename:  greet.c
 *
 *    Description:  Primer programa en C
 *
 * =====================================================================================
 */

/* Se incluyen las directivas de preproceso, que permiten incluir diferentes comandos
 * stdio (input-output) incluye todas las ordenes de entrada y salida por teclado (printf, scanf...)
 * stdlib es la libreria con distintos comandos, entre ellos EXIT_SUCCESS */
#include <stdio.h>
#include <stdlib.h>

/* Se crea una función main, que es la que se ejecuta y en la que se incluyen todo el resto de posibles funciones */
int main(){

    /* El comando printf te permite escribir por pantalla (simempre y cuando hayas incluido "stdio.h" entre las directivas de preproceso */
    printf("The world is a vampire.\n");

    /* Se cierra la función Main con la devolución de un número entero
     * Realmente la orden dice "return 0" pero gracias a la librería "stdlib.h" podemos poner EXIT_SUCCESS y hacer el código más legible  */
    return EXIT_SUCCESS;
}
