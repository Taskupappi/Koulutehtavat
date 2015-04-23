#ifndef OMAJONO_H
#define OMAJONO_H

#include <iostream>


template< typename tyyppi>
class OmaJono
{
public:
	// Konstruktori. Luodaan taulukko, jonka koko on maxKoko
	OmaJono(int k) : maxKoko(k), koko(-1) { jonoTaulu = new tyyppi[maxKoko]; }

	// Destruktori. Vapautetaan dynaamisen taulukolle varattu tila
	~OmaJono(void) { delete[] jonoTaulu; }

	// Lis‰‰ alkion jonon viimeiseksi
	void push(tyyppi alkio);
	// Palauttaa jonon ensimm‰isen alkion ja poistaa sen jonosta
	tyyppi pop();
	void tulosta();

private:
	// koko = nykyinen koko
	// maxKoko = alkioiden maksimim‰‰r‰
	int koko, maxKoko;
	// osoitin taulukkoon
	tyyppi *jonoTaulu;
};


template< typename tyyppi>
tyyppi OmaJono< tyyppi>::pop()
{
	tyyppi alkio;

	if (koko != -1)
	{
		alkio = jonoTaulu[0];

		// Brute force...
		// Hienostuneempi tapa olisi pit‰‰ 
		// muistissa jonon alku ja loppu
		// ja tehd‰ kopiointi taulukon alkuun
		// vain tarvittaessa
		for (int i = 0; i < koko; i++)
		{
			jonoTaulu[i] = jonoTaulu[i + 1];
		}
		koko--;
	}

	return alkio;
}


template< typename tyyppi>
void OmaJono< tyyppi>::push(tyyppi alkio)
{
	if (koko <= (maxKoko - 1))
	{
		jonoTaulu[++koko] = alkio;
	}
}

template <typename tyyppi> void OmaJono <tyyppi>::tulosta()
{
	for (int i = 0; i < maxKoko; i++)
	{
		std::cout << jonoTaulu[i] << " ";
	}

	std::cout << std::endl;
}


#endif