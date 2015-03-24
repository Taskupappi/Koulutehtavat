#include <cstdio>


#include "Printer.h"
#include "PrinterA.h"

class Printer::Impl
{
public:
	int _number;
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
	printMessage(_impl->_number);
}