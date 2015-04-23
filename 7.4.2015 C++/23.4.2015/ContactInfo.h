#ifndef CONTACT_INFO
#define CONTACT_INFO

#include <string>



class ContactInfo
{
public:
	ContactInfo(std::string n, std::string p, std::string e);
	ContactInfo(){ name = ""; phone = ""; email = ""; };
	ContactInfo(ContactInfo &ci);

	~ContactInfo(void);
	void print();

	std::string getName() { return name; }

private:
	std::string name;
	std::string phone;
	std::string email;
};

#endif

