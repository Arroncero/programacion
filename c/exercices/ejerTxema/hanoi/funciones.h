/*
 * =====================================================================================
 *
 *       Filename:  funciones.h
 *
 *    Description:  
 *
 * =====================================================================================
 */

#ifndef __FUNCIONES_H__
#define __FUNCIONES_H__


#define NUMERO_TORRES 3

struct Torre{
    int *pisos;
    int cima;
};

extern void init(struct Torre *torre, int size);
extern void llenar(struct Torre *torre, int size);
extern int pop (struct Torre *torre);
extern void push (struct Torre *torre, int dato, int tamanio);

#endif
