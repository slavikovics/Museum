#include "Guard.h"

namespace MuseumNamespace
{
	void Guard::IteractionWithVisitor(Visitor& visitor, VisitorsController& visitorsController)
	{
		visitorsController.RemoveVisitor(visitor);
	}

	Guard::Guard(std::string name, int id) : Employee(name, id)
	{

	}
}