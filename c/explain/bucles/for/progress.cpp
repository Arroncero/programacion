/*
 * =====================================================================================
 *
 *       Filename:  progress.cpp
 *
 *    Description:  Primer ejercicio blucle "for"
 *
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (){

    int vez;
    int i;

/* Un bucle for tiene 3 componentes:
 * 1-Inicialización de la variable.
 * 2-Condición para que el bucle se ejecute.
 * 3-Aumento de la variable para que el bucle continúe*/

    for (vez=0; vez<80; vez++){
	printf("\r");
	for (i=0; i<vez; i++)
	    printf("=");
	printf(">");

/* La orden fflush vacía la tubería automáticamente esté completa o no
 * Así se ejecuta sin espera*/

	fflush(stdout);

/* La orden sleep pone un tiempo muerto en cuanto se ejecuta.
 * Para usarlo hay que incluir la directiva de preproceso unistd.h
 * Si no se quiere incluir la directiva de preproceso se puede escribir como una llamada a la consola escribiendo system ("sleep 1)*/

	sleep (1);
    }

    return EXIT_SUCCESS;
}
