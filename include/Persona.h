#ifndef PERSONA_H
#define PERSONA_H

#include <string>

/// THIS IS A BASIC EXAMPLE, THIS IS NOT A GOOD CODE EXAMPLE !!!!!!

class Persona
{
private:
    std::string nombre;
    int edad;
public:
    std::string mostrarnombre();
    void recibirnombre(std::string elnombre);
    int mostraredad();
    void recibiredad(int laedad);
};


#endif // PERSONA_H
