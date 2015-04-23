#include "ContactInfoManager.h"
#include <fstream>

// Konstruktori
ContactInfoManager::ContactInfoManager(void)
{
	filename = "Contacts.dat";
	readFile();
	std::cout << "ContactManager created\n";
}

// Destruktori
ContactInfoManager::~ContactInfoManager(void)
{
}

// n‰ytt‰‰ valikon ja lukee k‰ytt‰j‰n syˆtteet
void ContactInfoManager::start()
{
	int vastaus;

	do
	{
		std::cout << "\n --------------------------------" << std::endl;
		std::cout << "\n --------------------------------" << std::endl;
		std::cout << "\n Yhteystiedot" << std::endl;
		std::cout << " Valitse toiminto: " << std::endl;
		std::cout << " 1) Lisaa uusi yhteystieto " << std::endl;
		std::cout << " 2) Tulosta kaikki yhteystiedot " << std::endl;
		std::cout << " 3) Etsi yhteystieto " << std::endl;
		std::cout << " 0) Lopeta " << std::endl;
		std::cout << "\n --------------------------------" << std::endl;
		std::cin >> vastaus;

		if (vastaus == 1)
		{
			std::string nimi, puhnro, email;

			// Kysyt‰‰n k‰ytt‰j‰lt‰ uuden kaverin tiedot
			std::cout << "Kaverin nimi > ";
			std::cin >> nimi;
			std::cout << "Puhelinnumero > ";
			std::cin >> puhnro;
			std::cout << "E-mail > ";
			std::cin >> email;

			// Luodaan uusi ContactInfo-olio
			ContactInfo *ct = new ContactInfo(nimi, puhnro, email);

			// Tehd‰‰n nimest‰ ja ContactInfo-oliosta
			// pari ja lis‰t‰‰n pari multimappiin:
			kaverit.insert(make_pair(nimi, ct));

			// Kirjoitetaan uusi yhteystieto bin‰‰ritiedostoon
			writeToFile(ct);

		}
		else if (vastaus == 2)
		{
			// Esitell‰‰n iteraattori
			std::map< std::string, ContactInfo* >::iterator it;

			// K‰yd‰‰n l‰pi koko s‰iliˆ
			for (it = kaverit.begin(); it != kaverit.end(); it++)
			{
				// second-kohdassa on ContactInfo-olio,
				// pyydet‰‰n sit‰ tulostamaan tietonsa
				it->second->print();
			}
		}
		else if (vastaus == 3)
		{
			// Kysyt‰‰n etsitt‰v‰n yst‰v‰n nimi
			std::string n;
			std::cout << "Anna nimi > ";
			std::cin >> n;
			// K‰ytet‰‰n find-metodia...
			std::map< std::string, ContactInfo* >::iterator it = kaverit.find(n);

			// ...ja katsotaan, lˆytyikˆ annteulla nimell‰ mit‰‰n:
			if (it == kaverit.end())
			{
				std::cout << "Nimella " << n << " ei loytynyt yhteystietoja!" << std::endl;
			}
			else
			{
				std::cout << "Yhteystiedot:" << std::endl;
				// K‰ytˆss‰ map, joten voidaan tulostaa
				// vain yhden yst‰v‰n tiedot:
				it->second->print();
			}

		}
	} while (vastaus != 0);


}

// Kirjoittaa uuden yhteystiedon bin‰‰ritiedoston loppuun
void ContactInfoManager::writeToFile(ContactInfo *newContact)
{
	std::ofstream outputFile(filename, std::ios::binary | std::ios::out | std::ios::app);

	if (outputFile)
	{	
		throw("Eet onnistuna");
		outputFile.write((char *)newContact, sizeof(ContactInfo));

		outputFile.close();
	}
	else
	{
		throw("Eet onnistuna");
	}
}


// Lukee bin‰‰ritiedoston sis‰llˆn map-s‰iliˆˆn
void ContactInfoManager::readFile()
{

	std::ifstream inputFile(filename, std::ios::binary | std::ios::in);

	if (inputFile)
	{

		while (inputFile.peek() != EOF)
		{
			ContactInfo *newContact = new ContactInfo;

			inputFile.read((char*)newContact, sizeof(ContactInfo));

			kaverit.insert(make_pair(newContact->getName(), newContact));

		}

		inputFile.close();
	}
	else
		
	{
		throw("Error in reading file!");
	}

}




