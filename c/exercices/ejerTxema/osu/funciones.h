#ifndef __FUNCIONES_H__
#define __FUNCIONES_H__

struct TPila {
    int *datos;
    int cima;
};

extern void inicializar(struct TPila *total, struct TPila *par, struct TPila *impar);
extern int *reservar_memoria(int tamanio);
extern void comprobar_paridad(struct TPila *total, int *numeropar, int *numeroimpar);
extern void llenar_pila (struct TPila *total, struct TPila *par, struct TPila *impar);
extern void imprimir (struct TPila *pila);
extern void ordenar (struct TPila *pila);
extern void liberar (struct TPila *pila);

#endif
