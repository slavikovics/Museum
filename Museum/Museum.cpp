#include "MuseumNamespace.h"
#include "Museum.h"

namespace MuseumNamespace
{
	Museum::Museum(std::string name, std::string address, int numberOfEmployees)
	{
		_name = name;
		_address = address;
		_numberOfEmployees = numberOfEmployees;
	}
}

