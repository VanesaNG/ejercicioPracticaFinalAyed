#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#include "nodo.h"

struct Persona;

typedef struct Persona* PersonaPtr;

PersonaPtr crearPersona(char nombre[20], int dni);

char* getNombrePersona(PersonaPtr persona);
int getDni(PersonaPtr persona);

void mostrarPersona(PersonaPtr persona);
void mostrarPersonaDatoPtr(DatoPtr dato);

void liberarPersona(PersonaPtr persona);

#endif // PERSONA_H_INCLUDED
