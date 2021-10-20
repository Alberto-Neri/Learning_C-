#ifndef CALC
#define CALC
#include "Persona.h"
#include <iostream>

class Calciatore : public Persona
{
private:
    int m_num_maglia {};
public:
    Calciatore(std::string nome, int eta, int num_maglia)
    : Persona(nome, eta)
    , m_num_maglia {num_maglia}
    {
    }

    Calciatore(int num_maglia)
    : m_num_maglia {num_maglia}
    {
    }

    void printNumMaglia(){
        std::cout << m_num_maglia << '\n'; 
    } 
};

#endif