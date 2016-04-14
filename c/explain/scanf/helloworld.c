/*
 * =====================================================================================
 *
 *       Filename:  helloworld.c
 *
 *    Description:  Primer programa con scanf
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

    int x;

    printf ("Escribe un número\n");

    /* La función scanf te permite meter un número o caracter a través del teclado
     * Para hacerlo se tienen que definir variables y formatos según el dato que quieres guardar en la memoria
     * Para asignar el dato a una variable se debe poner "&" delante de esta*/

    scanf ("%d",&x);
    printf ("Tu número es %d, pero yo te voy a decir Hello World porque soy tontito :3\n",x);

    return EXIT_SUCCESS;
}
