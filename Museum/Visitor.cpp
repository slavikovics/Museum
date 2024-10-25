#include "Visitor.h"

namespace MuseumNamespace
{
	Visitor::Visitor(std::string name, int id)
	{
		_name = name;
		_id = id;
		_hasTicket = false;
	}

	std::string Visitor::GetName()
	{
		return _name;
	}

	int Visitor::GetId()
	{
		return _id;
	}

	void Visitor::EnterMuseum(Museum museum)
	{
		museum.AddVisitor(this);
	}

}