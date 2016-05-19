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

struct TSigno{
    int *datos;
    int cima;
    int comparativa;
};

int main (int argc, const char **argv){

    struct TPila total;
    struct TSigno par;
    struct TSigno impar;
    int numeropila;
    int numeropar = 0;
    int numeroimpar = 0;
    int aux = 0;

    total.cima = 0;
    par.cima = 0;
    par.comparativa = par.cima + 1;
    impar.cima = 0;
    impar.comparativa = impar.cima + 1;

    printf ("¿Cuántos números quiere ordenar?\n");
    scanf ("%i", &numeropila);

    total.datos = (int *) malloc (sizeof(int)*numeropila);

    printf ("Por favor, introduzca los números que quiere"
	    " ordenar:\n");

    for (int i=0;i<numeropila; i++, total.cima++)
	scanf("%i", &total.datos[total.cima]);

    total.cima = 0;

    for (int i=0; i<numeropila; i++, total.cima++){
	if(total.datos[total.cima] % 2 == 1)
	    numeroimpar++;
	if(total.datos[total.cima] % 2 == 0)
	    numeropar++;
    }

    total.cima = 0;

    par.datos = (int *) malloc (sizeof(int)*numeropar);
    impar.datos = (int *) malloc (sizeof(int)*numeroimpar);

    for (int i=0; i<numeropila; i++, total.cima++){
	if (total.datos[total.cima] % 2 == 0){
	    par.datos[par.cima] = total.datos[total.cima];
	    par.cima++;
	}
	if (total.datos[total.cima] % 2 != 0) {
	    impar.datos[impar.cima] = total.datos[total.cima];
	    impar.cima++;
	}
    }

    par.cima = 0;
    impar.cima = 0;

/*      for (int i=0; i<numeropar-1; i++, par.cima++){
	for (int j=0; j<numeropar; j++, par.comparativa++){
	    if(par.datos[par.cima] > par.datos[par.comparativa]){
		aux = par.datos[par.cima];
		par.datos[par.cima] = par.datos[par.comparativa];
		par.datos[par.comparativa] = aux;
	    }
	}
    }

    for (int i=0; i<numeroimpar-1; i++, impar.cima++){
	for (int j=0; j<numeroimpar; j++, impar.comparativa++){
	    if(impar.datos[impar.cima] > impar.datos[impar.comparativa]){
		aux = impar.datos[impar.cima];
		impar.datos[impar.cima] = impar.datos[impar.comparativa];
		impar.datos[par.comparativa] = aux;
	    }
	}
    }

    impar.cima = 0;
    par.cima = 0;

    */

    printf ("Has introducido los numeros pares: \n");
    for (int i=0; i<numeropar; i++, par.cima++)
	printf ("%i\n", par.datos[par.cima]);

    printf ("Has introducido los numeros impares: \n");
    for (int i=0; i<numeroimpar; i++, impar.cima++)
	printf ("%i\n", impar.datos[impar.cima]);

    return EXIT_SUCCESS;
}

