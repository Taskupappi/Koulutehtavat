#pragma once

class Printer
{
public:
	Printer();
	~Printer();

	void print();

private:
	class Impl;
	Impl* _impl;
};