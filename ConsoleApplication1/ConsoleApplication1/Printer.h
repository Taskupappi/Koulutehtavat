#pragma once

class Printer
{
public:
	void print();

private:
	
	class Impl;

	Impl* _impl;

};