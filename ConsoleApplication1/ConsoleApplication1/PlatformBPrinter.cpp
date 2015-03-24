#include "PlatformB.h"
#include "Printer.h"
#include "PrinterB.h"
#include <iostream>


class Printer::Impl
{
public:
	float _number;
};

Printer::Printer()
	:_impl(new Impl())
{
	_impl->_number = 666;
}

Printer::~Printer()
{
	delete _impl;
}


void Printer::print()
{
	coutMessage(_impl->_number);
}


inline void coutMessage(const float a)
{
	std::cout << "Platform A" << a << std::endl;
}