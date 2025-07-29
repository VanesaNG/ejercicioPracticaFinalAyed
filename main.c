#include <stdio.h>
#include <stdlib.h>

#include "estadio.h"
#include "persona.h"

int main()
{

    EstadioPtr estadio1 = crearEstadio("Independencia", 500, "Banfield");
    PersonaPtr p1 = crearPersona("Vanesa", 79);
    PersonaPtr p2 = crearPersona("Pablo", 28);
    PersonaPtr p3 = crearPersona("Samuel", 49);
    PersonaPtr p4 = crearPersona("Emilia", 15);
    PersonaPtr p5 = crearPersona("Susana", 66);

    insertarPersonaCola(estadio1, p1);
    insertarPersonaCola(estadio1, p2);
    insertarPersonaCola(estadio1, p3);
    insertarPersonaCola(estadio1, p4);
    insertarPersonaCola(estadio1, p5);

    mostrarCola(getColaPersonas(estadio1), mostrarPersonaDatoPtr);

    atenderPersona(estadio1);

    mostrarCola(getColaPersonas(estadio1), mostrarPersonaDatoPtr);

    return 0;
}
