#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int matriz[3][3];
    int deter=0;
    
    printf ("Introduzca el valor de M[0][0]\n");
    scanf ("%d", &matriz[0][0]);
    printf ("Introduzca el valor de M[0][1]\n");
    scanf ("%d", &matriz[0][1]);
    printf ("Introduzca el valor de M[0][2]\n");
    scanf ("%d", &matriz[0][2]);
    printf ("Introduzca el valor de M[1][0]\n");
    scanf ("%d", &matriz[1][0]);
    printf ("Introduzca el valor de M[1][1]\n");
    scanf ("%d", &matriz[1][1]);
    printf ("Introduzca el valor de M[1][2]\n");
    scanf ("%d", &matriz[1][2]);
    printf ("Introduzca el valor de M[2][0]\n");
    scanf ("%d", &matriz[2][0]);
    printf ("Introduzca el valor de M[2][1]\n");
    scanf ("%d", &matriz[2][1]);
    printf ("Introduzca el valor de M[2][2]\n");
    scanf ("%d", &matriz[2][2]);
    
    deter = matriz[0][0]*(matriz[1][1]*matriz[2][2]-matriz[1][2]*matriz[2][1]);
    deter-=matriz[0][1]*(matriz[1][0]*matriz[2][2]-matriz[1][2]*matriz[2][0]);
    deter+=matriz[0][2]*(matriz[1][0]*matriz[2][1]-matriz[1][1]*matriz[2][0]);
    
    printf ("el determinante de la matriz es %d", deter);
    
    return 0;
}

