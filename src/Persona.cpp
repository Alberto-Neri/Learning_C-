#include "Persona.h"
#include <iostream>   
//qui definisco le funzioni più complesse, print è un esempio..    
void Persona::print(){
    std::cout << "ti chiami " << m_nome << " e hai " << m_eta << " anni\n";
}

void color(const Persona& p1) {  //friend function
	std::cout << "il tuo colore preferito e' " << p1.m_prefColor;
}