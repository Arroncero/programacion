#include <stdio.h>
#include <stdlib.h>
#define EUROS_A_DOLARS 1.29
#define EUROS_A_YENES 139.924
#define EUROS_A_LIBRAS 0.785584

int main ()
{ 
    double euros, dolares, yenes, libras ;
    
    printf ("Introduzca cantidad en euros:\n");
    scanf ("%lf", &euros);
    
    dolares = euros * EUROS_A_DOLARS;
    yenes = euros * EUROS_A_YENES;
    libras = euros * EUROS_A_LIBRAS;
    
    printf ("%lf euros son %lf dolares,%lf yenes y %lf libras", euros, dolares, yenes, libras);
            
    return 0;
}

