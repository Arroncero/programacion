/*
 * =====================================================================================
 *
 *       Filename:
 *
 *    Description:
 *
 =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define FIN_ARRAY -1


struct TPila{
    int *datos;
    int cima;
};

void inicializar(struct TPila *pila){
    pila->datos = NULL;
    pila->cima = FIN_ARRAY;
}

void reserva(struct TPila *pila){
    pila->datos = (int *) realloc (pila->datos, ((pila->cima)+1)*sizeof(int));
}

void imprimir (struct TPila *pila){
    for (int i = pila->cima; i>=0; i--)
	printf ("%i\n", pila->datos[i]);
}

double calcular(struct TPila *pila, int posicion){
    if (pila->datos[posicion + 1] == 0)
	return pila->datos[posicion];
    printf ("%i\n", pila->datos[posicion]);
    return pila->datos[posicion] +1/calcular(pila, posicion+1);
}

void liberar(struct TPila *pila){
    free(pila->datos);
}

int main (int argc, const char **argv){

    int posicion = 0;
    int bandera = 0;
    struct TPila pila;
    inicializar(&pila);
    printf ("Introduzca los numeros con los que quiere operar:\n");
    while (bandera == 0){
	pila.cima++;
	reserva(&pila);
	scanf ("%i", &pila.datos[pila.cima]);
	if (pila.datos[pila.cima] == 0){
	    bandera = 1;
	    pila.cima--;
	}
    }

    imprimir (&pila);

    printf ("el resultado de la operacion es %lf, capullo.\n", calcular(&pila, posicion));

    liberar(&pila);

    return EXIT_SUCCESS;
}

