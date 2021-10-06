#include "somma.h"
#include <iostream>
#include <string>

struct favorite_things {
	std::string team {};
	std::string player {};
};

int askNumber();
favorite_things ask_favorite_things();

int main()
{
	std::cout << "digita 1 per somma, 2 per domande" << '\n';
	int input = askNumber();
	switch (input){
		case 1: {
			std::cout << "somma int: "<< somma(askNumber(), askNumber()) << '\n';
			std::cout << "somma double: " <<somma(1.2, 4.2);
			break;
		};
		case 2: {
			favorite_things ft {ask_favorite_things()};
			std::cout << "hai detto che la tua squadra preferita e' " << ft.team << " e il tuo giocatore: " << ft.player; 
			break;
		}
		
	}
	return 0;
}

int askNumber(){
	std::string s {"inserisci un valore numerico:"}; 
	std::cout << s << '\n';
	int input {};
	std::cin >> input;
	return input; 
}

favorite_things ask_favorite_things(){
	favorite_things ft {};
	std::cout << "qual e' la tua squadra preferita?" << '\n';
	std::getline(std::cin >> std::ws, ft.team);
	std::cout << "qual e' il tuo giocatore preferito?" << '\n';
	std::getline(std::cin >> std::ws, ft.player);
	return ft; 
}