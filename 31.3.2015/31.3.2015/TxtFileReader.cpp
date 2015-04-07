#include "TxtFileReader.h"
#include <iterator>

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

std::string FileReader::read()
{
	std::fstream _filestream("file.txt", std::fstream::in);
	if (_filestream)
	{
		std::string resource;
		_filestream.seekg(std::ios::beg);
		resource.reserve(static_cast<std::string::size_type>(_filestream.tellg()));
		//int length = is.tellg();
		_filestream.seekg(std::ios::end);


		std::iterator<std::istreambuf_iterator<char>
		resource.assign(std::istreambuf_iterator<char>(_filestream), istreambuf_iterator<char>());
		return resource;

		//char * buffer = new char[length];

		//std::cout <<
		//is.read(buffer, length);

		//if (is)
		//{
		//	std::cout << ""
		//}
	}
}