#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED
#include "nodo.h"

struct Cola;

typedef struct Cola * ColaPtr;

ColaPtr crearCola();

NodoPtr getPrimeroCola(ColaPtr cola);
NodoPtr getUltimoCola(ColaPtr cola);
void setPrimeroCola(ColaPtr cola, NodoPtr nuevoPrimero);
void setUltimoCola(ColaPtr cola, NodoPtr nuevoUltimo);

void encolar(ColaPtr cola, DatoPtr dato);
DatoPtr desencolar(ColaPtr cola);

ColaPtr duplicarCola(ColaPtr cola);
void liberarCola(ColaPtr cola);

#endif // COLA_H_INCLUDED
