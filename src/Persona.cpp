#include "Persona.h"
#include <iostream>   
//qui definisco le funzioni più complesse, print è un esempio..   

/* void Persona::print(){
    std::cout << "ti chiami " << m_nome << " e hai " << m_eta << " anni\n";
} */

std::ostream& operator<<(std::ostream& out, const Persona& p1){
    out << "ti chiami " << p1.m_nome << " e hai " << p1.m_eta << " anni\n";
    return out; 
}

void color(const Persona& p1) {  //friend function
	std::cout << "il tuo colore preferito e' " << p1.m_prefColor << '\n';
}