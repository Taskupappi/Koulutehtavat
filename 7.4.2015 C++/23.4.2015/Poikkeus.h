#ifndef POIKKEUS_H
#define POIKKEUS_H
#include <string>

class Poikkeus
{
public:
	Poikkeus(std::string s) : virheTeksti(s) {}
	std::string virheTeksti;

};
#endif