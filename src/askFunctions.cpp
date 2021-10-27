#include <iostream>
#include <string>
#include "ask_function.h"
#include <vector>
#include "NumberException.h"

int askNumber(std::string& str){
	std::cout << str << '\n';
	int input {};
	std::cin >> input;
	
	if (!std::cin){ //non ha inserito un int
		std::cin.clear();
		std::cin.ignore(256, '\n');
		throw NumberException{"ERRORE: non hai inserito un numero intero!\n"};
	}
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

void print_ft(const favorite_things& ft){
	std::cout << "hai detto che la tua squadra preferita e' " << ft.team << '\n';
	std::cout << "e il tuo giocatore: " << ft.player;
}

void print_vect(const std::vector<int>& vect){
	std::cout << "la dimensione del vettore e' " << vect.size() << ". Gli elementi sono: \n";
	for (int elem : vect){
		std::cout << elem << " ";
	} 
}

std::string askName(){
	std::string s {"Come ti chiami? "}; 
	std::cout << s;
	std::string input {};
	std::getline(std::cin >> std::ws, input);
	return input; 
}