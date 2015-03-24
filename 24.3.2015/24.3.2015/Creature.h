#ifndef CREATURE_H
#define CREATURE_H

#include "Permanent.h"

class Creature : public virtual Permanent
{
public:

	Creature(int m, int p, int t);
	Creature();
	~Creature();

	void print();

	int power;
	int toughness;

private:



};
#endif;