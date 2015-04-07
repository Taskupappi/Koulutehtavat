#ifndef OPINTOSUORITUS_H
#define OPINTOSUORITUS_H

#include <iostream>
#include <string>
#include <string.h>

class Opintosuoritus
{
	friend float operator+(const Opintosuoritus &ops1, const Opintosuoritus &ops2);
	//friend Opintosuoritus operator+(const Opintosuoritus &ops1, const Opintosuoritus &ops2);
	friend float operator+(float &luku, const Opintosuoritus &ops1);
	friend float operator+(const Opintosuoritus &ops1, float &luku);

public:
	Opintosuoritus(std::string kN, int l, int a);
	Opintosuoritus();
	~Opintosuoritus();
	void print();

private:
	std::string kurssiNimi;
	int laajuus;
	int arvosana;

};


//Opintosuoritus operator+(const Opintosuoritus &ops1, const Opintosuoritus &ops2)
//{
//	Opintosuoritus op;
//	op.arvosana = ops1.arvosana + ops2.arvosana;
//	return op;
//}


float operator+(const Opintosuoritus &ops1, const Opintosuoritus &ops2)
{
	
	return ops1.arvosana + ops2.arvosana;
}



float operator+(float &luku, const  Opintosuoritus &ops1)
{
	return luku + ops1.arvosana;
}

float operator+(const Opintosuoritus &ops1, float &luku)
{
	return ops1.arvosana + luku;
}


#endif;