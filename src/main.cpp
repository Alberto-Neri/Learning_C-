#include "somma.h"
#include "ask_function.h"
#include <iostream>
#include <string>

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