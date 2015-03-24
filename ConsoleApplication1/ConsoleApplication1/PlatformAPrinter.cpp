#include "PlatformA.h"
#include "Printer.h"
#include "PrinterA.h"
#include <iostream>


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


inline void printMessage(const int a)
{
	printf("Platform B \n", a);
}