#ifndef CARD_H
#define CARD_H

#include "Artifact.h"
#include "Creature.h"

class Card : public Artifact, public Creature, public Permanent
{

public:
	Card(std::string t, int p,int to, int m);
	Card();
	~Card();

	void print();

private:


};
#endif;