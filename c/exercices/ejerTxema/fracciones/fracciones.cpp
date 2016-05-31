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

double calcular(struct TPila *pila){
    double resultado=pila->datos[pila->cima];

    while((pila->cima -1) != FIN_ARRAY){
	resultado = (pila->datos[pila->cima-1]) + 1/resultado;
	pila->cima--;
    }

    return resultado;
}

void liberar(struct TPila *pila){
    free(pila->datos);
}

int main (int argc, const char **argv){

    int bandera = 0;
    struct TPila pila;
    //inicializar array
    inicializar(&pila);
    //incrementar cima
    printf ("Introduzca los numeros con los que quiere operar:\n");
    while (bandera == 0){
	pila.cima++;
	//incrementar espacio
	reserva(&pila);
	//pedir números al usuario
	scanf ("%i", &pila.datos[pila.cima]);
	//si el numero es 0, sale
	if (pila.datos[pila.cima] == 0)
	    bandera = 1;
	//si el numero es != 0, paso 2.
    }
    pila.cima--;

    printf ("el resultado de la operacion es %lf, capullo.\n", calcular(&pila));

    liberar(&pila);

    return EXIT_SUCCESS;
}

