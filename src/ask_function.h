#ifndef FUN_H
#define FUN_H
#include "struct.h" //only here, in main I'll include ask_function.h
#include <vector> //idem

int askNumber(std::string& str);
favorite_things ask_favorite_things();
void print_ft(const favorite_things& ft);
void print_vect(const std::vector<int>& vect);
std::string askString(std::string& str);

#endif