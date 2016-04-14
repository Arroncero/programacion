/*
 * =====================================================================================
 *
 *       Filename:  tower.cpp
 *
 *    Description:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

struct TPila{
    int *data;
    int cima;
    int tamanio;
};

bool push(struct TPila *pila, int numero){
    if(pila->cima >= pila->tamanio){
	pila->data =(int *) realloc (pila->data, (pila->cima + 1) * sizeof(int));
	pila->tamanio = pila->cima;
    }
    pila->data[pila->cima]=numero;
    pila->cima++;
    return true;
}

int pull(struct TPila *pila){
    if (pila->cima <= 0){
	printf ("No has más números por sacar, de manera que ");
	return 0;
    }
    return pila->data[--(pila->cima)];
}

void iniciar(struct TPila *pila){
    pila->data = NULL;
    pila->cima = 0;
    pila->tamanio = 0;
}

int main (int argc, const char **argv){

    int resultado;
    int opcion;
    int numero;
    struct TPila pila;

    iniciar(&pila);

    do{
	__fpurge(stdin);
	printf ("Elija la acción que quiere realizar\n");
	printf ("Opción 1: Meter un número en una pila\n"
		"Opción 2: Sacar el número de una pila\n"
		"Opcion 3: Salir\n");
	scanf ("%i", &opcion);

	if(opcion == 1){
	    printf ("Introduzca el número que quiere meter\n");
	    scanf ("%i", &numero);
	    push(&pila, numero);
	}

	if(opcion == 2){
	    resultado = pull(&pila);
	    if(resultado == 0){
		printf("El número que has sacado es el 0\n");
	    }
	    else
		printf("El número que has sacado es %i\n", pila.data[pila.cima]);
	}


	if(opcion == 3){
	    free(pila.data);
	    return EXIT_SUCCESS;
	}
    }while(1);
}

