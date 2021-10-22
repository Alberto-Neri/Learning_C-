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

    int getNumMaglia(){
        return m_num_maglia;
    } 
    
    friend std::ostream& operator<<(std::ostream& out, const Calciatore& c){
        out << static_cast<const Persona&>(c) 
        << "sei un calciatore e il tuo numero e' " << c.m_num_maglia << '\n'; 
        return out; 
    }

    /* void print(); */

    std::string print() override {
        return "sei un calciatore\n";
    }
 
};

#endif