#include <iostream>
#include <string>
#include "ask_function.h"

int askNumber(){
	std::string s {"inserisci un valore numerico:"}; 
	std::cout << s << '\n';
	int input {};
	std::cin >> input;
	return input; 
}; 

favorite_things ask_favorite_things(){
	favorite_things ft {};
	std::cout << "qual e' la tua squadra preferita?" << '\n';
	std::getline(std::cin >> std::ws, ft.team);
	std::cout << "qual e' il tuo giocatore preferito?" << '\n';
	std::getline(std::cin >> std::ws, ft.player);
	return ft; 
}

void print_ft(const favorite_things& ft){
	std::cout << "hai detto che la tua squadra preferita e' " << ft.team << '\n';
	std::cout << "e il tuo giocatore: " << ft.player;
}