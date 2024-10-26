#include "Visitor.h"

namespace MuseumNamespace
{
	Visitor::Visitor(std::string name, int id, EmployeesController& employeesController, VisitorsController& visitorsController)
	{
		_name = name;
		_id = id;
		_employeesController = employeesController;
		_visitorsController = visitorsController;
		_hasTicket = false;
	}

	Visitor::Visitor()
	{

	}

	Visitor::Visitor(const Visitor& other)
	{
		_name = other._name;
		_id = other._id;
		_employeesController = other._employeesController;
		_visitorsController = other._visitorsController;
		_hasTicket = other._hasTicket;
	}

	std::string Visitor::GetName()
	{
		return _name;
	}

	int Visitor::GetId()
	{
		return _id;
	}

	void Visitor::EnterMuseum()
	{
		_visitorsController.AddVisitor(*this);
	}

}