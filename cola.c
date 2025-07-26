#include <stdio.h>
#include <stdlib.h>
#include "cola.h"

struct Cola{
    NodoPtr primero;
    NodoPtr ultimo;
};

ColaPtr crearCola(){
    ColaPtr cola = (ColaPtr)malloc(sizeof(struct Cola));
    cola->primero = NULL;
    cola->ultimo = NULL;
    return cola;
};

NodoPtr getPrimeroCola(ColaPtr cola){
    return cola->primero;
};

NodoPtr getUltimoCola(ColaPtr cola){
    return cola->ultimo;
};

void setPrimeroCola(ColaPtr cola, NodoPtr nuevoPrimero){
    cola->primero = nuevoPrimero;
}

void setUltimoCola(ColaPtr cola, NodoPtr nuevoUltimo){
    cola->ultimo = nuevoUltimo;
};

void encolar(ColaPtr cola, DatoPtr dato){ ///INSERTAR ULTIMO
    NodoPtr nodoAInsertar = crearNodo(dato, NULL);
    if(cola->primero == NULL){
        cola->primero = nodoAInsertar;
        cola->ultimo = nodoAInsertar;
        return;
    }
    setSiguiente(cola->ultimo, nodoAInsertar);
    cola->ultimo = nodoAInsertar;
};

//DatoPtr desencolar(ColaPtr cola){ ///ELIMINAR PRIMERO
//
//};

ColaPtr duplicarCola(ColaPtr cola);

void liberarCola(ColaPtr cola){
    free(cola);
};
