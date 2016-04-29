/*
 * =====================================================================================
 *
 *       Filename: factorial.cpp
 *
 *    Description: calcula el factorial y la sumatoria de un numero cualquiera
 *
 =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//la recursividad es un bucle de funciones
//Se llama a la función dentro de la misma función
//Debe tener una condición que haga que no se repita indefinidamente

//calculo del factorial
int factorial (int numero){
    //la funcion es recursiva hasta que numero es = 0
    //por ser el mínimo
    if (numero == 0)
	//condición mínima de la recursividad
	return 1;
    return  numero * factorial(numero - 1);
}
//calculo de la sumatoria
int sumatoria (int numero){
    if (numero == 0)
	return 0;
    return  numero + sumatoria(numero - 1);
}

int main (int argc, const char **argv){

    int numero;

    //introducir el numero del que se quiere calcular el factorial
    printf ("Introduzca el número del que se quiere"
	    " calcular el factorial y la sumatoria:\n");
    scanf ("%i", &numero);

    //llamar a la funcion (en este caso, dentro de los printf)
    printf ("El factorial del numero %i es %i.\n", numero, factorial(numero));
    printf ("La sumatoria del numero %i es %i.\n", numero, sumatoria(numero));

    return EXIT_SUCCESS;
}

