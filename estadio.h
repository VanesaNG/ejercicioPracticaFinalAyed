#ifndef ESTADIO_H_INCLUDED
#define ESTADIO_H_INCLUDED

#include "cola.h"
#include "persona.h"

struct Estadio;

typedef struct Estadio* EstadioPtr;

EstadioPtr crearEstadio(char nombreEstadio[20], int capacidad, char localidad[20]);

char* getNombreEstadio(EstadioPtr estadio);
int getCapacidad(EstadioPtr estadio);
char* getLocalidad(EstadioPtr estadio);
ColaPtr getColaPersonas(EstadioPtr estadio);
void setNombreEstadio(EstadioPtr estadio, char nuevoNombreEstadio[20]);
void setCapacidadEstadio(EstadioPtr estadio, int nuevaCapacidadEstadio);
void setLocalidadEstadio(EstadioPtr estadio, char nuevaLocalidadEstadio[20]);

void insertarPersonaCola(EstadioPtr estadio, PersonaPtr persona);

void atenderPersona(EstadioPtr estadio);

void mostrarEstadio(EstadioPtr estadio);

void liberarEstadio(EstadioPtr estadio);

#endif // ESTADIO_H_INCLUDED
