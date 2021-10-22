#include "somma.h"
#include "ask_function.h"
#include <iostream>
#include <string>
#include "Persona.h"
#include "Calciatore.h"

int main()
{
	std::cout << "digita 1 per somma, 2 per domande, 3 per vettore, 4 per classe" << '\n';
	std::string str {"inserisci un valore numerico: "};
	int input = askNumber(str);
	switch (input){
		case 1: {
			std::cout << "somma int: "<< somma(askNumber(str), askNumber(str)) << '\n';
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
			int n {askNumber(str)};
			while (n != 0){
				vect.push_back(n);
				n = askNumber(str);
			}
			print_vect(vect);
			break;
		};
		case 4: {
			/* Persona p1 {askName(), askNumber()};
			std::cout << p1;  */
			//std::cout << p1.setNome("fjehdh").setNome("pippo"); 
			//color(p1);
			str = "Quanti anni hai? ";
			Calciatore c1 {askName(), askNumber(str), 6}; 
			std::cout << c1; 
			
			Persona& ref2 {c1};
			std::cout << ref2.print();
			break;
		}
		
	}
	return 0;
}