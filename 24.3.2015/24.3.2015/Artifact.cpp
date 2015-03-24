#include "Artifact.h"

Artifact::Artifact(int m, std::string t ) : Permanent(m)
{
	type = t;
}

Artifact::~Artifact()
{
	delete[] this;
}

void Artifact::print()
{
	std::cout << "type: " << type << std::endl;
}