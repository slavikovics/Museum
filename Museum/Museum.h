#pragma once
#include "MuseumStatusController.h"
#include "VisitorsController.h"
#include "EmployeesController.h"
#include <list>
#include "Visitor.h"
#include "Employee.h"
#include "IPerson.h"

namespace MuseumNamespace
{
	class Museum
	{
	  private:

		std::string _name;

		std::string _address;

		double _balance;

		MuseumStatusController _statusController;

		VisitorsController _visitorsController;

		EmployeesController _employeesController;

	  public:

		Museum(std::string name, std::string address);

		void Open();

		void Close();
	};
}

