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
#include <strings.h>
#define TAMANIO_PILA 10

void inicializar_pila(int *pila){
    bzero(&pila, sizeof(pila));
}

void llenar_pila(int *pila, const char *argv){

    for(int i=0; i<TAMANIO_PILA; i++){
	pila[i] = argv[i+1];
	printf("%i ", pila[i]);
    }

}


void ordenar_pila(int *pila);
int calcular_mediana(int *pila);

int main (int argc, const char **argv){

    //Llenar un array de 10 numeros metidos desde consola
    int pila[TAMANIO_PILA];
    int resultado = 0;

    if (argc < 2){
	fprintf(stderr, "Inserta un número, capullo.\n");
	return EXIT_FAILURE;
    }
    if (argc > 10){
	fprintf(stderr, "te has pasado de listo, capullo.\n");
	return EXIT_FAILURE;
    }

    inicializar_pila(pila);
    llenar_pila(pila, *argv);
    //ordenar_pila(pila);
    //calcular_mediana(pila);

    printf("La mediana de los numeros introducidos es: %i\n", resultado);

    return EXIT_SUCCESS;
}

