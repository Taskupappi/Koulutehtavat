#ifndef  OMAPINO_H
#define OMAPINO_H
#include "Poikkeus.h"






template< typename tyyppi> class OmaPino
{
public:
	OmaPino(int koko);
	~OmaPino(void) { delete[] pinoTaulu; }

	void push(tyyppi alkio);
	tyyppi pop();
	void tulosta();

private:
	int max;
	int top;
	tyyppi *pinoTaulu;
};


template< typename tyyppi > OmaPino< tyyppi >::OmaPino(int koko)
{
	max = koko;
	top = -1;
	pinoTaulu = new tyyppi[koko];
}
template< typename tyyppi > void OmaPino< tyyppi >::push(tyyppi alkio)
{
	if (top != (max - 1))
	{
		pinoTaulu[++top] = alkio;
	}
	else if (top == (max - 1))
	{
		throw(" Ee voe laettaa");
	}
}
template< typename tyyppi > tyyppi OmaPino< tyyppi >::pop()
{
	tyyppi alkio;

	if (top != -1)
	{
		alkio = pinoTaulu[top--];
	}
	else if (top == -1)
	{
		throw (" Ee voe poestaa");
	}

	return alkio;
}
template <typename tyyppi> void OmaPino <tyyppi>::tulosta()
{
	for (int i = 0; i < max; i++)
	{
		std::cout << pinoTaulu[i] << " ";
	}

	std::cout << std::endl;
}



#endif // ! OMAPINO_H
