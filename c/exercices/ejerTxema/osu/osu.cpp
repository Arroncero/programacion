/*
 * =====================================================================================
 *
 *       Filename: osukarusempai.cpp
 *
 *    Description: rellena un array con la cantidad de numeros que el usuario quiera
 *    y luego los clasifica en par e impar, y cada una de esta	s clasificaciones las ordena
 *    de mayor a menor.
 *
 =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main (int argc, const char **argv){

    struct TPila total;
    struct TPila par;
    struct TPila impar;
    int numeropila;
    int numeropar = 0;
    int numeroimpar = 0;

    inicializar(&total, &par, &impar);

    printf ("¿Cuántos números quiere ordenar?\n");
    scanf ("%i", &numeropila);

    total.datos = reservar_memoria(numeropila);

    printf ("Por favor, introduzca los números que quiere"
	    " ordenar:\n");

    while (total.cima<numeropila-1){
	total.cima++;
	scanf("%i", &total.datos[total.cima]);
    }

    comprobar_paridad(&total, &numeropar, &numeroimpar);

    par.datos = reservar_memoria(numeropar);
    impar.datos = reservar_memoria(numeroimpar);

    llenar_pila(&total, &par, &impar);

    ordenar(&par);
    ordenar(&impar);

    printf ("Ha introducido los siguientes números pares:\n");
    imprimir(&par);
    printf ("Ha introducido los siguientes números impares:\n");
    imprimir(&impar);

    liberar(&total);
    liberar(&par);
    liberar(&impar);

    return EXIT_SUCCESS;
}
