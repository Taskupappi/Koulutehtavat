//#include "OmaVektori.h"
//
//#include <iostream>
//
//
//// Konstruktori varaa dynaamisesti tilan taulukolle
//OmaVektori::OmaVektori(int alkupKoko)
//{
//	maxKoko = alkupKoko;
//	koko = 0;
//	taulukko = new int[maxKoko];
//}
//
//
//// Destruktori vapauttaa dynaamiselle taulukolle varatun tilan
//OmaVektori::~OmaVektori(void)
//{
//	delete[] taulukko;
//}
//
//
//
//// Metodi palauttaa true/false sen mukaan,
//// löytyykö parametrina annettu luku taulukosta
//bool OmaVektori::onkoTaulukossa(int luku)
//{
//	bool onTaulukossa = false;
//
//	for (int i = 0; i < koko; i++)
//	{
//		if (taulukko[i] == luku)
//		{
//			onTaulukossa = true;
//			break;
//		}
//	}
//
//	return onTaulukossa;
//}
//
//
//
//
//// Metodi tulostaa taulukon sisällön
//void OmaVektori::tulosta()
//{
//	for (int i = 0; i < koko; i++)
//	{
//		std::cout << taulukko[i] << " ";
//	}
//
//	std::cout << std::endl;
//}
//
//
//
//
//
//// Taulukko poistaa taulukosta luvun, joka
//// sijaitsee parametrina annetussa indeksissä
//void OmaVektori::poista(int indeksi)
//{
//	for (; indeksi < koko; indeksi++)
//	{
//		taulukko[indeksi] = taulukko[indeksi + 1];
//	}
//
//	koko--;
//}
//
//
//
//
//
//// Metodi lisää taulukkoon uuden luvun.
//// Jos taulukko on jo täynnä, varataan uusi tila
//// taulukolle
//void OmaVektori::lisaa(int uusiAlkio)
//{
//	if (koko == maxKoko)
//	{
//		// Tehdään väliaikainen osoitin
//		// vanhaan taulukkoon 
//		int *temp = taulukko;
//
//		// Kasvatetaan maksimikokoa
//		// ja luodaan uusi taulukko
//		maxKoko += 5;
//		taulukko = new int[maxKoko];
//
//		// Kopioidaan vanhan taulukon
//		// numerot uuteen taulukkoon
//		for (int i = 0; i < koko; i++)
//		{
//			taulukko[i] = temp[i];
//		}
//
//		// Vapautetaan vanhan taulukon tila
//		delete[] temp;
//
//	}
//
//	// Lisätään annettu luku taulukkoon
//	taulukko[koko] = uusiAlkio;
//	koko++;
//
//}