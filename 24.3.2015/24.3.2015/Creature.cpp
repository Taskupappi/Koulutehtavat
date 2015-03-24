#include "Creature.h"

Creature::Creature(int m, int p, int t) : Permanent(m)
{
	power = p;
	toughness = t;
}

Creature::Creature()
{
	power = 1;
	toughness = 1;
}

Creature::~Creature()
{
	delete[] this;
}

void Creature::print()
{
	std::cout << power << "/" << toughness <<  std::endl;
}