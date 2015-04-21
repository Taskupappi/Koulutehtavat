#include <iostream>
#include "Jono.h"

int main()
{
	Jono<float> jono(12);
	//OmaVektori<float> vektori;

	jono.push(10);
	jono.push(20);
	jono.push(30);
	jono.push(30);
	jono.push(30);
	jono.push(40);
	jono.push(50);
	jono.push(60);
	jono.push(70);


	jono.tulosta();


	
	float luku = 0;
	luku = jono.pop();
	
	jono.tulosta();
	std::cout << luku << " " << std::endl;
	

	//vektori.pop();
	//vektori.pop();

//	vektori.tulosta();

	system("PAUSE");
	return 0;
}