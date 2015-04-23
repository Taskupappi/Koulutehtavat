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
	vektori.lisaa(27);
	vektori.lisaa(11);


	pino.push(10);
	pino.push(20);
	pino.tulosta();
	
	try
	{
		pino.pop();
		pino.pop();
		pino.pop();

		/*pino.push(30);
		pino.push(40);
		pino.push(50);
		pino.push(60);
		pino.push(70);*/
	}

	catch (const char *s)
	{
		std::cout << "pookkeus" << s << std::endl;
	}

	//vektori.tulosta();

	

	//vektori.pop();
	//vektori.pop();

	//vektori.tulosta();
	
	system("PAUSE");
	return 0;
}