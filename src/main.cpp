#include "somma.h"
#include "ask_function.h"
#include <iostream>
#include <string>

int main()
{
	int arr[] {1,2};
	std::cout << arr << '\n';
	int* arr_ptr{arr};
	std::cout << arr_ptr << *arr_ptr << '\n';
	std::cout << arr[0] << arr[1] << '\n';
	*arr_ptr = 5;
	*(arr + 1) = 6; //== arr[1] == 1[arr]
	std::cout << arr[0] << arr[1] << '\n';


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