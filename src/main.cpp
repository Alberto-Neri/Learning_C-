#include "somma.h"
#include "ask_function.h"
#include <iostream>
#include <string>
#include "Persona.h"
#include "Calciatore.h"

int main()
{
	std::cout << "digita 1 per somma, 2 per domande, 3 per vettore, 4 per classe" << '\n';
	int input = askNumber();
	switch (input){
		case 1: {
			std::cout << "somma int: "<< somma(askNumber(), askNumber()) << '\n';
			std::cout << "somma double: " <<somma(1.2, 4.2);
			break;
		};
		case 2: {
			favorite_things ft {ask_favorite_things()};
			print_ft(ft); 
			break;
		}; 
		case 3: {
			std::vector<int> vect; 
			std::cout << "Inserisci gli elementi del vettore uno alla volta, 0 per terminare\n";
			int n {askNumber()};
			while (n != 0){
				vect.push_back(n);
				n = askNumber();
			}
			print_vect(vect);
			break;
		};
		case 4: {
			Persona p1 {askName(), askNumber()};
			std::cout << p1; 
			//std::cout << p1.setNome("fjehdh").setNome("pippo"); 
			//color(p1);
			Calciatore c1 {6}; //default Persona constructor! 
			std::cout << c1; 
			
			Persona& ref1 {p1};
			std::cout << ref1.print();
			Persona& ref2 {c1};
			std::cout << ref2.print();
			break;
		}
		
	}
	return 0;
}