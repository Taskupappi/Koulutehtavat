#include "Card.h"

Card::Card(std::string t, int p, int to, int m) : Artifact(m , t), Creature(m, p, to) //, Permanent(m)
{

}

Card::Card()
{

}

Card::~Card()
{

}

void Card::print()
{
	std::cout << "Card info: " << std::endl;
}