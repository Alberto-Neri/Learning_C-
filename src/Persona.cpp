#include "Persona.h"
#include <iostream>   
//qui definisco le funzioni più complesse, print è un esempio..    
void Persona::print(){
    std::cout << "ti chiami " << m_nome << " e hai " << m_eta << " anni\n";
}