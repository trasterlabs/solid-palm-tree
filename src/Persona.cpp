#include "Persona.h"

std::string  Persona::mostrarnombre ()
{
    return this->nombre;
}

void Persona::recibirnombre ( std::string  elnombre )
{
    this->nombre = elnombre;
}

int Persona::mostraredad ()
{
    return this->edad;
}

void Persona::recibiredad ( int laedad )
{
    this->edad = laedad;
}
