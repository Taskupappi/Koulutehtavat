#include "ContactInfo.h"

#include <iostream>

ContactInfo::ContactInfo(std::string n, std::string p, std::string e) :
name(n), phone(p), email(e)
{
}


ContactInfo::~ContactInfo(void)
{

}

void ContactInfo::print()
{
	std::cout << name << ", " << email << ", " << phone << std::endl;
}


ContactInfo::ContactInfo(ContactInfo &ci)
{
	name = ci.name;
	phone = ci.phone;
	email = ci.email;
}