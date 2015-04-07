#include "TxtFileReader.h"


FileReader::FileReader()
{
	_filestream.open("file.txt", std::fstream::in | std::fstream::out);
}

FileReader::~FileReader()
{

}


void FileReader::write(const std::string& message)
{
	_filestream << message << std::endl;
}

void FileReader::read()
{
	std::fstream is("file.txt", std::fstream::in);
	if (is)
	{
		is.seekg(0, is.end);
		int length = is.tellg();
		is.seekg(0, is.beg);

		char * buffer = new char[length];

		//std::cout <<
		is.read(buffer, length);

		//if (is)
		//{
		//	std::cout << ""
		//}
	}
}