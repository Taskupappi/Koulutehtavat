#include "ContactInfo.h"
#include <map>
#include <iostream>


#include "ContactInfoManager.h"

void main()
{
	try
	{
		ContactInfoManager mgr;
		mgr.start();
	}
	catch (const char *s)
	{
		std::cout << "Poekkeus" << s << std::endl;
	}
}