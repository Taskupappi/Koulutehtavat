#include "TxtFileReader.h"

int main()
{
		FileReader FR;
	
		std::string text;
		std::string message;
	
	
		std::cout << "annappa tekstia" << std::endl;
		std::cin >> text;
		FR.write(text);
		message = FR.read();
		std::cout << message << std::endl;
	
		system("PAUSE");
	return 0;
}