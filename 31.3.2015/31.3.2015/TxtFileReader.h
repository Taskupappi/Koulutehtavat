#ifndef TXTFILEREADER_H
#define TXTFILEREADER_H

#include <string>
#include <iostream>
#include <fstream>


class FileReader
{

public:
	FileReader();
	~FileReader();

	void write(const std::string& message);
	std::string read();


private:

	std::fstream _filestream;

};

#endif;