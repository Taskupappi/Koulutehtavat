#include <iostream>
#include <string>


template <typename T>
T laskeKeskiArvo(T luku1, T luku2, T luku3)
{

	T tulos = (luku1 + luku2 + luku3) / 3;
		return tulos;
}

template<typename T> 
T tarkistaTaulukko(T *luvut, int size)
{
	T vastaus = 0;
	T pienin = 0;

	pienin = luvut[0];

	for (int i = 0; i < size; i++)
	{
		if (luvut[i] < pienin)
		{
			pienin = luvut[i];
		}
	}

	pienin = vastaus;

	return vastaus;
}

//
//template<typename T, type>
//T järjestätaulukko(T)

int main()
{
	

	float l1 = 125.0;
	float l2 = 25.0;
	float l3 = 50.0;

	float tulos = 0;

	tulos = laskeKeskiArvo(l1, l2, l3);
	std::cout << tulos << std::endl;

	//-----------------------------//

	int t[] {10, 2, 4, 6, 6, 6, 2, 1, 125, 67};
	int koko = 10;
	int vastaus = 0;

	vastaus = tarkistaTaulukko(t, koko);

	std::cout << "vastaus: " << vastaus << std::endl;






	system("PAUSE");
}