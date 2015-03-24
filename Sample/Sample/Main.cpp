#include <iostream>
#include <cstring>
#include <utility>
#include <algorithm>
#include <memory>



#if defined(_DEBUG)
#define SAMPLE_MACRO_VARIABLE "DEBUG"
#else 
#define SAMPLE_MACRO_VARIABLE "RELEASE"
#endif;

enum class Gamestate
{
	Pause,
	Play
};

/*
struct Pause(); //ei voi käyttää koska vanhan tyylin enumin kanssa tulisi nimitörmäys.
//enum class kanssa toimii koska se käyttäytyy kuin luokka.
*/


class Sample
{
public:
	Sample()
	:_string(new char[12]) // 12 koska hello world + null terminator!
	{
		strcpy(_string, "Hello World");
	};
	
	//kopio constructori
	Sample(const Sample& sample)
		:_string(new char[12])
	{
		strcpy(_string, sample._string);
	}

	~Sample() 
	{
		delete[] _string;
	};

	//siirto constructori
	Sample(Sample&& sample)
		: _string(nullptr)
	{
		std::swap(_string, sample._string);
	}

	Sample& operator +(Sample&& sample)
	{
		std::swap(_string, sample._string);
		return *this;
	}

	//sijotusoperaattori
	Sample& operator =(const Sample& sample)
	{
		strcpy(_string, sample._string);
		return *this;
	}

private:
	char* _string;
};


void test(std::shared_ptr<int> shared_Ptr)
{
	std::cout << "Look at it go!";
}


int main()
{

	std::cout << "file: " << __FILE__ << " line: " << __LINE__ << SAMPLE_MACRO_VARIABLE << std::endl;


	Gamestate state = Gamestate::Pause;

	//----------------------------------------------------------------------------------//
	//C++ 11 ominaisuuksia:

	int* pointer = nullptr; // NULL = 0, nullptr = NULL osotin arvo. Eri asia kuin vain NULL makro.


	//------------------------------------------------------------------------------------//

	Sample sampleA;
	Sample sampleB(sampleA);
	Sample sampleC(std::move(Sample()));

	//------------------------------------------------------------------------------------------------------//

	//int* i = new int[10];
	//delete[] i;
	//pitää muistaa tehdä poisto!

	// tämän sijaan voidaan c++ 11 kanssa tehdä:
	std::shared_ptr<int> p(new int[10]);
	std::shared_ptr<int> j(p);
	//ei tarvitse poistaa itse~
	//turvallisempi tapa käyttää itse allokoituja osottimia

	test(p);


	return 0;
}

