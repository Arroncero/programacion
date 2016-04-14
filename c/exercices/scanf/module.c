#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int a[3];
    int b[3];
    int c[3];
    int modulo;
    
    printf ("introduzca la coordenada x de a\n");
    scanf ("%d",&a[0] );
    
    printf ("introduzca la coordenada y de a\n");
    scanf ("%d",&a[1]);
    
    printf ("introduzca la coordenada z de a\n");
    scanf ("%d", &a[2]);
    
    printf ("introduzca la coordemada x de b\n");
    scanf ("%d", &b[0]);
    
    printf ("introduzca la coordemada y de b\n");
    scanf ("%d", &b[1]);
    
    printf ("introduzca la coordemada z de b\n");
    scanf ("%d", &b[2]);
    
    c[0] = a[0] + b[0];
    c[1] = a[1] + b[1];
    c[2] = a[2] + b[2];
    modulo = sqrt(c[0]*c[0]+c[1]*c[1]+c[2]*c[2]);
    
    printf ("Las coordenadas de c son C=(%d, %d, %d)\n", c[0], c[1], c[2]);
    printf ("El modulo de c es %d", modulo);
    
    return 0;
}

