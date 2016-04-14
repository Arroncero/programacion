#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int esPrimo(int numeroprimo)
{
    int i;

    for (i=2; 2 <= i <=sqrt(numeroprimo); i++)
        if (numeroprimo%i == 0)
            return 0;
        else 
            return 1;
    }

int main (){
    
    int numeroprimo = 0;
    int a;

    printf ("Escribe un numero entero positivo: ");
    scanf ("%d", &numeroprimo);

    a = esPrimo (numeroprimo);
    
    if (a == 0)
        printf ("El número %d no es primo", numeroprimo);
    else   
        printf ("El numero %d es primo", numeroprimo);
        
return 0;
}

