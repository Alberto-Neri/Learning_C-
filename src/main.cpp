#include "somma.h"
#include "ask_function.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Persona.h"
#include "Calciatore.h"
#include "NumberException.h"

int main()
{
	try {
		std::cout << "digita 1 per somma, 2 per domande, 3 per vettore, 4 per classe, 5 per lettura e scrittura file .txt" << '\n';
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
				/* Persona p1 {askString("Come ti chiami? "), askNumber()};
				std::cout << p1;  */
				//std::cout << p1.setNome("fjehdh").setNome("pippo"); 
				//color(p1);
				str = "Quanti anni hai? ";
				std::string str2 {"Come ti chiami? "};
				Calciatore c1 {askString(str2), askNumber(str), 6}; 
				std::cout << c1; 
				
				Persona& ref2 {c1};
				std::cout << ref2.print();
				break;
			};
			case 5: {
				std::ifstream in_file {"read.txt"};
				std::cout << "Ecco il contenuto del file:\n";
				while (in_file) {
					std::string str {};
					std::getline(in_file, str);
					std::cout << str << "\n";
				}
				std::ofstream out_file {"write.txt", std::ios::app};
				std::string str2 {"Scrivi qualcosa:\n"};
				out_file << askString(str2) << "\n";
			}
			
		}
		return 0;
	} catch (NumberException& exc) {
		std::cerr << exc.getError();
	}
	
}