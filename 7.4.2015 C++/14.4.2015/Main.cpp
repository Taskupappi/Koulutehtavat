#include "OmaPino.h"
#include <iostream>
#include "OmaVektori.h"


int main()
{
	OmaPino<float> pino(2);
	OmaVektori<float> vektori;

	vektori.lisaa(10);
	vektori.lisaa(20);
	vektori.lisaa(30);
	vektori.lisaa(40);
	vektori.lisaa(50);
	vektori.lisaa(60);

	vektori.tulosta();

	

	//vektori.pop();
	//vektori.pop();

	vektori.tulosta();
	
	system("PAUSE");
	return 0;
}