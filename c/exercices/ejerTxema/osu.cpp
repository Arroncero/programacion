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

struct TPila{
    int *datos;
    int cima;
};

void inicializar (struct TPila *total, struct TPila *par, struct TPila *impar){

    total->cima = -1;
    par->cima = -1;
    impar->cima = -1;
}

int *reservar_memoria(int tamanio){

    return (int *) malloc (sizeof(int)*tamanio);
}

void comprobar_paridad(struct TPila *total, int *numeropar, int *numeroimpar){

    for (int i=total->cima; i>=0; i--){
	if(total->datos[i] % 2 == 1)
	    numeroimpar++;
	if(total->datos[i] % 2 == 0)
	    numeropar++;
    }
}

void llenar_pila(struct TPila *total, struct TPila *par, struct TPila *impar){

    for (int i=total->cima; i>-1; i--){
	if (total->datos[i] % 2 == 0){
	    par->cima++;
	    par->datos[par->cima] = total->datos[i];
	}
	if (total->datos[i] % 2 != 0) {
	    impar->cima++;
	    impar->datos[impar->cima] = total->datos[i];
	}
    }
}

void imprimir (struct TPila *pila){

    for (int i=pila->cima; i>=0; i--)
	printf ("%i\n", pila->datos[i]);
}

void ordenar (struct TPila *pila){
    int comprobado,
	comprobante;
    int aux = 0;

    comprobante = pila->cima;

    while (comprobante >=0){
	comprobado = comprobante - 1;
	while (comprobado >=0){
		if (pila->datos[comprobante] > pila->datos[comprobado]){
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
