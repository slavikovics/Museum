#pragma once
#include "MuseumStatusController.h"

namespace MuseumNamespace
{
	class Museum
	{
	  private:

		std::string _name;

		std::string _address;

		MuseumStatusController _statusController;

		int _numberOfEmployees;

	  public:

		Museum(std::string name, std::string address, int numberOfEmployees);

		void Open();

		void Close();
	};
}

