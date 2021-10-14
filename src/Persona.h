#ifndef PERSONA
#define PERSONA
#include <string>
class Persona {  //definisco nell'header solo le funzioni "banali"
	std::string m_nome {};
	int m_eta {};

	public:
		Persona(std::string nome, int eta)
		: m_nome {nome}, m_eta {eta}
		{}
		Persona& setNome(std::string nome){
			m_nome = nome;
			return *this;
		}
        void print();
};
#endif