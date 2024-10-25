#pragma once
#include "MuseumStatusController.h"
#include <list>
#include "Visitor.h"
#include "Employee.h"

namespace MuseumNamespace
{
	class Museum
	{
	  private:

		std::string _name;

		std::string _address;

		MuseumStatusController _statusController;

		std::list<Visitor> _visitors;

	  public:

		Museum(std::string name, std::string address);

		void Open();

		void Close();

		std::list<Visitor> GetVisitors()
		{
			return _visitors;
		}
	};
}

