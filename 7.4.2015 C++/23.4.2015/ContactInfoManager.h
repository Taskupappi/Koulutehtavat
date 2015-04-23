#ifndef CONTACT_INFO_MGR
#define CONTACT_INFO_MGR


#include "ContactInfo.h"
#include <map>
#include <string>
#include <iostream>
#include "Poikkeus.h"

class ContactInfoManager
{
public:
	ContactInfoManager(void);
	~ContactInfoManager(void);

	void start();

private:
	std::map< std::string, ContactInfo*> kaverit;
	std::string filename;

	void readFile();
	void writeToFile(ContactInfo *newContact);
};

#endif

