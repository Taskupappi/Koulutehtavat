#include "Opintosuoritus.h"

Opintosuoritus::Opintosuoritus(std::string kN, int l, int a)
{
	kurssiNimi = kN;
	laajuus = l;
	arvosana = a;
}

Opintosuoritus::Opintosuoritus()
{
	kurssiNimi = "Laajamittainen jumittaminen";
	laajuus = 3;
	arvosana = 0;
}

Opintosuoritus::~Opintosuoritus()
{

}

void Opintosuoritus::print()
{
	std::cout << arvosana << std::endl;
}
