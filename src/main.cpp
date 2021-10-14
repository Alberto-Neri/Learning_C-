#include "somma.h"
#include "ask_function.h"
#include <iostream>
#include <string>
#include "Persona.h"

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
			p1.print();
			p1.setNome("fjehdh").setNome("pippo").print(); 
			break;
		}
		
	}
	return 0;
}