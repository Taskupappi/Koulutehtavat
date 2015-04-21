#ifndef JONO_H
#define JONO_H

template <typename tyyppi> class Jono
{
public:
	Jono(int koko);
	~Jono(void) { delete[] taulukko; }

	void push(tyyppi alkio);
	tyyppi pop();
	void tulosta();

private:
	int maxKoko;
	int top;
	tyyppi *taulukko;
	int koko;
};

template <typename tyyppi> Jono <tyyppi>::Jono(int koko)
{
	maxKoko = koko;
	top = -1;
	taulukko = new tyyppi[koko];
}

template<typename tyyppi> void Jono<tyyppi>::push(tyyppi alkio)
{
	//if (top != (maxKoko - 1))
	//{
	//	taulukko[++top] = alkio;
	//}

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

	taulukko[koko] = alkio;
	koko += 1;
	top++;

}
template <typename tyyppi> tyyppi Jono < tyyppi > ::pop()
{
	tyyppi alkio;

	

	if (top != -1)
	{
		alkio = taulukko[top--];
	}
	return alkio;
}

template <typename tyyppi> void Jono <tyyppi>::tulosta()
{
	for (int i = 0; i < koko; i++)
	{
		std::cout << taulukko[i] << " ";
	}

	std::cout << std::endl;
}

#endif