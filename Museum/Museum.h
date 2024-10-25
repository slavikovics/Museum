#pragma once
#include "MuseumNamespace.h"

namespace MuseumNamespace
{
	class Museum
	{
	private:

		std::string _name;

		std::string _address;

		int _numberOfEmployees;

	public:

		Museum(std::string name, std::string address, int numberOfEmployees);
	};
}

