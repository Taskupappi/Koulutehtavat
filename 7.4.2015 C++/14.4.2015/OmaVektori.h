#ifndef OMA_VEKTORI
#define OMA_VEKTORI


template< typename tyyppi> class OmaVektori
{
public:
	// Konstruktori, parametrina maksimikoko
	OmaVektori();
	// Destruktori
	~OmaVektori(void) { delete[] taulukko; }

	void lisaa(tyyppi uusiAlkio);
	void poista(int indeksi);
	void tulosta();
	bool onkoTaulukossa(tyyppi luku);

private:
	// t‰m‰n hetkinen koko
	 int koko;
	// taulukon maksimikoko
	 int maxKoko;
	 int top;
	// osoitin taulukkoon
	tyyppi *taulukko;
};

template< typename tyyppi > OmaVektori< tyyppi >::OmaVektori()
{
	maxKoko = 10;
	koko = 0;
	taulukko = new tyyppi[maxKoko];
}

template< typename tyyppi > void OmaVektori <tyyppi>::lisaa(tyyppi uusiAlkio)
{
	if (koko == maxKoko)
	{

		// Tehd‰‰n v‰liaikainen osoitin
		// vanhaan taulukkoon 
		tyyppi *temp = taulukko;

		// Kasvatetaan maksimikokoa
		// ja luodaan uusi taulukko
		maxKoko += 5;
		taulukko = new tyyppi[maxKoko];

		// Kopioidaan vanhan taulukon
		// numerot uuteen taulukkoon
		for (int i = 0; i < koko; i++)
		{
			taulukko[i] = temp[i];
		}

		// Vapautetaan vanhan taulukon tila
		delete[] temp;
	}
	
	taulukko[koko] = uusiAlkio;
	koko += 1;
	

}



template <typename tyyppi> void OmaVektori <tyyppi>::tulosta()
{
	for (int i = 0; i < koko; i++)
	{
		std::cout << taulukko[i] << " ";
	}

	std::cout << std::endl;
}

template <typename tyyppi> bool OmaVektori <tyyppi>::onkoTaulukossa(tyyppi luku)
{
	bool onTaulukossa = false;

	for (int i = 0; i < koko; i++)
	{
		if (taulukko[i] == luku)
		{
			onTaulukossa = true;
			break;
		}
	}

	return onTaulukossa;
}

template <typename tyyppi> void OmaVektori <tyyppi>::poista(int indeksi)
{

		for (; indeksi < koko; indeksi++)
		{
			taulukko[indeksi] = taulukko[indeksi + 1];
		}
	
		koko--;
}
#endif



