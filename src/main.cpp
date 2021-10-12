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


	std::cout << "digita 1 per somma, 2 per domande, 3 per vettore" << '\n';
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
		}
		
	}
	return 0;
}