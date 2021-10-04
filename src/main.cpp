#include "somma.h"
#include <iostream>

int askNumber();

int main()
{
	for (int x{0}, y{9}; x<10; x++, y--){
		std::cout << x << " " << y << '\n'; 
	}
	std::cout << "somma int: "<< somma(askNumber(), askNumber()) << '\n';
	std::cout << "somma double: " <<somma(1.2, 4.2);
	return 0;
}

int askNumber(){
	std::cout << "ciao, inserisci un valore numerico:" << '\n';
	int input {};
	std::cin >> input;
	return input; 
}