#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "estadio.h"

struct Estadio{
    char nombreEstadio[20];
    int capacidad;
    char localidad[20];
    ColaPtr colaPersonas;
};

typedef struct Estadio* EstadioPtr;

EstadioPtr crearEstadio(char nombreEstadio[20], int capacidad, char localidad[20]){
    EstadioPtr estadio = (EstadioPtr)malloc(sizeof(struct Estadio));
    strcpy(estadio->nombreEstadio, nombreEstadio);
    estadio->capacidad = capacidad;
    strcpy(estadio->localidad, localidad);
    estadio->colaPersonas = crearCola();
    return estadio;
};

char* getNombreEstadio(EstadioPtr estadio){
    return estadio->nombreEstadio;
};

int getCapacidad(EstadioPtr estadio){
    return estadio->capacidad;
};

char* getLocalidad(EstadioPtr estadio){
    return estadio->localidad;
};

ColaPtr getColaPersonas(EstadioPtr estadio){
    return estadio->colaPersonas;
};

void setNombreEstadio(EstadioPtr estadio, char nuevoNombreEstadio[20]){
    strcpy(estadio->nombreEstadio, nuevoNombreEstadio);
};

void setCapacidadEstadio(EstadioPtr estadio, int nuevaCapacidadEstadio){
    estadio->capacidad = nuevaCapacidadEstadio;
};

void setLocalidadEstadio(EstadioPtr estadio, char nuevaLocalidadEstadio[20]){
    strcpy(estadio->localidad, nuevaLocalidadEstadio);
};

void insertarPersonaCola(EstadioPtr estadio, PersonaPtr persona){
    encolar(estadio->colaPersonas, persona);
};

void atenderPersona(EstadioPtr estadio){
    PersonaPtr persona = desencolar(estadio->colaPersonas);
    printf("\n---- PERSONA DESENCOLADA -----\n");
    mostrarPersona(persona);
    printf("\n");
};

void mostrarEstadio(EstadioPtr estadio){
    printf("Nombre del estadio: %s",estadio->nombreEstadio);
    printf("Capacidad del estadio: %d", estadio->capacidad);
    printf("Localidad del estadio: %s", estadio->localidad);
};

void liberarEstadio(EstadioPtr estadio){
    liberarCola(estadio->colaPersonas);
    free(estadio);
};
