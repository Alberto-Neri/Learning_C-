#ifndef PERSONA
#define PERSONA
#include <string>
class Persona {  //definisco nell'header solo le funzioni "banali"
	std::string m_nome {};
	int m_eta {};
	std::string m_prefColor{"rosso"};

	public:
		Persona(std::string nome, int eta)
		: m_nome {nome}, m_eta {eta}
		{
		}
		Persona() = default;
		Persona(int eta) 
		: m_eta {eta}
		{
		} 
		
		Persona& setNome(std::string nome){
			m_nome = nome;
			return *this;
		}
        
		friend void color(const Persona& p1); //prima friend function
		friend std::ostream& operator<<(std::ostream& out, const Persona& p1); //overload << con friend function
		virtual std::string print();
};
#endif