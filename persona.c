#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "persona.h"

struct Persona{
    char nombrePersona[20];
    int dni;
};

PersonaPtr crearPersona(char nombre[20], int dni){
    PersonaPtr persona = (PersonaPtr)malloc(sizeof(struct Persona));
    strcpy(persona->nombrePersona, nombre);
    persona->dni = dni;
    return persona;
};

char* getNombrePersona(PersonaPtr persona){
    return persona->nombrePersona;
};

int getDni(PersonaPtr persona){
    return persona->dni;
};

void mostrarPersona(PersonaPtr persona){
    printf("La persona es: %s   -   ",persona->nombrePersona);
    printf("El dni de la persona es: %d",persona->dni);
    printf("\n");
};

void mostrarPersonaDatoPtr(DatoPtr dato){
    PersonaPtr persona = (PersonaPtr)dato;
    mostrarPersona(persona);
};

void liberarPersona(PersonaPtr persona){
    free(persona);
};
