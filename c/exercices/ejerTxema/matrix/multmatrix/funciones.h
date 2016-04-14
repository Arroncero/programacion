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

struct TMatriz{
    int *data;
    int filas;
    int col;
};

extern void push(int *data, int filas, int col, int ancho, int dato);
extern void multiplica (struct TMatriz *matriz1, struct TMatriz *matriz2, struct TMatriz *resultado, int ancho1, int ancho2);
extern void init(struct TMatriz *matriz);

#endif
