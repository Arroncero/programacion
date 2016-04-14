/*
 * =====================================================================================
 *
 *    Filename: formats.c
 *
 *    Description: Ejercicio con los diferentes tipos de formato
 *
=====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (){

/* Existen diferentes formatos dependiendo de lo que quieras mostrar por pantalla, ya sea un número (y el tipo de este) o un caracter*/

    char letra = 'a'; /* También se puede escribir "97" ("a" en código ASCII), 0x61 (en hexadecimal) y en 0141 octal
			 porque al declarar variables lo que se guarda es el valor numérico */

    printf ("Hol%c\n",letra);
    printf ("Hol%d\n",letra);
    printf ("Hol%i\n",letra);
    printf ("Hol%x\n",letra);

/* El %c sirve para caracteres, el %i sirve para enteros, el %d para enteros en base decimal y %x para base hexadecimal */

    printf("%.2lf\n",0,5);

/* El %lf sirve para definir números con coma, es decir, floats. Para determinar el número de decimales se escribe ."nºdecimales que quieres" */

    printf("%3i\n",5);
    printf("%3i\n",50);
    printf("%3i\n",500);

/* poner un número delante de "i" dice cuántos caracteres quiere que tenga la variable. En el caso de no tener números en la variable sucicientes
rellena con espacios*/

    return EXIT_SUCCESS;
}

