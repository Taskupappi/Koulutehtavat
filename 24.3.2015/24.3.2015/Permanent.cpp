#include "Permanent.h"

Permanent::Permanent(int m)
{
	manacost = m;
}

Permanent::Permanent()
{
	manacost = 0;
}


Permanent::~Permanent()
{
	delete[] this;
}


void Permanent::print()
{
	std::cout << "manacost: " << manacost << std::endl;
}