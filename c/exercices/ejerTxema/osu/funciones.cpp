#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void inicializar (struct TPila *total, struct TPila *par, struct TPila *impar){

    total->cima = -1;
    par->cima = -1;
    impar->cima = -1;
}

int *reservar_memoria (int tamanio){
    return (int *) malloc (sizeof(int)*tamanio);
}

void comprobar_paridad (struct TPila *total, int *numeropar, int *numeroimpar){

    static int cima = total->cima;

    while (cima>=0){

	if(total->datos[cima] % 2 == 0)
	    numeropar++;
	if(total->datos[cima] % 2 != 0)
	    numeroimpar++;
	cima--;
	comprobar_paridad(total, numeropar, numeroimpar);
    }
}

void llenar_pila (struct TPila *total, struct TPila *par, struct TPila *impar){

    static int cima = total->cima;

    while (cima>=0){
	if(total->datos[cima] % 2 == 0){
	    par->cima++;
	    par->datos[par->cima] = total->datos[cima];
	}
	if(total->datos[cima] % 2 != 0){
	    impar->cima++;
	    impar->datos[impar->cima = total->datos[cima]];
	}
	cima--;
	llenar_pila(total, par, impar);
    }
}

void imprimir(struct TPila *pila){

    for (int i=pila->cima; i>0; i--)
	printf ("%i\n", pila->datos[i]);

    /* static int cima = pila->cima;
     *
     * if(cima>=0){
     * printf("%i\n", pila->datos[cima]);
     * cima--;
     * imprimir(pila);
     * }
     * cima = pila->cima; */
}

void ordenar (struct TPila *pila){

    int comprobado,
	comprobante;
    int aux = 0;

    comprobante = pila->cima;

    while (comprobante>=0){
	comprobado=comprobante-1;
	while(comprobado>=0){
	    if(pila->datos[comprobante] > pila->datos[comprobado]){
		aux = pila->datos[comprobante];
		pila->datos[comprobante] = pila->datos[comprobado];
		pila->datos[comprobado] = aux;
	    }
	    comprobado--;
	}
	comprobante--;
    }
}

void liberar (struct TPila *pila){
    free(pila->datos);
}
